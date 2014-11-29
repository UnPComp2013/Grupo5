#ifndef CADDISCIPLINA_H
#define CADDISCIPLINA_H

#include <QDialog>
#include <formlogin.h>

namespace Ui {
class caddisciplina;
}

class caddisciplina : public QDialog
{
    Q_OBJECT

public:
    explicit caddisciplina(QWidget *parent = 0);
    ~caddisciplina();

private slots:
    void on_btCancelar_clicked();

    void on_btLimpar_clicked();

    void on_btSalvar_clicked();

private:
    Ui::caddisciplina *ui;
};

#endif // CADDISCIPLINA_H
