#include "formcadcursos.h"
#include "ui_formcadcursos.h"
#include <QMessageBox>

formcadcursos::formcadcursos(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::formcadcursos)
{
    ui->setupUi(this);
}

formcadcursos::~formcadcursos()
{
    delete ui;
}

void formcadcursos::on_btCancelar_clicked()
{
    close();
}

void formcadcursos::on_btLimpar_clicked()
{
    ui->leNome->setText("");
    ui->leCoord->setText("");
    ui->leCargaH->setText("");
}

void formcadcursos::on_btSalvar_clicked()
{
    QMessageBox::information(this, "Sobre dados", "Deseja salvar dados?");
}
void formcadcursos::on_btAddDisciplina_clicked()
{
    formcaddis fcaddis;
    fcaddis.setModal(true);
    fcaddis.exec();
}

