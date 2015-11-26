#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}


QString MainWindow::reverse(QString qs)
{
    QString x = "";
    QChar y;
    for(int i = qs.size()-1; i >= 0; i-- )
    {
        y = qs.at(i);
        x.append(y);
    }
    return x;
}

QString MainWindow::bin2Oct(long bin)
{
    QString dec = bin2Dec(bin);
    QString oct = dec2Oct(dec.toInt());

    return oct;
}

QString MainWindow::bin2Dec(long bin)
{
    long output = 0;
    for(int i=0; bin > 0; i++) {

            if(bin % 10 == 1) {
                output += pow(2, i);
            }
            bin /= 10;
        }
    return QString::number(output);
}

QString MainWindow::bin2Hex(long bin)
{
    QString dec = bin2Dec(bin);
    QString hex = dec2Hex(dec.toInt());

    return hex;
}

QString MainWindow::oct2Bin(int oct)
{
    QString dec = oct2Dec(oct);
    QString bin = dec2Bin(dec.toInt());

    return bin;


    /*
     * Malo
     *
    QString octal = QString::number(oct);
    octal = reverse(octal);
    QString x = "";
    int y = 0;

    QString anw;
    for(int i = 0; i < octal.size(); i++)
    {
        x = octal.at(i);
        y = x.toInt();
        anw.append(reverse(dec2Bin(y)));
    }

    return reverse(anw);
    */
}

QString MainWindow::oct2Dec(int oct)
{
   QString octal = QString::number(oct);
   octal = reverse(octal);
   QString x = "";
   int y = 0;

    int output = 0;
    for(int i=0; i < octal.size(); i++) {
        x = octal.at(i);
        y = x.toInt();
        output += y*pow(8, i);

        }
    return QString::number(output);
}

QString MainWindow::oct2Hex(int oct)
{
    QString dec = oct2Dec(oct);
    QString hex = dec2Hex(dec.toInt());

    return hex;
}

QString MainWindow::dec2Bin(int dec)
{
    QString anw="";

    while(dec > 0)
    {
        if((dec%2) == 0)
        {
            anw.append("0");
        }
        else if((dec%2) == 1)
        {
            anw.append("1");
        }
        dec /= 2;
    }
    return reverse(anw);

}

QString MainWindow::dec2Oct(int dec)
{

    QString anw="";

    while(dec > 0)
    {
        if((dec%8) == 0)
        {
            anw.append("0");
        }
        else if((dec%8) == 1)
        {
            anw.append("1");
        }
        else if((dec%8) == 2)
        {
            anw.append("2");
        }
        else if((dec%8) == 3)
        {
            anw.append("3");
        }
        else if((dec%8) == 4)
        {
            anw.append("4");
        }
        else if((dec%8) == 5)
        {
            anw.append("5");
        }
        else if((dec%8) == 6)
        {
            anw.append("6");
        }
        else if((dec%8) == 7)
        {
            anw.append("7");
        }
        dec /= 8;
    }
    return reverse(anw);
}

QString MainWindow::dec2Hex(int dec)
{

    QString anw="";
    while(dec > 0)
    {
        if((dec%16) == 0)
        {
            anw.append("0");
        }
        else if((dec%16) == 1)
        {
            anw.append("1");
        }
        else if((dec%16) == 2)
        {
            anw.append("2");
        }
        else if((dec%16) == 3)
        {
            anw.append("3");
        }
        else if((dec%16) == 4)
        {
            anw.append("4");
        }
        else if((dec%16) == 5)
        {
            anw.append("5");
        }
        else if((dec%16) == 6)
        {
            anw.append("6");
        }
        else if((dec%16) == 7)
        {
            anw.append("7");
        }
        else if((dec%16) == 8)
        {
            anw.append("8");
        }
        else if((dec%16) == 9)
        {
            anw.append("9");
        }
        else if((dec%16) == 10)
        {
            anw.append("A");
        }
        else if((dec%16) == 11)
        {
            anw.append("B");
        }
        else if((dec%16) == 12)
        {
            anw.append("C");
        }
        else if((dec%16) == 13)
        {
            anw.append("D");
        }
        else if((dec%16) == 14)
        {
            anw.append("E");
        }
        else if((dec%16) == 15)
        {
            anw.append("F");
        }
        dec /= 16;
    }
    return reverse(anw);
}

QString MainWindow::hex2Bin(QString hex)
{
    QString dec = hex2Dec(hex);
    QString bin = dec2Bin(dec.toInt());

    return bin;

    /*
     *
     * Malo
     *
    QString hexa = hex;
    hexa = reverse(hexa);
    QString x = "";
    int y = 0;

    QString anw;
    for(int i = 0; i < hexa.size(); i++)
    {
        x = hexa.at(i);

        if(x == "a" || x == "A")
        {
            anw.append(reverse(dec2Bin(10)));
        }
        else if(x == "b" || x == "B")
        {
            anw.append(reverse(dec2Bin(11)));
        }
        else if(x == "c" || x == "C")
        {
            anw.append(reverse(dec2Bin(12)));
        }
        else if(x == "d" || x == "D")
        {
            anw.append(reverse(dec2Bin(13)));
        }
        else if(x == "e" || x == "E")
        {
            anw.append(reverse(dec2Bin(14)));
        }
        else if(x == "f" || x == "F")
        {
            anw.append(reverse(dec2Bin(15)));
        }
        else
        {
            y = x.toInt();
            anw.append(reverse(dec2Bin(y)));
        }
    }

    return reverse(anw);
    */
}

QString MainWindow::hex2Oct(QString hex)
{
    QString dec = hex2Dec(hex);
    QString oct = dec2Oct(dec.toInt());

    return oct;
}

QString MainWindow::hex2Dec(QString hex)
{
    QString hexa = hex;
    hexa = reverse(hexa);
    QString x = "";
    int y = 0;

     int output = 0;
     for(int i=0; i < hexa.size(); i++) {
         x = hexa.at(i);

         if(x == "a" || x == "A")
         {
             output += 10*pow(16,i);
         }
         else if(x == "b" || x == "B")
         {
             output += 11*pow(16,i);
         }
         else if(x == "c" || x == "C")
         {
             output += 12*pow(16,i);
         }
         else if(x == "d" || x == "D")
         {
             output += 13*pow(16,i);
         }
         else if(x == "e" || x == "E")
         {
             output += 14*pow(16,i);
         }
         else if(x == "f" || x == "F")
         {
             output += 15*pow(16,i);
         }
         else
         {
             y = x.toInt();
             output += y*pow(16, i);
         }
     }
     return QString::number(output);
}

void MainWindow::on_lineEdit_textChanged(const QString &arg1)
{

}

void MainWindow::on_lineEdit_textEdited(const QString &arg1)
{
    if(arg1 == "0" || arg1 == "" || arg1 == " ")
    {
        this->ui->lineEdit->clear();
        this->ui->lineEdit_2->clear();
        this->ui->lineEdit_3->clear();
        this->ui->lineEdit_4->clear();
    }
    else
    {
        int a = ui->lineEdit->text().toLong();

        this->ui->lineEdit_2->setText(bin2Oct(a));
        this->ui->lineEdit_3->setText(bin2Dec(a));
        this->ui->lineEdit_4->setText(bin2Hex(a));
    }
}

void MainWindow::on_lineEdit_2_textEdited(const QString &arg1)
{
    if(arg1 == "0" || arg1 == "" || arg1 == " ")
    {
        this->ui->lineEdit->clear();
        this->ui->lineEdit_2->clear();
        this->ui->lineEdit_3->clear();
        this->ui->lineEdit_4->clear();
    }
    else
    {
        int a = ui->lineEdit_2->text().toInt();

        this->ui->lineEdit->setText(oct2Bin(a));
        this->ui->lineEdit_3->setText(oct2Dec(a));
        this->ui->lineEdit_4->setText(oct2Hex(a));
    }
}

void MainWindow::on_lineEdit_3_textEdited(const QString &arg1)
{
    if(arg1 == "0" || arg1 == "" || arg1 == " ")
    {
        this->ui->lineEdit->clear();
        this->ui->lineEdit_2->clear();
        this->ui->lineEdit_3->clear();
        this->ui->lineEdit_4->clear();
    }
    else
    {
        int a = ui->lineEdit_3->text().toInt();

        this->ui->lineEdit->setText(dec2Bin(a));
        this->ui->lineEdit_2->setText(dec2Oct(a));
        this->ui->lineEdit_4->setText(dec2Hex(a));
    }
}

void MainWindow::on_lineEdit_4_textEdited(const QString &arg1)
{
    if(arg1 == "0" || arg1 == "" || arg1 == " ")
    {
        this->ui->lineEdit->clear();
        this->ui->lineEdit_2->clear();
        this->ui->lineEdit_3->clear();
        this->ui->lineEdit_4->clear();
    }
    else
    {

        QString a = ui->lineEdit_4->text();

        this->ui->lineEdit->setText(hex2Bin(a));
        this->ui->lineEdit_2->setText(hex2Oct(a));
        this->ui->lineEdit_3->setText(hex2Dec(a));

    }
}

MainWindow::~MainWindow()
{
    delete ui;
}



