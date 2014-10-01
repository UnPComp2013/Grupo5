#include "cadastroprofessor.h"
#include "ui_cadastroprofessor.h"

cadastroprofessor::cadastroprofessor(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cadastroprofessor)
{
    ui->setupUi(this);
}

cadastroprofessor::~cadastroprofessor()
{
    delete ui;
}
