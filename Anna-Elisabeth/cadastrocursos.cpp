#include "cadastrocursos.h"
#include "ui_cadastrocursos.h"
#include <QMessageBox>

cadastrocursos::cadastrocursos(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cadastrocursos)
{
    ui->setupUi(this);
}

cadastrocursos::~cadastrocursos()
{
    delete ui;
}
void cadastrocursos::on_btCancelar_clicked()
{
    close();
}
void cadastrocursos::on_btLimpar_clicked()
{
    ui->leNome->setText("");
    ui->leCoord->setText("");
    ui->leCargaH->setText("");
}

void cadastrocursos::on_btSalvar_clicked()
{
    QMessageBox::information(this, "Sobre dados", "Deseja salvar dados?");
}
