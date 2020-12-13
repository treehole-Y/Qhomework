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
    QPixmap pixmap(":new/ui_image/circle_1.png");
    pixmap=pixmap.scaled( ui->garpaic_image_1->size(),Qt::KeepAspectRatio);
    ui->circle_image_1->setPixmap(pixmap);
    pixmap.load(":new/ui_image/circle_2.png");
    pixmap=pixmap.scaled( ui->garpaic_image_2->size(),Qt::KeepAspectRatio);
    ui->circle_image_2->setPixmap(pixmap);
}

void Widget::on_btn_Graphic_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_graphic);
    QPixmap pixmap(":new/ui_image/image_1.png");
    pixmap=pixmap.scaled( ui->garpaic_image_1->size(),Qt::KeepAspectRatio);
    ui->garpaic_image_1->setPixmap(pixmap);
    pixmap.load(":new/ui_image/image_2.png");
    pixmap=pixmap.scaled( ui->garpaic_image_2->size(),Qt::KeepAspectRatio);
    ui->garpaic_image_2->setPixmap(pixmap);

    pixmap.load(":new/ui_image/image_3.png");
    pixmap=pixmap.scaled( ui->graphic_image_3->size(),Qt::KeepAspectRatio);
    ui->graphic_image_3->setPixmap(pixmap);

    pixmap.load(":new/ui_image/image_4.png");
    pixmap=pixmap.scaled( ui->graphic_image_4->size(),Qt::KeepAspectRatio);
    ui->graphic_image_4->setPixmap(pixmap);

    pixmap.load(":new/ui_image/image_5.png");
    pixmap=pixmap.scaled( ui->graphic_image_5->size(),Qt::KeepAspectRatio);
    ui->graphic_image_5->setPixmap(pixmap);

    pixmap.load(":new/ui_image/image_6.png");
    pixmap=pixmap.scaled( ui->graphic_image_6->size(),Qt::KeepAspectRatio);
    ui->graphic_image_6->setPixmap(pixmap);

    pixmap.load(":new/ui_image/image_7.png");
    pixmap=pixmap.scaled( ui->graphic_image_7->size(),Qt::KeepAspectRatio);
    ui->graphic_image_7->setPixmap(pixmap);

    pixmap.load(":new/ui_image/image_8.png");
    pixmap=pixmap.scaled( ui->graphic_image_8->size(),Qt::KeepAspectRatio);
    ui->graphic_image_8->setPixmap(pixmap);
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

void Widget::on_circle_lineE_1_editingFinished()
{

}

void Widget::on_circle_lineE_5_editingFinished()
{
    bool ok;
    double R=ui->circle_lineE_5->text().toDouble(&ok);
    double r=R*0.5;
    double C,area;
    area=PI*(R*R*0.5-r*r);
    C=PI*(R+2*r);
    ui->circle_lineE_6->setText(QString::number(r));
    ui->circle_lineE_7->setText(QString::number(area));
    ui->circle_lineE_8->setText(QString::number(C));
}

void Widget::on_circle_lineE_2_editingFinished()
{
    bool ok;
    double R=ui->circle_lineE_1->text().toDouble(&ok);
    double r=ui->circle_lineE_2->text().toDouble(&ok);
    double C,area;
    area=PI*(R*R-r*r);
    C=2*PI*(R+r);

    ui->circle_lineE_3->setText(QString::number(area));
    ui->circle_lineE_4->setText(QString::number(C));
}

void Widget::on_circle_lineE_6_editingFinished()
{
    bool ok;
    double R=ui->circle_lineE_6->text().toDouble(&ok)*2;
    ui->circle_lineE_5->setText(QString::number(R));
    on_circle_lineE_5_editingFinished();
}

void Widget::on_graphic_lineE_16_editingFinished()
{
    bool ok;
    double A=ui->graphic_lineE_15->text().toDouble(&ok);
    double a=ui->graphic_lineE_16->text().toDouble(&ok);
    double area=(A+a)*A-A*A*0.5-(A+a)*a*0.5-(A-a)*a*0.5;
    ui->graphic_lineE_17->setText(QString::number(area));

}

void Widget::on_graphic_lineE_19_editingFinished()
{
    bool ok;
    double A=ui->graphic_lineE_18->text().toDouble(&ok);
    double a=ui->graphic_lineE_19->text().toDouble(&ok);
    double area=(A+a)*A-A*A*0.5-(A+a)*a*0.5-(A-a)*a;
    ui->graphic_lineE_20->setText(QString::number(area));
}

void Widget::on_graphic_lineE_21_editingFinished()
{
    bool ok;
    double A=ui->graphic_lineE_21->text().toDouble(&ok);

    double Ringarea=A*PI;
    ui->graphic_lineE_22->setText(QString::number(Ringarea));
}

void Widget::on_graphic_lineE_22_editingFinished()
{
    bool ok;
    double Ringarea=ui->graphic_lineE_22->text().toDouble(&ok);

    double area=Ringarea/PI;
    ui->graphic_lineE_21->setText(QString::number(area));
}

void Widget::on_graphic_lineE_23_editingFinished()
{
    bool ok;
    double area=ui->graphic_lineE_23->text().toDouble(&ok);
    double rr=area/(1-PI/4);
    double Cirecle_area=rr*PI;
    ui->graphic_lineE_24->setText(QString::number(Cirecle_area));
}

void Widget::on_graphic_lineE_24_editingFinished()
{
    bool ok;
    double Cirecle_area=ui->graphic_lineE_24->text().toDouble(&ok);
    double rr=Cirecle_area/PI;
    double area=rr-Cirecle_area/4;
    ui->graphic_lineE_23->setText(QString::number(area));
}

void Widget::on_graphic_lineE_25_editingFinished()
{
    bool ok;
    double r=ui->graphic_lineE_25->text().toDouble(&ok);
    double area=r*r-(r*r*PI/4-r*r*0.5)*2;
    double c=r*4+PI*r;
    ui->graphic_lineE_26->setText(QString::number(area));
    ui->graphic_lineE_27->setText(QString::number(c));

    double area_2=r*r-area;
    double c_2=r*PI;
    ui->graphic_lineE_32->setText(QString::number(area_2));
    ui->graphic_lineE_31->setText(QString::number(c_2));
}

void Widget::on_graphic_lineE_28_editingFinished()
{
    bool ok;
    double r=ui->graphic_lineE_28->text().toDouble(&ok);
    double area=r*r-(r*r*PI/4-r*r*0.5)*2;
    area=area*4;
    double c=r*2*4+PI*r*4;
    ui->graphic_lineE_29->setText(QString::number(area));
    ui->graphic_lineE_30->setText(QString::number(c));

    double area_2=4*r*r-area;
    double c_2=r*PI*4;
    ui->graphic_lineE_34->setText(QString::number(area_2));
    ui->graphic_lineE_33->setText(QString::number(c_2));
}
