#ifndef MAINWINDOW01_H
#define MAINWINDOW01_H

#include <QMainWindow>

namespace Ui {
class mainwindow01;
}

class mainwindow01 : public QMainWindow
{
    Q_OBJECT

public:
    explicit mainwindow01(QWidget *parent = nullptr);
    ~mainwindow01();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_btnAnaliza_clicked();

private:
    Ui::mainwindow01 *ui;
};

#endif // MAINWINDOW01_H

