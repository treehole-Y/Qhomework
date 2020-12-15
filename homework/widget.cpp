#include "widget.h"
#include "ui_widget.h"
#include<math.h>
const double  PI=3.14;
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentWidget(ui->page_calculate);


}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_btn_calculate_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_calculate);
}

void Widget::on_btn_trangle_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_trangle);

}

void Widget::on_btn_Circle_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_circle);

}

void Widget::on_btn_Graphic_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_graphic);

}


void Widget::on_trangle_lineE_2_editingFinished()
{
    bool ok;
    double b=ui->trangle_lineE_1->text().toDouble(&ok);
    double h=ui->trangle_lineE_2->text().toDouble(&ok);
    double area_trangle,area;
    area=b*h;
    area_trangle=b*h*0.5;
    ui->trangle_lineE_3->setText(QString::number(area_trangle));
    ui->trangle_lineE_4->setText(QString::number(area));
}
