#ifndef FIND_H
#define FIND_H

#include <QDialog>
#include <QList>
#include <QListWidgetItem>

namespace Ui {
class Find;
}

class Find : public QDialog
{
    Q_OBJECT

public:
    explicit Find(QWidget *parent = nullptr);
    ~Find();

    void Showfindresult(QList <QListWidgetItem * >  resList); //显示查询内容

    Ui::Find *ui;   //把find跟主窗口的槽关联起来

public slots:
    void on_findback_clicked();


private:

};

#endif // FIND_H
