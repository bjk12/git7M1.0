#include "dialog_chart.h"
#include "ui_dialog_chart.h"
#include "mainwindow.h"
dialog_chart::dialog_chart(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dialog_chart)
{
    ui->setupUi(this);

    Qt::WindowFlags flags= this->windowFlags();
    setWindowFlags(flags&~(
                           Qt::WindowContextHelpButtonHint|
                           Qt::WindowMaximizeButtonHint|
                           Qt::WindowMinimizeButtonHint|
                           Qt::WindowCloseButtonHint)
                   );
}

dialog_chart::~dialog_chart()
{
    delete ui;
}

void dialog_chart::reject()
{

}

void dialog_chart::on_quitButton_clicked()
{
    //this->close();
    //close也是在调用reject,故无法关闭界面
    this->accept();
}

void dialog_chart::dataofchart(QByteArray rece_data)
{

}


