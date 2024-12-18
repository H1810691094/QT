#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include "add.h"
#include "find.h"
#include <QListView>
#include <QListWidgetItem>
#include <QList>


QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

public slots:
    void Sendresult();
    void Addtolist();

private slots:
    void on_add_clicked();

    void on_edit_clicked();

    void on_find_clicked();

    void on_del_clicked();

    void on_save_clicked();


private:
    Ui::Widget *ui;
    QFile file;
    Add add;
    Find find;
};
#endif // WIDGET_H
