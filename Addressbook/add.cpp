#include "add.h"
#include "ui_add.h"
//#include "widget.h"
//#include "ui_widget.h"

Add::Add(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Add)
{
    ui->setupUi(this);
    //设置ui标题
    this->setWindowTitle("添加");
}

Add::~Add()
{
    delete ui;
}


//返回按钮，关闭界面
void Add::on_add_back_clicked()
{
    this->close();
}


//从lineEdit控件获取联系人各项信息，返回一条联系人信息
QString Add::Getinfo()
{
    name = ui->nameEdit->text();
    tel = ui->telEdit->text();
    company = ui->companyEdit->text();
    address = ui->addressEdit->text();

    //制表符分隔
    QString line = name + "\t" + tel + "\t" + company + "\t" + address ;
    return line;
}


//清空lineEdit控件内容
void Add::Setclear()
{
    ui->nameEdit->clear();
    ui->telEdit->clear();
    ui->addressEdit->clear();
    ui->companyEdit->clear();
}


//设置各项信息
//void Add::Setinfo(QStringList l)
//{
//    ui->nameEdit->setText(l[0]);
//    ui->telEdit->setText(l[1]);
//    ui->companyEdit->setText(l[2]);
//    ui->addressEdit->setText(l[3]);
//}
