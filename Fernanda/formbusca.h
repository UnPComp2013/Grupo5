#ifndef FORMBUSCA_H
#define FORMBUSCA_H

#include <QMainWindow>
#include <formcadcursos.h>
#include <formcadprof.h>
#include <formcaddis.h>
#include <formcadturma.h>

namespace Ui {
class formbusca;
}

class formbusca : public QMainWindow
{
    Q_OBJECT

public:
    explicit formbusca(QWidget *parent = 0);
    ~formbusca();

private slots:
    void on_btLimpar_clicked();

    void on_btBuscar_clicked();

    void on_actionCadastro_de_Professor_triggered();

    void on_actionCadastro_de_Curso_triggered();

    void on_actionCadastro_de_Disciplina_triggered();

    void on_actionCadastro_de_Turma_triggered();

private:
    Ui::formbusca *ui;
    formcadcursos *fcadcursos;
    formcadprof *fcadprof;
    formcaddis *fcaddis;
    formcadturma *fcadturma;
    
};

#endif // FORMBUSCA_H
