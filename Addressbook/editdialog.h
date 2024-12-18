#ifndef EDITDIALOG_H
#define EDITDIALOG_H

#include <QDialog>

namespace Ui {
class editDialog;
}

class editDialog :  public QDialog
{
    Q_OBJECT

public:
    explicit editDialog(QWidget *parent = nullptr);
    ~editDialog();

    void Setinfo(QStringList l);
    QString Getinfo();

private:
    Ui::editDialog *ui;
    QString name;       //姓名
    QString tel;        //电话
    QString company;    //公司
    QString address;    //地址
};

#endif // EDITDIALOG_H
