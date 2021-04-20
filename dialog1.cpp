#include "dialog1.h"
#include "ui_dialog1.h"
#include "dialog2.h"
#include "dialog_advance.h"
#include "dialog_repeat.h"
#include "dialog_chart.h"

extern Dialog2* dlg2;
extern Dialog_advance* dlg3;
extern Dialog_repeat* dlg4;
extern dialog_chart* dlg_chart;

Dialog1::Dialog1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog1)
{
    ui->setupUi(this);
    Qt::WindowFlags flags= this->windowFlags();
    setWindowFlags(flags&~(
                           Qt::WindowContextHelpButtonHint|
                           Qt::WindowMaximizeButtonHint|
                           Qt::WindowMinimizeButtonHint|
                           Qt::WindowCloseButtonHint)
                   );
    ui->advanceButton->setEnabled(false);
    ui->repeatButton->setEnabled(false);
    ui->ontime1Button->setEnabled(false);
    ui->chartButton->setEnabled(false);
}

Dialog1::~Dialog1()
{
    delete ui;
}

void Dialog1::reject()
{
    //QDialog::reject();
}

void Dialog1::on_pushButton_clicked()
{
    //this->close();
    //close也是在调用reject,故无法关闭界面
    this->accept();
}


void Dialog1::on_okButton_clicked()
{
    if(((ui->name1->text()==QString("启蒙"))&&(ui->password->text()==QString("321930")))||
            ((ui->name1->text()==QString("祁萌"))&&(ui->password->text()==QString("123")))
      )
    {
        ui->advanceButton->setEnabled(true);
        ui->repeatButton->setEnabled(true);
        ui->ontime1Button->setEnabled(true);
        ui->chartButton->setEnabled(true);

        QMessageBox::about(this, "温馨提示", "身份确认，获得本软件高级功能使用权。");
    }
    else
    QMessageBox::about(this, "温馨提示", "账号或密码输入错误。");
}

void Dialog1::on_advanceButton_clicked()
{
    ui->password->clear();
    ui->advanceButton->setEnabled(false);
    dlg3->setModal(false);
    dlg3->show();
}

void Dialog1::on_ontime1Button_clicked()
{
    ui->password->clear();
    ui->ontime1Button->setEnabled(false);
    dlg2->setModal(false);
    dlg2->show();
}

void Dialog1::on_repeatButton_clicked()
{
    ui->password->clear();
    ui->repeatButton->setEnabled(false);
    dlg4->setModal(false);
    dlg4->show();
}


void Dialog1::on_chartButton_clicked()
{
    ui->password->clear();
    ui->repeatButton->setEnabled(false);
    dlg_chart->setModal(false);
    dlg_chart->show();

}
