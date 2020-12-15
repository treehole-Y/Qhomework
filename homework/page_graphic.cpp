#include "page_graphic.h"
#include "ui_page_graphic.h"
#include<math.h>
const double PI=3.14;

Page_graphic::Page_graphic(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Page_graphic)
{
    ui->setupUi(this);
    QPixmap pixmap(":new/ui_image/image_1.png");
    pixmap=pixmap.scaled( ui->image_1->size(),Qt::KeepAspectRatio);
    ui->image_1->setPixmap(pixmap);
    pixmap.load(":new/ui_image/image_2.png");
    pixmap=pixmap.scaled( ui->image_2->size(),Qt::KeepAspectRatio);
    ui->image_2->setPixmap(pixmap);

    pixmap.load(":new/ui_image/image_3.png");
    pixmap=pixmap.scaled( ui->image_3->size(),Qt::KeepAspectRatio);
    ui->image_3->setPixmap(pixmap);

    pixmap.load(":new/ui_image/image_4.png");
    pixmap=pixmap.scaled( ui->image_4->size(),Qt::KeepAspectRatio);
    ui->image_4->setPixmap(pixmap);

    pixmap.load(":new/ui_image/image_5.png");
    pixmap=pixmap.scaled( ui->image_5->size(),Qt::KeepAspectRatio);
    ui->image_5->setPixmap(pixmap);

    pixmap.load(":new/ui_image/image_6.png");
    pixmap=pixmap.scaled( ui->image_6->size(),Qt::KeepAspectRatio);
    ui->image_6->setPixmap(pixmap);

    pixmap.load(":new/ui_image/image_7.png");
    pixmap=pixmap.scaled( ui->image_7->size(),Qt::KeepAspectRatio);
    ui->image_7->setPixmap(pixmap);

    pixmap.load(":new/ui_image/image_8.png");
    pixmap=pixmap.scaled( ui->image_8->size(),Qt::KeepAspectRatio);
    ui->image_8->setPixmap(pixmap);
}

Page_graphic::~Page_graphic()
{
    delete ui;
}

void Page_graphic::on_graphic_lE_1_editingFinished()
{
    bool ok;
    double r=ui->graphic_lE_7->text().toDouble(&ok);
    double area_circle,area_rec,C_circle,C_rec,area_black,C_black;
    area_rec=2*r*r;
    area_circle=r*PI*r;
    area_black=area_circle-area_rec;
    C_circle=r*PI*2.0;
    C_rec=sqrt(2)*4*r;
    C_black=C_circle+C_rec;
    ui->graphic_lE_1->setText(QString::number(C_circle,6,3));//周长
    ui->graphic_lE_2->setText(QString::number(area_circle,6,3));//面积
    ui->graphic_lE_3->setText(QString::number(C_rec,6,3));//方周长
    ui->graphic_lE_4->setText(QString::number(area_rec,6,3));//方面积
    ui->graphic_lE_5->setText(QString::number(C_black));//阴影周长
    ui->graphic_lE_6->setText(QString::number(area_black));//阴影面积
}

void Page_graphic::on_graphic_lE_7_editingFinished()
{
    bool ok;
    double r=ui->graphic_lE_7->text().toDouble(&ok);
    double area_circle,area_rec,C_circle,C_rec,area_black,C_black;
    area_rec=2*r*r;
    area_circle=r*PI*r;
    area_black=area_circle-area_rec;
    C_circle=r*PI*2.0;
    C_rec=sqrt(2)*4*r;
    C_black=C_circle+C_rec;
    ui->graphic_lE_1->setText(QString::number(C_circle,6,3));//周长
    ui->graphic_lE_2->setText(QString::number(area_circle,6,3));//面积
    ui->graphic_lE_3->setText(QString::number(C_rec,6,3));//方周长
    ui->graphic_lE_4->setText(QString::number(area_rec,6,3));//方面积
    ui->graphic_lE_5->setText(QString::number(C_black));//阴影周长
    ui->graphic_lE_6->setText(QString::number(area_black));//阴影面积
}

void Page_graphic::on_graphic_lE_14_editingFinished()
{
    bool ok;
    double r=ui->graphic_lE_14->text().toDouble(&ok);
    double area_circle,area_rec,C_circle,C_rec,area_black,C_black;
    area_rec=4*r*r;
    area_circle=r*PI*r;
    area_black=area_rec-area_circle;
    C_circle=r*PI*2.0;
    C_rec=2*4*r;
    C_black=C_circle+C_rec;
    ui->graphic_lE_8->setText(QString::number(C_circle,6,3));//周长
    ui->graphic_lE_9->setText(QString::number(area_circle,6,3));//面积
    ui->graphic_lE_10->setText(QString::number(C_rec,6,3));//方周长
    ui->graphic_lE_11->setText(QString::number(area_rec,6,3));//方面积
    ui->graphic_lE_12->setText(QString::number(C_black));//阴影周长
    ui->graphic_lE_13->setText(QString::number(area_black));//阴影面积
}

void Page_graphic::on_graphic_lE_16_editingFinished()
{
    bool ok;
    double A=ui->graphic_lE_15->text().toDouble(&ok);
    double a=ui->graphic_lE_16->text().toDouble(&ok);
    double area=(A+a)*A-A*A*0.5-(A+a)*a*0.5-(A-a)*a*0.5;
    ui->graphic_lE_17->setText(QString::number(area));
}

void Page_graphic::on_graphic_lE_19_editingFinished()
{
    bool ok;
    double A=ui->graphic_lE_18->text().toDouble(&ok);
    double a=ui->graphic_lE_19->text().toDouble(&ok);
    double area=(A+a)*A-A*A*0.5-(A+a)*a*0.5-(A-a)*a;
    ui->graphic_lE_20->setText(QString::number(area));
}

void Page_graphic::on_graphic_lE_21_editingFinished()
{
    bool ok;
    double A=ui->graphic_lE_21->text().toDouble(&ok);

    double Ringarea=A*PI;
    ui->graphic_lE_22->setText(QString::number(Ringarea));
}

void Page_graphic::on_graphic_lE_22_editingFinished()
{
    bool ok;
    double Ringarea=ui->graphic_lE_22->text().toDouble(&ok);

    double area=Ringarea/PI;
    ui->graphic_lE_21->setText(QString::number(area));
}

void Page_graphic::on_graphic_lE_23_editingFinished()
{
    bool ok;
    double area=ui->graphic_lE_23->text().toDouble(&ok);
    double rr=area/(1-PI/4);
    double Cirecle_area=rr*PI;
    ui->graphic_lE_24->setText(QString::number(Cirecle_area));
}

void Page_graphic::on_graphic_lE_24_editingFinished()
{
    bool ok;
    double Cirecle_area=ui->graphic_lE_24->text().toDouble(&ok);
    double rr=Cirecle_area/PI;
    double area=rr-Cirecle_area/4;
    ui->graphic_lE_23->setText(QString::number(area));
}

void Page_graphic::on_graphic_lE_25_editingFinished()
{
    bool ok;
    double r=ui->graphic_lE_25->text().toDouble(&ok);
    double area=r*r-(r*r*PI/4-r*r*0.5)*2;
    double c=r*4+PI*r;
    ui->graphic_lE_26->setText(QString::number(area));
    ui->graphic_lE_27->setText(QString::number(c));

    double area_2=r*r-area;
    double c_2=r*PI;
    ui->graphic_lE_32->setText(QString::number(area_2));
    ui->graphic_lE_31->setText(QString::number(c_2));
}

void Page_graphic::on_graphic_lE_28_editingFinished()
{
    bool ok;
    double r=ui->graphic_lE_28->text().toDouble(&ok);
    double area=r*r-(r*r*PI/4-r*r*0.5)*2;
    area=area*4;
    double c=r*2*4+PI*r*4;
    ui->graphic_lE_29->setText(QString::number(area));
    ui->graphic_lE_30->setText(QString::number(c));

    double area_2=4*r*r-area;
    double c_2=r*PI*4;
    ui->graphic_lE_34->setText(QString::number(area_2));
    ui->graphic_lE_33->setText(QString::number(c_2));
}
