#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <math.h>
#include <iostream>

namespace Ui {
class MainWindow;
}

using namespace std;
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:

    QString reverse(QString qs );

    QString bin2Oct(long bin);
    QString bin2Dec(long bin);
    QString bin2Hex(long bin);

    QString oct2Bin(int oct);
    QString oct2Dec(int oct);
    QString oct2Hex(int oct);

    QString dec2Bin(int dec);
    QString dec2Oct(int dec);
    QString dec2Hex(int dec);

    QString hex2Bin(QString hex);
    QString hex2Oct(QString hex);
    QString hex2Dec(QString hex);

    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_lineEdit_textChanged(const QString &arg1);

    void on_lineEdit_textEdited(const QString &arg1);

    void on_lineEdit_3_textEdited(const QString &arg1);

    void on_lineEdit_2_textEdited(const QString &arg1);

    void on_lineEdit_4_textEdited(const QString &arg1);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
