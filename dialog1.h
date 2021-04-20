#ifndef DIALOG1_H
#define DIALOG1_H

#include <QDialog>

namespace Ui {
class Dialog1;
}

class Dialog1 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog1(QWidget *parent = 0);
    ~Dialog1();

private slots:
    void on_pushButton_clicked();

    void on_okButton_clicked();

    void on_advanceButton_clicked();

    void on_ontime1Button_clicked();

    void on_repeatButton_clicked();

    void on_chartButton_clicked();

private:
    Ui::Dialog1 *ui;
    void reject();
};

#endif // DIALOG1_H
