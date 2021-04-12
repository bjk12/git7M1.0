#ifndef DIALOG_CHART_H
#define DIALOG_CHART_H

#include <QDialog>

namespace Ui {
class dialog_chart;
}

class dialog_chart : public QDialog
{
    Q_OBJECT

public:
    explicit dialog_chart(QWidget *parent = nullptr);
    ~dialog_chart();
public slots:
    void dataofchart(QByteArray rece_data);

private slots:
    void on_quitButton_clicked();

private:
    Ui::dialog_chart *ui;
    void reject();
};

#endif // DIALOG_CHART_H
