#ifndef FORMULARIOBUSCA_H
#define FORMULARIOBUSCA_H

#include <QMainWindow>

namespace Ui {
class formulariobusca;
}

class formulariobusca : public QMainWindow
{
    Q_OBJECT

public:
    explicit formulariobusca(QWidget *parent = 0);
    ~formulariobusca();

private slots:
    void on_actionCadastro_Professor_triggered();

    void on_actionCadastro_de_Disciplina_triggered();

    void on_actionCadastro_de_Turma_triggered();

    void on_actionCadastro_de_Hor_rio_triggered();

    void on_btLimpar_clicked();

    void on_btBuscar_clicked();

private:
    Ui::formulariobusca *ui;
};

#endif // FORMULARIOBUSCA_H
