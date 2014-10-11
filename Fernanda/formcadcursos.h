#ifndef FORMCADCURSOS_H
#define FORMCADCURSOS_H

#include <QDialog>

namespace Ui {
class formcadcursos;
}

class formcadcursos : public QDialog
{
    Q_OBJECT
    
public:
    explicit formcadcursos(QWidget *parent = 0);
    ~formcadcursos();

private slots:
    void on_btCancelar_clicked();

    void on_btLimpar_clicked();

    void on_btSalvar_clicked();

private:
    Ui::formcadcursos *ui;
};

#endif // FORMCADCURSOS_H
