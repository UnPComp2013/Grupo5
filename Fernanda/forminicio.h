#ifndef PRIMEIRA_H
#define PRIMEIRA_H

#include <QMainWindow>

namespace Ui {
class primeira;
}

class primeira : public QMainWindow
{
    Q_OBJECT

public:
    explicit primeira(QWidget *parent = 0);
    ~primeira();

private slots:
    void on_btSobre_clicked();

    void on_btAjuda_clicked();

    void on_btEntrar_clicked();

private:
    Ui::primeira *ui;


};

#endif // PRIMEIRA_H
