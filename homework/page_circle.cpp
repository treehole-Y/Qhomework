#include "page_circle.h"
#include "ui_page_circle.h"
const double PI=3.14;
Page_circle::Page_circle(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Page_circle)
{
    ui->setupUi(this);
    QPixmap pixmap(":new/ui_image/circle_1.png");
    pixmap=pixmap.scaled( ui->circle_image_1->size(),Qt::KeepAspectRatio);
    ui->circle_image_1->setPixmap(pixmap);
    pixmap.load(":new/ui_image/circle_2.png");
    pixmap=pixmap.scaled( ui->circle_image_2->size(),Qt::KeepAspectRatio);
    ui->circle_image_2->setPixmap(pixmap);
}

Page_circle::~Page_circle()
{
    delete ui;
}

void Page_circle::on_circle_lineE_2_editingFinished()
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

void Page_circle::on_circle_lineE_6_editingFinished()
{
    bool ok;
    double R=ui->circle_lineE_6->text().toDouble(&ok)*2;
    ui->circle_lineE_5->setText(QString::number(R));
    on_circle_lineE_5_editingFinished();
}

void Page_circle::on_circle_lineE_5_editingFinished()
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
