#ifndef ADD_H
#define ADD_H

#include <QWidget>

namespace Ui {
class Add;
}

class Add : public QWidget
{
    Q_OBJECT

public:
    explicit Add(QWidget *parent = nullptr);
    ~Add();

    QString Getinfo();  //获取信息
    //void Setinfo(QStringList l);  //设置信息
    void Setclear();

    Ui::Add *ui;

private slots:
    void on_add_back_clicked();
    //void on_addok_clicked();

private:
    QString name;       //姓名
    QString tel;        //电话
    QString company;    //公司
    QString address;    //地址
};

#endif // ADD_H
