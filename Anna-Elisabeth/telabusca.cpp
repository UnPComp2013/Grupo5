#include "telabusca.h"
#include "ui_telabusca.h"

telabusca::telabusca(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::telabusca)
{
    ui->setupUi(this);
}

telabusca::~telabusca()
{
    delete ui;
}
