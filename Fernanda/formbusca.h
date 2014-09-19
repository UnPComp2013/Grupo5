#ifndef FORMBUSCA_H
#define FORMBUSCA_H

#include <QMainWindow>

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
    void on_actionCadastro_Professor_triggered();

    void on_actionCadastro_de_Disciplina_triggered();

    void on_actionCadastro_de_Turma_triggered();

    void on_actionCadastro_de_Hor_rio_triggered();

    void on_btLimpar_clicked();

    void on_btBuscar_clicked();

private:
    Ui::formbusca *ui;
};

#endif // FORMBUSCA_H
