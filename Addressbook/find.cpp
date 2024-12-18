#include "find.h"
#include "ui_find.h"

Find::Find(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Find)
{
    ui->setupUi(this);
    this->setWindowTitle("查询");
}

Find::~Find()
{
    delete ui;
}

//返回
void Find::on_findback_clicked()
{
    this->close();
}

//显示查询结果
void Find::Showfindresult(QList<QListWidgetItem *> resList)
{
    //判断是否为找到结果
    if(resList.size()==0)
    {
        ui->findresult->setText("NO results!");
        return;
    }
    else
    {
        //.size 数字转化为字符串
        QString num = QString::number(resList.size());
        ui->findresult->setText(num + " item(s) founded: ");
        //循环把查询结果添加到listwidget
        for(int i = 0; i < resList.size(); i++)
        {
            ui->listWidget->addItem(resList[i]->text());
        }
    }
}





