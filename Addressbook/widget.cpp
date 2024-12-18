#include "widget.h"
#include "ui_widget.h"
#include "add.h"
#include "ui_add.h"
#include "ui_add.h"
#include "find.h"
#include "ui_find.h"
#include "editdialog.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setWindowTitle("个人通讯录");

    file.setFileName("/home/gk/桌面/QT/data.txt");
    //构造函数里添加,读取纯文本文件data.txt并写入listWidget
    if(file.open(QIODevice::ReadOnly|QIODevice::Text))
    {
        //文本流读取文件时，行尾终止符转换为“\n”
        QTextStream readin(&file);
        //不在文件结尾，每行作为一个item添加到listwidget
        while(!readin.atEnd())
        {
            QString line = readin.readLine();//一行一行读取
            ui->listWidget->addItem(line);
        }
        file.close();
    }

    //add.ui addok 点击 关联 Addtolist函数
    connect(add.ui->addok, SIGNAL(clicked()), this, SLOT(Addtolist()));
    //find.ui findok 点击 关联 Sendresult函数
    connect(find.ui->findok, SIGNAL(clicked()), this, SLOT(Sendresult()));


}

Widget::~Widget()
{
    delete ui;
}


//新建联系人
void Widget::on_add_clicked()
{
    //显示add界面并清空各项内容
    add.show();
    add.Setclear();
}

//添加到listWidget
void Widget::Addtolist()
{
    //当前item总数
    int n = ui->listWidget->count();
    //获取ui界面各项信息并添加到listwidget
    QString line = add.Getinfo();
    ui->listWidget->addItem(line);
    //判断是否添加成功
    if(ui->listWidget->count() > n)
    {
        add.close();
        QMessageBox::information(this, "提示", "添加联系人成功！");
    }

}



//修改联系人信息
void Widget::on_edit_clicked()
{
    //判断是否选中
    if(ui->listWidget->selectedItems().isEmpty())
        return;
    else
    {
        //当前item信息
        QString currenline = ui->listWidget->currentItem()->text();
        //以制表符\t为分隔符拆分字符串
        QStringList list = currenline.split("\t");
        editDialog edit;
        edit.show();
        //设置信息
        edit.Setinfo(list);
        //eidt.ui点击ok
        //if(edit.exec() == QDialog::Accepted)
        if(edit.exec() == 1)
        {
            ui->listWidget->currentItem()->setText(edit.Getinfo());
            //判断是否修改，之前和现在信息比较
            if(currenline != ui->listWidget->currentItem()->text())
            {
                QMessageBox::information(this, "提示", "修改成功！");
            }
            else
            {
                QMessageBox::information(this, "提示", "未修改！");
            }
        }
    }

}



//查询联系人
void Widget::on_find_clicked()
{
    find.show();
}

//发送结果，在查找对话框中输入关键字，然后通过查询按钮发送的信号把关键字传送给sendresult()
void Widget::Sendresult()
{
    //每次查询都清空上次查询结果
    find.ui->listWidget->clear();
    //Qt::MatchContains使用给定标志查找文本与字符串文本匹配的项目
    QString target = find.ui->lineEdit->text();
    QList <QListWidgetItem *> resList = ui->listWidget->findItems(target,Qt::MatchContains);
    find.Showfindresult(resList);
    find.exec();
}



//删除联系人
void Widget::on_del_clicked()
{
    //标准按钮接收question返回结果
    QMessageBox::StandardButton result = QMessageBox::question(this, "提示" ,"确定删除该联系人？");
    if(result == QMessageBox::Yes)
    {
        delete ui->listWidget->currentItem();
        QMessageBox::information(this, "提示", "删除成功！");
    }
}



//保存联系人到data.txt
void Widget::on_save_clicked()
{
    //功能：把当前程序中的所有记录保存到data.txt
    if(file.open(QIODevice::WriteOnly))
    {
        QTextStream out(&file);
        for(int i = 0; i < ui->listWidget->count(); i++)
        {
            out << ui->listWidget->item(i)->text() << endl;
        }
        file.close();
        QMessageBox::information(this, "提示", "保存成功！");
    }
    else
    {
        QMessageBox::warning(this, "警告", "保存失败！");
        return;
    }
}
