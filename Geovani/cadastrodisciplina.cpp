#include "cadastrodisciplina.h"
#include "ui_cadastrodisciplina.h"

cadastrodisciplina::cadastrodisciplina(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::cadastrodisciplina)
{
    ui->setupUi(this);
}

cadastrodisciplina::~cadastrodisciplina()
{
    delete ui;
}

void cadastrodisciplina::on_pushButton_clicked()
{
    QMessageBox::information(this, "Sobre dados", "Deseja salvar dados?");
}

void cadastrodisciplina::on_pushButton_3_clicked()
{
    close();
}
