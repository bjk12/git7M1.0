#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void serialPort_readyRead();

    void on_searchButton_clicked();

    void on_openButton_clicked();

    void on_sendButton_clicked();

    void on_clearButton_clicked();

    void on_moreButton_clicked();

    void on_saveButton_clicked();

    void repeat(QByteArray data,int i);

private:
    Ui::MainWindow *ui;
    QSerialPort serial;

signals:
    void datatochart(QByteArray rece_data);
};

#endif // MAINWINDOW_H
