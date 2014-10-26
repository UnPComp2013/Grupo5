#ifndef CADASTRODISCIPLINA_H
#define CADASTRODISCIPLINA_H

#include <QDialog>

namespace Ui {
class cadastrodisciplina;
}

class cadastrodisciplina : public QDialog
{
    Q_OBJECT

public:
    explicit cadastrodisciplina(QWidget *parent = 0);
    ~cadastrodisciplina();

private slots:
    void on_btCancelar_clicked();

    void on_btLimpar_clicked();

    void on_btSalvar_clicked();

private:
    Ui::cadastrodisciplina *ui;
};

#endif // CADASTRODISCIPLINA_H
