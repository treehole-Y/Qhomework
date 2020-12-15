#ifndef PAGE_GRAPHIC_H
#define PAGE_GRAPHIC_H

#include <QWidget>

namespace Ui {
class Page_graphic;
}

class Page_graphic : public QWidget
{
    Q_OBJECT

public:
    explicit Page_graphic(QWidget *parent = nullptr);
    ~Page_graphic();


private slots:
    void on_graphic_lE_1_editingFinished();

    void on_graphic_lE_7_editingFinished();

    void on_graphic_lE_14_editingFinished();

    void on_graphic_lE_16_editingFinished();

    void on_graphic_lE_19_editingFinished();

    void on_graphic_lE_21_editingFinished();

    void on_graphic_lE_22_editingFinished();

    void on_graphic_lE_23_editingFinished();

    void on_graphic_lE_24_editingFinished();

    void on_graphic_lE_25_editingFinished();

    void on_graphic_lE_28_editingFinished();

private:
    Ui::Page_graphic *ui;
};

#endif // PAGE_GRAPHIC_H
