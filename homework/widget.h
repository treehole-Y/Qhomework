#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_btn_calculate_clicked();

    void on_btn_trangle_clicked();

    void on_btn_Circle_clicked();

    void on_btn_Graphic_clicked();

    void on_graphic_lineE_1_editingFinished();

    void on_graphic_lineE_7_editingFinished();

    void on_graphic_lineE_14_editingFinished();

    void on_trangle_lineE_2_editingFinished();

    void on_circle_lineE_1_editingFinished();

    void on_circle_lineE_5_editingFinished();

    void on_circle_lineE_2_editingFinished();

    void on_circle_lineE_6_editingFinished();

    void on_graphic_lineE_16_editingFinished();

    void on_graphic_lineE_19_editingFinished();

    void on_graphic_lineE_21_editingFinished();

    void on_graphic_lineE_22_editingFinished();

    void on_graphic_lineE_23_editingFinished();

    void on_graphic_lineE_24_editingFinished();

    void on_graphic_lineE_25_editingFinished();

    void on_graphic_lineE_28_editingFinished();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
