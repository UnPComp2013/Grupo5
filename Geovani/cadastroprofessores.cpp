#include "cadastroprofessores.h"
#include "ui_cadastroprofessores.h"

cadastroprofessores::cadastroprofessores(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::cadastroprofessores)
{
    ui->setupUi(this);
}

cadastroprofessores::~cadastroprofessores()
{
    delete ui;
}
