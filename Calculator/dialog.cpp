#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

const static double PI=3.1416;

void Dialog::on_countBtn_clicked()
{
    bool ok;
    QString tempStr;
    QString valueStr=ui->lineEdit->text();
    int valueInt=valueStr.toInt(&ok);
    double area=valueInt*valueInt*PI;
    ui->areaLabel_2->setText(tempStr.setNum(area));
}
