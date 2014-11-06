#include <cadastroprofessor.h>
#include <cadastroprofessor.h>
#include <cadastrodisciplina.h>

namespace Ui {
class telabusca;
}

class telabusca : public QMainWindow
{
    Q_OBJECT

public:
    explicit telabusca(QWidget *parent = 0);
    ~telabusca();
private slots:
    void on_btLimpar_clicked();

    void on_btBuscar_clicked();

    void on_actionCadastro_de_Professor_triggered();

    void on_actionCadastro_de_Curso_triggered();

    void on_actionCadastro_de_Disciplina_triggered();
private:
    Ui::telabusca *ui;
    cadastrocursos *cadcursos;
    cadastroprofessor *cadprof;
    cadastrodisciplina *caddisciplina;
};

#endif // TELABUSCA_H
