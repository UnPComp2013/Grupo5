#include "telabusca.h"
#include "ui_telabusca.h"
#include <QMessageBox>
#include <cadastroprofessor.h>
#include <cadastrocursos.h>
#include <cadastrodisciplina.h>
telabusca::telabusca(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::telabusca)
{
    ui->setupUi(this);
}
