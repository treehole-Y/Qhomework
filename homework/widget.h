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

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
