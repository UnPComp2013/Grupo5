#ifndef CADASTROCURSOS_H
#define CADASTROCURSOS_H

#include <QDialog>

namespace Ui {
class cadastrocursos;
}

class cadastrocursos : public QDialog
{
    Q_OBJECT

public:
    explicit cadastrocursos(QWidget *parent = 0);
    ~cadastrocursos();

private slots:
   void on_btCancelar_clicked();
   void on_btLimpar_clicked();
   void on_btSalvar_clicked();

private:
    Ui::cadastrocursos *ui;
};

#endif // CADASTROCURSOS_H

