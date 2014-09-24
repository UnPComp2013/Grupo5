#ifndef PRIMEIRA_H
#define PRIMEIRA_H

#include <QMainWindow>
#include <formlogin.h>

namespace Ui {
class formInicio;
}

class formInicio : public QMainWindow
{
    Q_OBJECT

public:
    explicit formInicio(QWidget *parent = 0);
    ~formInicio();

private slots:
    void on_btSobre_clicked();

    void on_btAjuda_clicked();

    void on_btEntrar_clicked();

private:
    Ui::formInicio *ui;
    formlogin *fLogin;

};

#endif // FORMINICIO_H
