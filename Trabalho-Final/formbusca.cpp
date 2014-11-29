#include "formbusca.h"
#include "ui_formbusca.h"

formbusca::formbusca(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::formbusca)
{
    ui->setupUi(this);
    ui->listBusca->setVisible(false);
    formlogin conn;
    if(!conn.conOpen()){
        ui->labelStatus->setText("Erro na conexão ao Banco de Dados.");
    }else{
        ui->labelStatus->setText("Banco de Dados conectado com sucesso!");
    }

}

formbusca::~formbusca()
{
    delete ui;
}

void formbusca::on_btLimpar_clicked()
{
    ui->cbopBusca->setCurrentIndex(0);
    ui->textBusca->clear();
}

void formbusca::on_btBuscar_clicked()
{
    formlogin conn;
    QString busca;
    busca = ui->textBusca->text();
    QSqlQueryModel * modal = new QSqlQueryModel();
    conn.conOpen();
    QSqlQuery* qry = new QSqlQuery(conn.mydb);


    if(ui->cbopBusca->currentText() == "Por Professor"){
        ui->listBusca->setVisible(true);
        qry->prepare("select * from tbl_CadProf where nome like'%busca+%'");
        qry->exec();
        modal->setQuery(*qry);
        ui->listBusca->setModel(modal);

        conn.conClose();
        qDebug()<<(modal->rowCount());
    }else{
        if(ui->cbopBusca->currentText() == "Por Turma"){
            ui->listBusca->setVisible(true);
            qry->prepare("select * from tbl_CadTurma where ano like'%busca+%' order by nameTurma");
            qry->exec();
            modal->setQuery(*qry);
            ui->listBusca->setModel(modal);

            conn.conClose();
            qDebug()<<(modal->rowCount());
        }else{
            if(ui->cbopBusca->currentText() == "Por Disciplina"){
                ui->listBusca->setVisible(true);
                qry->prepare("select * from tbl_CadDis where nomeDis like'%busca%'");
                qry->exec();
                modal->setQuery(*qry);
                ui->listBusca->setModel(modal);

                conn.conClose();
                qDebug()<<(modal->rowCount());
            }else{
                QMessageBox::information(this, "Busca", "Selecione uma opção de busca.");
            }
        }
    }
}

void formbusca::on_actionCadastro_de_Professor_triggered()
{
    /*formcadprof fcadprof;
    fcadprof.setModal(true);
    fcadprof.exec();*/


    fcadprof = new formcadprof(this);
    fcadprof->show();
}

void formbusca::on_actionCadastro_de_Curso_triggered()
{
    /*formcadcursos fcadcursos;
    fcadcursos.setModal(true);
    fcadcursos.exec();*/

    fcadcursos = new formcadcursos(this);
    fcadcursos->show();
}

void formbusca::on_actionCadastro_de_Disciplina_triggered()
{

    /*caddisciplina fcaddis;
    fcaddis.setModal(true);
    fcaddis.exec();*/

    fcaddis = new caddisciplina(this);
    fcaddis->show();
}

void formbusca::on_actionCadastro_de_Turma_triggered()
{
    /*formcadturma fcadturma;
    fcadturma.setModal(true);
    fcadturma.exec();*/

    //fcadturma = new formcadturma(this);
    //fcadturma->show();
}

void formbusca::on_actionSobre_triggered()
{
    /*formsobre fSobre;
    fSobre.setModal(true);
    fSobre.exec();*/

    fSobre = new formsobre(this);
    fSobre->show();
}

void formbusca::on_actionAjuda_triggered()
{
    /*formajuda fAjuda;
    fAjuda.setModal(true);
    fAjuda.exec();*/

    fAjuda = new formajuda(this);
    fAjuda->show();

}
