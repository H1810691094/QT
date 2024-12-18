#include "editdialog.h"
#include "ui_editdialog.h"

editDialog::editDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::editDialog)
{
    ui->setupUi(this);
    this->setWindowTitle("编辑");
}

editDialog::~editDialog()
{
    delete ui;
}

//获取信息
QString editDialog::Getinfo()
{
    name = ui->namelineEdit->text();
    tel = ui->tellineEdit->text();
    company = ui->complineEdit->text();
    address = ui->addrlineEdit->text();
    QString line = name + "\t" + tel + "\t" + company + "\t" + address ;
    return line;
}

//设置lineEdit控件内容
void editDialog::Setinfo(QStringList l)
{
    ui->namelineEdit->setText(l[0]);
    ui->tellineEdit->setText(l[1]);
    ui->complineEdit->setText(l[2]);
    ui->addrlineEdit->setText(l[3]);
}
