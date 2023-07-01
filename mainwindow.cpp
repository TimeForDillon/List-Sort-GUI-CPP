#include "mainwindow.h"
#include <qobject.h>
#include "ui_mainwindow.h"

LinkedList<int> L1;
Iterator<int> it1;
LinkedList<double> L2;
Iterator<double> it2;
LinkedList<string> L3;
Iterator<string> it3;
LinkedList<Complex> L4;
Iterator<Complex> it4;
LinkedList<Rational> L5;
Iterator<Rational> it5;
LinkedList<Date> L6;
Iterator<Date> it6;
int listCount1;
int range1;
int listCount2;
int range2;
int listCount3;
int range3;
int listCount4;
int range4;
int listCount5;
int range5;
int listCount6;
int range6;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->insertValue->setText("0");
    ui->insertPosition->setText("0");
    ui->insertLabel_3->hide();
    ui->insertLabel_4->hide();
    ui->insertLabel_5->hide();
    ui->insertLabel_6->hide();
    ui->insertLabel_7->hide();
    ui->insertValue_2->hide();
    ui->insertValue_3->hide();
    ui->insertValue_4->hide();
    ui->insertValue_5->hide();
    ui->insertValue_6->hide();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_displayButton_clicked()
{
    if(ui->intButton->isChecked())
    {
        int start = ui->displayFrom->text().toInt();
        if(ui->displayFrom->text().toInt() < 0) start = 0;
        int end = ui->displayTo->text().toInt();
        if(ui->displayTo->text().toInt() > listCount1) end = listCount1;
        range1 = end - start;
        if(L1.begin()==nullptr)
        {
            ui->displayBox->setText("Empty List!");
            //ui->displayTo->setText("0");
            listCount1 = 0;
        }
        else if(ui->displayFrom->text().isEmpty() && ui->displayTo->text().isEmpty())
        {
            string output;
            for (it1 = L1.begin(), listCount1=0; it1 != L1.end(); ++it1, listCount1++)
            {
                output += to_string(*it1) += " ";
            }
            string addstr = to_string(listCount1);
            string addstr2 = to_string(range1);
            output += "\ncount = " + addstr += "\nrange = " + addstr2;
            QString textout = QString::fromStdString(output);
            ui->displayBox->setText(textout);
        }
        else
        {
             string output;
             it1 = L1.begin();
             //moves iterator to indicated start point
             for(int i=0;i<start;i++) ++it1;
             for(int i=start;i<end;i++,++it1)
             {
                 output += to_string(*it1) += " ";
             }
             string addstr = to_string(listCount1);
             string addstr2 = to_string(range1);
             output += "\ncount = " + addstr += "\nrange = " + addstr2;
             QString textout = QString::fromStdString(output);
             ui->displayBox->setText(textout);
        }
    }
    if(ui->doubleButton->isChecked())
    {
        int start = ui->displayFrom->text().toInt();
        if(ui->displayFrom->text().toInt() < 0) start = 0;
        int end = ui->displayTo->text().toInt();
        if(ui->displayTo->text().toInt() > listCount2) end = listCount2;
        range2 = end - start;
        if(L2.begin()==nullptr)
        {
            ui->displayBox->setText("Empty List!");
            //ui->displayTo->setText("0");
            listCount2 = 0;
        }
        else if(ui->displayFrom->text().isEmpty() && ui->displayTo->text().isEmpty())
        {
            string output;
            for (it2 = L2.begin(), listCount2=0; it2 != L2.end(); ++it2, listCount2++)
            {
                output += to_string(*it2) += " ";
            }
            string addstr = to_string(listCount2);
            string addstr2 = to_string(range2);
            output += "\ncount = " + addstr += "\nrange = " + addstr2;
            QString textout = QString::fromStdString(output);
            ui->displayBox->setText(textout);
        }
        else
        {
             string output;
             it2 = L2.begin();
             //moves iterator to indicated start point
             for(int i=0;i<start;i++) ++it2;
             for(int i=start;i<end;i++,++it2)
             {
                 output += to_string(*it2) += " ";
             }
             string addstr = to_string(listCount2);
             string addstr2 = to_string(range2);
             output += "\ncount = " + addstr += "\nrange = " + addstr2;
             QString textout = QString::fromStdString(output);
             ui->displayBox->setText(textout);
        }
    }
    if(ui->stringButton->isChecked())
    {
        int start = ui->displayFrom->text().toInt();
        if(ui->displayFrom->text().toInt() < 0) start = 0;
        int end = ui->displayTo->text().toInt();
        if(ui->displayTo->text().toInt() > listCount3) end = listCount3;
        range3 = end - start;
        if(L3.begin()==nullptr)
        {
            ui->displayBox->setText("Empty List!");
            //ui->displayTo->setText("0");
            listCount3 = 0;
        }
        else if(ui->displayFrom->text().isEmpty() && ui->displayTo->text().isEmpty())
        {
            string output;
            for (it3 = L3.begin(), listCount3=0; it3 != L3.end(); ++it3, listCount3++)
            {
                output += *it3 += " ";
            }
            string addstr = to_string(listCount3);
            string addstr2 = to_string(range3);
            output += "\ncount = " + addstr += "\nrange = " + addstr2;
            QString textout = QString::fromStdString(output);
            ui->displayBox->setText(textout);
        }
        else
        {
             string output;
             it3 = L3.begin();
             //moves iterator to indicated start point
             for(int i=0;i<start;i++) ++it3;
             for(int i=start;i<end;i++,++it3)
             {
                 output += *it3 += " ";
             }
             string addstr = to_string(listCount3);
             string addstr2 = to_string(range3);
             output += "\ncount = " + addstr += "\nrange = " + addstr2;
             QString textout = QString::fromStdString(output);
             ui->displayBox->setText(textout);
        }
    }
    if(ui->complexButton->isChecked())
    {
        int start = ui->displayFrom->text().toInt();
        if(ui->displayFrom->text().toInt() < 0) start = 0;
        int end = ui->displayTo->text().toInt();
        if(ui->displayTo->text().toInt() > listCount4) end = listCount4;
        range4 = end - start;
        if(L4.begin()==nullptr)
        {
            ui->displayBox->setText("Empty List!");
            //ui->displayTo->setText("0");
            listCount4 = 0;
        }
        else if(ui->displayFrom->text().isEmpty() && ui->displayTo->text().isEmpty())
        {
            string output;
            for (it4 = L4.begin(), listCount4=0; it4 != L4.end(); ++it4, listCount4++)
            {
                output += (*it4).to_string(*it4) + " ";
            }
            string addstr = to_string(listCount4);
            string addstr2 = to_string(range4);
            output += "\ncount = " + addstr += "\nrange = " + addstr2;
            QString textout = QString::fromStdString(output);
            ui->displayBox->setText(textout);
        }
        else
        {
             string output;
             it4 = L4.begin();
             //moves iterator to indicated start point
             for(int i=0;i<start;i++) ++it4;
             for(int i=start;i<end;i++,++it4)
             {
                 output += (*it4).to_string(*it4) += " ";
             }
             string addstr = to_string(listCount4);
             string addstr2 = to_string(range4);
             output += "\ncount = " + addstr += "\nrange = " + addstr2;
             QString textout = QString::fromStdString(output);
             ui->displayBox->setText(textout);
        }
    }
    if(ui->rationalButton->isChecked())
    {
        int start = ui->displayFrom->text().toInt();
        if(ui->displayFrom->text().toInt() < 0) start = 0;
        int end = ui->displayTo->text().toInt();
        if(ui->displayTo->text().toInt() > listCount5) end = listCount5;
        range5 = end - start;
        if(L5.begin()==nullptr)
        {
            ui->displayBox->setText("Empty List!");
            //ui->displayTo->setText("0");
            listCount5 = 0;
        }
        else if(ui->displayFrom->text().isEmpty() && ui->displayTo->text().isEmpty())
        {
            string output;
            for (it5 = L5.begin(), listCount5=0; it5 != L5.end(); ++it5, listCount5++)
            {
                output += (*it5).to_string(*it5) + " ";
            }
            string addstr = to_string(listCount5);
            string addstr2 = to_string(range5);
            output += "\ncount = " + addstr += "\nrange = " + addstr2;
            QString textout = QString::fromStdString(output);
            ui->displayBox->setText(textout);
        }
        else
        {
             string output;
             it5 = L5.begin();
             //moves iterator to indicated start point
             for(int i=0;i<start;i++) ++it5;
             for(int i=start;i<end;i++,++it5)
             {
                 output += (*it5).to_string(*it5) += " ";
             }
             string addstr = to_string(listCount5);
             string addstr2 = to_string(range5);
             output += "\ncount = " + addstr += "\nrange = " + addstr2;
             QString textout = QString::fromStdString(output);
             ui->displayBox->setText(textout);
        }
    }
    if(ui->dateButton->isChecked())
    {
        int start = ui->displayFrom->text().toInt();
        if(ui->displayFrom->text().toInt() < 0) start = 0;
        int end = ui->displayTo->text().toInt();
        if(ui->displayTo->text().toInt() > listCount6) end = listCount6;
        range6 = end - start;
        if(L6.begin()==nullptr)
        {
            ui->displayBox->setText("Empty List!");
            //ui->displayTo->setText("0");
            listCount6 = 0;
        }
        else if(ui->displayFrom->text().isEmpty() && ui->displayTo->text().isEmpty())
        {
            string output;
            for (it6 = L6.begin(), listCount6=0; it6 != L6.end(); ++it6, listCount6++)
            {
                output += (*it6).to_string(*it6) + " ";
            }
            string addstr = to_string(listCount6);
            string addstr2 = to_string(range6);
            output += "\ncount = " + addstr += "\nrange = " + addstr2;
            QString textout = QString::fromStdString(output);
            ui->displayBox->setText(textout);
        }
        else
        {
             string output;
             it6 = L6.begin();
             //moves iterator to indicated start point
             for(int i=0;i<start;i++) ++it6;
             for(int i=start;i<end;i++,++it6)
             {
                 output += (*it6).to_string(*it6) += " ";
             }
             string addstr = to_string(listCount6);
             string addstr2 = to_string(range6);
             output += "\ncount = " + addstr += "\nrange = " + addstr2;
             QString textout = QString::fromStdString(output);
             ui->displayBox->setText(textout);
        }
    }
}

void MainWindow::on_push_frontButton_clicked()
{
    if(ui->intButton->isChecked())
    {
        L1.push_front(ui->insertValue->text().toInt());
        ui->insertValue->setText("0");
        on_displayButton_clicked();
    }
    if(ui->doubleButton->isChecked())
    {
        L2.push_front(ui->insertValue->text().toDouble());
        ui->insertValue->setText("0.000000");
        on_displayButton_clicked();
    }
    if(ui->stringButton->isChecked())
    {
        L3.push_front(ui->insertValue->text().toStdString());
        ui->insertValue->setText("String");
        on_displayButton_clicked();
    }
    if(ui->complexButton->isChecked())
    {
        L4.push_front(Complex(ui->insertValue_2->text().toInt(), ui->insertValue_3->text().toInt()));
        ui->insertValue_2->setText("2");
        ui->insertValue_2->setText("3");
        ui->insertPosition->setText("0");
        on_displayButton_clicked();
    }
    if(ui->rationalButton->isChecked())
    {
        int numer = ui->insertValue_2->text().toInt();  // numerator
        int denom = ui->insertValue_3->text().toInt();  // denomenator
        L5.push_front(Rational(numer,denom));
        ui->insertValue_2->setText("0");
        ui->insertValue_3->setText("1");
        on_displayButton_clicked();
    }
    if(ui->dateButton->isChecked())
    {
        int m = ui->insertValue_4->text().toInt();
        int d = ui->insertValue_5->text().toInt();
        int y = ui->insertValue_6->text().toInt();
        L6.push_front(Date(m,d,y));
        ui->insertValue_4->setText("01");
        ui->insertValue_5->setText("31");
        ui->insertValue_6->setText("1999");
        on_displayButton_clicked();
    }
}

void MainWindow::on_push_backButton_clicked()
{
    if(ui->intButton->isChecked())
    {
        L1.push_back(ui->insertValue->text().toInt());
        ui->insertValue->setText("0");
        on_displayButton_clicked();
    }
    if(ui->doubleButton->isChecked())
    {
        L2.push_back(ui->insertValue->text().toDouble());
        ui->insertValue->setText("0.000000");
        on_displayButton_clicked();
    }
    if(ui->stringButton->isChecked())
    {
        L3.push_back(ui->insertValue->text().toStdString());
        ui->insertValue->setText("String");
        on_displayButton_clicked();
    }
    if(ui->complexButton->isChecked())
    {
        L4.push_back(Complex(ui->insertValue_2->text().toInt(), ui->insertValue_3->text().toInt()));
        ui->insertValue_2->setText("2");
        ui->insertValue_2->setText("3");
        ui->insertPosition->setText("0");
        on_displayButton_clicked();
    }
    if(ui->rationalButton->isChecked())
    {
        int numer = ui->insertValue_2->text().toInt();  // numerator
        int denom = ui->insertValue_3->text().toInt();  // denomenator
        L5.push_back(Rational(numer,denom));
        ui->insertValue_2->setText("0");
        ui->insertValue_3->setText("1");
        on_displayButton_clicked();
    }
    if(ui->dateButton->isChecked())
    {
        int m = ui->insertValue_4->text().toInt();
        int d = ui->insertValue_5->text().toInt();
        int y = ui->insertValue_6->text().toInt();
        L6.push_back(Date(m,d,y));
        ui->insertValue_4->setText("01");
        ui->insertValue_5->setText("31");
        ui->insertValue_6->setText("1999");
        on_displayButton_clicked();
    }
}

void MainWindow::on_pop_frontButton_clicked()
{
    if(ui->intButton->isChecked())
    {
        if(L1.begin()==nullptr)
        {
            ui->displayBox->setText("Empty List!");
        }
        else
        {
            L1.pop_front();
            on_displayButton_clicked();
        }
    }
    if(ui->doubleButton->isChecked())
    {
        if(L2.begin()==nullptr)
        {
            ui->displayBox->setText("Empty List!");
        }
        else
        {
            L2.pop_front();
            on_displayButton_clicked();
        }
    }
    if(ui->stringButton->isChecked())
    {
        if(L3.begin()==nullptr)
        {
            ui->displayBox->setText("Empty List!");
        }
        else
        {
            L3.pop_front();
            on_displayButton_clicked();
        }
    }
    if(ui->complexButton->isChecked())
    {
        if(L4.begin()==nullptr)
        {
            ui->displayBox->setText("Empty List!");
        }
        else
        {
            L4.pop_front();
            on_displayButton_clicked();
        }
    }
    if(ui->rationalButton->isChecked())
    {
        if(L5.begin()==nullptr)
        {
            ui->displayBox->setText("Empty List!");
        }
        else
        {
            L5.pop_front();
            on_displayButton_clicked();
        }
    }
    if(ui->dateButton->isChecked())
    {
        if(L6.begin()==nullptr)
        {
            ui->displayBox->setText("Empty List!");
        }
        else
        {
            L6.pop_front();
            on_displayButton_clicked();
        }
    }
}

void MainWindow::on_remove_duplicatesButton_clicked()
{
    if(ui->intButton->isChecked())
    {
        if(L1.begin()==nullptr)
        {
            ui->displayBox->setText("Empty List!");
        }
        else
        {
            L1.remove_duplicates();
            on_displayButton_clicked();
        }
    }
    if(ui->doubleButton->isChecked())
    {
        if(L2.begin()==nullptr)
        {
            ui->displayBox->setText("Empty List!");
        }
        else
        {
            L2.remove_duplicates();
            on_displayButton_clicked();
        }
    }
    if(ui->stringButton->isChecked())
    {
        if(L3.begin()==nullptr)
        {
            ui->displayBox->setText("Empty List!");
        }
        else
        {
            L3.remove_duplicates();
            on_displayButton_clicked();
        }
    }
    if(ui->complexButton->isChecked())
    {
        if(L4.begin()==nullptr)
        {
            ui->displayBox->setText("Empty List!");
        }
        else
        {
            L4.remove_duplicates();
            on_displayButton_clicked();
        }
    }
    if(ui->rationalButton->isChecked())
    {
        if(L5.begin()==nullptr)
        {
            ui->displayBox->setText("Empty List!");
        }
        else
        {
            L5.remove_duplicates();
            on_displayButton_clicked();
        }
    }
    if(ui->dateButton->isChecked())
    {
        if(L6.begin()==nullptr)
        {
            ui->displayBox->setText("Empty List!");
        }
        else
        {
            L6.remove_duplicates();
            on_displayButton_clicked();
        }
    }
}

void MainWindow::on_insertValue_returnPressed()
{
    if(ui->intButton->isChecked())
    {
        on_push_frontButton_clicked();
        on_displayButton_clicked();
    }
    if(ui->doubleButton->isChecked())
    {
        on_push_frontButton_clicked();
        on_displayButton_clicked();
    }
    if(ui->stringButton->isChecked())
    {
        on_push_frontButton_clicked();
        on_displayButton_clicked();
    }
    if(ui->complexButton->isChecked())
    {
        on_push_frontButton_clicked();
        on_displayButton_clicked();
    }
    if(ui->rationalButton->isChecked())
    {
        on_push_frontButton_clicked();
        on_displayButton_clicked();
    }
    if(ui->dateButton->isChecked())
    {
        on_push_frontButton_clicked();
        on_displayButton_clicked();
    }
}

void MainWindow::on_insert_sortButton_clicked()
{
    if(ui->intButton->isChecked())
    {
        if(L1.begin()==nullptr)
        {
            ui->displayBox->setText("Empty List!");
        }
        else
        {
            L1.insert_sorted(ui->insertValue->text().toInt());
            on_displayButton_clicked();
        }
    }
    if(ui->doubleButton->isChecked())
    {
        if(L2.begin()==nullptr)
        {
            ui->displayBox->setText("Empty List!");
        }
        else
        {
            L2.insert_sorted(ui->insertValue->text().toDouble());
            on_displayButton_clicked();
        }
    }
    if(ui->stringButton->isChecked())
    {
        if(L3.begin()==nullptr)
        {
            ui->displayBox->setText("Empty List!");
        }
        else
        {
            L3.insert_sorted(ui->insertValue->text().toStdString());
            on_displayButton_clicked();
        }
    }
    if(ui->complexButton->isChecked())
    {
        if(L4.begin()==nullptr)
        {
            ui->displayBox->setText("Empty List!");
        }
        else
        {
            L4.insert_sorted(Complex(ui->insertValue_2->text().toInt(), ui->insertValue_3->text().toInt()));
            on_displayButton_clicked();
        }
    }
    if(ui->rationalButton->isChecked())
    {
        if(L5.begin()==nullptr)
        {
            ui->displayBox->setText("Empty List!");
        }
        else
        {
            L5.insert_sorted(Rational(ui->insertValue_2->text().toInt(), ui->insertValue_3->text().toInt()));
            on_displayButton_clicked();
        }
    }
    if(ui->dateButton->isChecked())
    {
        if(L6.begin()==nullptr)
        {
            ui->displayBox->setText("Empty List!");
        }
        else
        {
            L6.insert_sorted(Date(ui->insertValue_4->text().toInt(), ui->insertValue_5->text().toInt(), ui->insertValue_6->text().toInt()));
            on_displayButton_clicked();
        }
    }
}

void MainWindow::on_select_sortButton_clicked()
{
    if(ui->intButton->isChecked())
    {
        if(L1.begin()==nullptr)
        {
            ui->displayBox->setText("Empty List!");
        }
        else
        {
            L1.select_sort();
            on_displayButton_clicked();
        }
    }
    if(ui->doubleButton->isChecked())
    {
        if(L2.begin()==nullptr)
        {
            ui->displayBox->setText("Empty List!");
        }
        else
        {
            L2.select_sort();
            on_displayButton_clicked();
        }
    }
    if(ui->stringButton->isChecked())
    {
        if(L3.begin()==nullptr)
        {
            ui->displayBox->setText("Empty List!");
        }
        else
        {
            L3.select_sort();
            on_displayButton_clicked();
        }
    }
    if(ui->complexButton->isChecked())
    {
        if(L4.begin()==nullptr)
        {
            ui->displayBox->setText("Empty List!");
        }
        else
        {
            L4.select_sort();
            on_displayButton_clicked();
        }
    }
    if(ui->rationalButton->isChecked())
    {
        if(L5.begin()==nullptr)
        {
            ui->displayBox->setText("Empty List!");
        }
        else
        {
            L5.select_sort();
            on_displayButton_clicked();
        }
    }
    if(ui->dateButton->isChecked())
    {
        if(L6.begin()==nullptr)
        {
            ui->displayBox->setText("Empty List!");
        }
        else
        {
            L6.select_sort();
            on_displayButton_clicked();
        }
    }
}

void MainWindow::on_insertButton_clicked()
{
    if(ui->intButton->isChecked())
    {
        if(L1.begin()==nullptr)
        {
            L1.push_front(ui->insertValue->text().toInt());
            ui->insertValue->setText("0");
            on_displayButton_clicked();
        }
        else
        {
            L1.insertNode(ui->insertValue->text().toInt(), ui->insertPosition->text().toInt(),listCount1);
            on_displayButton_clicked();
            ui->insertValue->setText("0");
            ui->insertPosition->setText("0");
        }
    }
    if(ui->doubleButton->isChecked())
    {
        if(L2.begin()==nullptr)
        {
            L2.push_front(ui->insertValue->text().toDouble());
            ui->insertValue->setText("0.000000");
            on_displayButton_clicked();
        }
        else
        {
            L2.insertNode(ui->insertValue->text().toDouble(), ui->insertPosition->text().toInt(),listCount2);
            on_displayButton_clicked();
            ui->insertValue->setText("0.000000");
            ui->insertPosition->setText("0");
        }
    }
    if(ui->stringButton->isChecked())
    {
        if(L3.begin()==nullptr)
        {
            L3.push_front(ui->insertValue->text().toStdString());
            ui->insertValue->setText("String");
            on_displayButton_clicked();
        }
        else
        {
            L3.insertNode(ui->insertValue->text().toStdString(), ui->insertPosition->text().toInt(),listCount3);
            on_displayButton_clicked();
            ui->insertValue->setText("String");
            ui->insertPosition->setText("0");
        }
    }
    if(ui->complexButton->isChecked())
    {
        if(L4.begin()==nullptr)
        {
            int a = ui->insertValue_2->text().toInt();  // numerator
            int b = ui->insertValue_3->text().toInt();  // denomenator
            L4.push_front(Complex(a,b));
            ui->insertValue_2->setText("2");
            ui->insertValue_3->setText("3");
            on_displayButton_clicked();
        }
        else
        {
            L4.insertNode(Complex(ui->insertValue_2->text().toInt(), ui->insertValue_3->text().toInt()), ui->insertPosition->text().toInt(), listCount4);
            on_displayButton_clicked();
            ui->insertValue_2->setText("2");
            ui->insertValue_2->setText("3");
            ui->insertPosition->setText("0");
        }
    }
    if(ui->rationalButton->isChecked())
    {
        if(L5.begin()==nullptr)
        {
            int numer = ui->insertValue_2->text().toInt();  // numerator
            int denom = ui->insertValue_3->text().toInt();  // denomenator
            L5.push_front(Rational(numer,denom));
            ui->insertValue_2->setText("0");
            ui->insertValue_3->setText("1");
            on_displayButton_clicked();
        }
        else
        {
            L5.insertNode(Rational(ui->insertValue_2->text().toInt(), ui->insertValue_3->text().toInt()), ui->insertPosition->text().toInt(), listCount5);
            on_displayButton_clicked();
            ui->insertValue_2->setText("0");
            ui->insertValue_3->setText("1");
            ui->insertPosition->setText("0");
        }
    }
    if(ui->dateButton->isChecked())
    {
        if(L6.begin()==nullptr)
        {
            int m = ui->insertValue_4->text().toInt();
            int d = ui->insertValue_5->text().toInt();
            int y = ui->insertValue_6->text().toInt();
            L6.push_front(Date(m,d,y));
            ui->insertValue_4->setText("01");
            ui->insertValue_5->setText("31");
            ui->insertValue_6->setText("1999");
            on_displayButton_clicked();
        }
        else
        {
            L6.insertNode(Date(ui->insertValue_4->text().toInt(), ui->insertValue_5->text().toInt(), ui->insertValue_6->text().toInt()), ui->insertPosition->text().toInt(), listCount6);
            on_displayButton_clicked();
            ui->insertValue_4->setText("01");
            ui->insertValue_5->setText("31");
            ui->insertValue_6->setText("1999");
            ui->insertPosition->setText("0");
        }
    }
}


void MainWindow::on_intButton_clicked()
{
    ui->insertValue->show();
    ui->insertValue_2->hide();
    ui->insertValue_3->hide();
    ui->insertValue_4->hide();
    ui->insertValue_5->hide();
    ui->insertValue_6->hide();
    ui->insertLabel_3->hide();
    ui->insertLabel_4->hide();
    ui->insertLabel_5->hide();
    ui->insertLabel_6->hide();
    ui->insertLabel_7->hide();
    ui->insertValue->setText("0");
    on_displayButton_clicked();
}

void MainWindow::on_doubleButton_clicked()
{
    ui->insertValue->show();
    ui->insertValue_2->hide();
    ui->insertValue_3->hide();
    ui->insertValue_4->hide();
    ui->insertValue_5->hide();
    ui->insertValue_6->hide();
    ui->insertLabel_3->hide();
    ui->insertLabel_4->hide();
    ui->insertLabel_5->hide();
    ui->insertLabel_6->hide();
    ui->insertLabel_7->hide();
    ui->insertValue->setText("0.000000");
    on_displayButton_clicked();
}

void MainWindow::on_stringButton_clicked()
{
    ui->insertValue->show();
    ui->insertValue_2->hide();
    ui->insertValue_3->hide();
    ui->insertValue_4->hide();
    ui->insertValue_5->hide();
    ui->insertValue_6->hide();
    ui->insertLabel_3->hide();
    ui->insertLabel_4->hide();
    ui->insertLabel_5->hide();
    ui->insertLabel_6->hide();
    ui->insertLabel_7->hide();
    ui->insertValue->setText("String");
    on_displayButton_clicked();
}

void MainWindow::on_rationalButton_clicked()
{
    ui->insertValue->hide();
    ui->insertValue_2->show();
    ui->insertValue_3->show();
    ui->insertValue_4->hide();
    ui->insertValue_5->hide();
    ui->insertValue_6->hide();
    ui->insertLabel_3->show();
    ui->insertLabel_4->hide();
    ui->insertLabel_5->hide();
    ui->insertLabel_6->hide();
    ui->insertLabel_7->hide();
    ui->insertValue_2->setText("0");
    ui->insertValue_3->setText("1");
    on_displayButton_clicked();
}

void MainWindow::on_dateButton_clicked()
{
    ui->insertValue->hide();
    ui->insertValue_2->hide();
    ui->insertValue_3->hide();
    ui->insertValue_4->show();
    ui->insertValue_5->show();
    ui->insertValue_6->show();
    ui->insertLabel_3->hide();
    ui->insertLabel_4->hide();
    ui->insertLabel_5->show();
    ui->insertLabel_6->hide();
    ui->insertLabel_7->show();
    ui->insertValue_4->setText("01");
    ui->insertValue_5->setText("31");
    ui->insertValue_6->setText("1999");
    on_displayButton_clicked();
}

void MainWindow::on_complexButton_clicked()
{
    ui->insertValue->hide();
    ui->insertValue_2->show();
    ui->insertValue_3->show();
    ui->insertValue_4->hide();
    ui->insertValue_5->hide();
    ui->insertValue_6->hide();
    ui->insertLabel_3->hide();
    ui->insertLabel_4->show();
    ui->insertLabel_5->hide();
    ui->insertLabel_6->show();
    ui->insertLabel_7->hide();
    ui->insertValue_2->setText("2");
    ui->insertValue_3->setText("3");
    on_displayButton_clicked();
}
