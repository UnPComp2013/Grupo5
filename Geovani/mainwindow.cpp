#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->actionIncluir_3, SIGNAL(triggered()),this,SLOT(Incluir()));

    ui->frame_InclusaoProf->setVisible(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::Incluir()
{
    ui->frame_InclusaoProf->setVisible(true);
    //QMessageBox::information(this,"Cadastrado com sucesso!!","Foi realizado o cadastro");
}
