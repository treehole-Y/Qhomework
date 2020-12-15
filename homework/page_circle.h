#ifndef PAGE_CIRCLE_H
#define PAGE_CIRCLE_H

#include <QWidget>

namespace Ui {
class Page_circle;
}

class Page_circle : public QWidget
{
    Q_OBJECT

public:
    explicit Page_circle(QWidget *parent = nullptr);
    ~Page_circle();

private slots:
    void on_circle_lineE_2_editingFinished();

    void on_circle_lineE_6_editingFinished();

    void on_circle_lineE_5_editingFinished();

private:
    Ui::Page_circle *ui;
};

#endif // PAGE_CIRCLE_H
