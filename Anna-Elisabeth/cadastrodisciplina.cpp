#include "cadastrodisciplina.h"
#include "ui_cadastrodisciplina.h"
#include <QMessageBox>
cadastrodisciplina::cadastrodisciplina(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cadastrodisciplina)
{
    ui->setupUi(this);
}

cadastrodisciplina::~cadastrodisciplina()
{
    delete ui;
}

void cadastrodisciplina::on_btCancelar_clicked()
{
    close();
}

void cadastrodisciplina::on_btLimpar_clicked()
{
    ui->leNome->setText("");
    ui->leCargaH->setText("");
}

void cadastrodisciplina::on_btSalvar_clicked()
{
    QMessageBox::information(this, "Sobre dados", "Deseja salvar dados?");
}
