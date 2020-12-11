#include "widget.h"
#include "ui_widget.h"
#include<math.h>
const double  PI=3.14;
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);



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
    QPixmap pixmap(":new/ui_image/Circle-rect.png");
    pixmap=pixmap.scaled( ui->garpaic_image_1->size(),Qt::KeepAspectRatio);
    ui->garpaic_image_1->setPixmap(pixmap);
    pixmap.load(":new/ui_image/Rect-circle.png");
     pixmap=pixmap.scaled( ui->garpaic_image_2->size(),Qt::KeepAspectRatio);
     ui->garpaic_image_2->setPixmap(pixmap);
}

void Widget::on_graphic_lineE_1_editingFinished()
{
    double r=ui->graphic_lineE_1->text().toDouble()/2.0/PI;
    ui->graphic_lineE_7->setText(QString::number(r));
    on_graphic_lineE_7_editingFinished();
}
//外圆内方改变半径
void Widget::on_graphic_lineE_7_editingFinished()
{
    bool ok;
    double r=ui->graphic_lineE_7->text().toDouble(&ok);
    double area_circle,area_rec,C_circle,C_rec,area_black,C_black;
    area_rec=2*r*r;
    area_circle=r*PI*r;
    area_black=area_circle-area_rec;
    C_circle=r*PI*2.0;
    C_rec=sqrt(2)*4*r;
    C_black=C_circle+C_rec;
    ui->graphic_lineE_1->setText(QString::number(C_circle,6,3));//周长
    ui->graphic_lineE_2->setText(QString::number(area_circle,6,3));//面积
    ui->graphic_lineE_3->setText(QString::number(C_rec,6,3));//方周长
    ui->graphic_lineE_4->setText(QString::number(area_rec,6,3));//方面积
    ui->graphic_lineE_5->setText(QString::number(C_black));//阴影周长
    ui->graphic_lineE_6->setText(QString::number(area_black));//阴影面积
}
//外方内圆半径
void Widget::on_graphic_lineE_14_editingFinished()
{
    bool ok;
    double r=ui->graphic_lineE_14->text().toDouble(&ok);
    double area_circle,area_rec,C_circle,C_rec,area_black,C_black;
    area_rec=4*r*r;
    area_circle=r*PI*r;
    area_black=area_rec-area_circle;
    C_circle=r*PI*2.0;
    C_rec=2*4*r;
    C_black=C_circle+C_rec;
    ui->graphic_lineE_8->setText(QString::number(C_circle,6,3));//周长
    ui->graphic_lineE_9->setText(QString::number(area_circle,6,3));//面积
    ui->graphic_lineE_10->setText(QString::number(C_rec,6,3));//方周长
    ui->graphic_lineE_11->setText(QString::number(area_rec,6,3));//方面积
    ui->graphic_lineE_12->setText(QString::number(C_black));//阴影周长
    ui->graphic_lineE_13->setText(QString::number(area_black));//阴影面积
}
