#include "cadastrohorario.h"
#include "ui_cadastrohorario.h"

cadastrohorario::cadastrohorario(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::cadastrohorario)
{
    ui->setupUi(this);
}

cadastrohorario::~cadastrohorario()
{
    delete ui;
}


void cadastrohorario::on_pushButton_4_clicked()
{
    close();
}

void cadastrohorario::on_pushButton_2_clicked()
{
    QMessageBox::information(this, "Sobre dados", "Deseja salvar dados?");
}
