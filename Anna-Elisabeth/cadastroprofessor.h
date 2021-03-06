#ifndef CADASTROPROFESSOR_H
#define CADASTROPROFESSOR_H

#include <QDialog>

namespace Ui {
class cadastroprofessor;
}

class cadastroprofessor : public QDialog
{
    Q_OBJECT

public:
    explicit cadastroprofessor(QWidget *parent = 0);
    ~cadastroprofessor();

private slots:
    void on_btCancelar_clicked();

    void on_btLimpar_clicked();

    void on_btSalvar_clicked();

private:
    Ui::cadastroprofessor *ui;
};

#endif // CADASTROPROFESSOR_H

