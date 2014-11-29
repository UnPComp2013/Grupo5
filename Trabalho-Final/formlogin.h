#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>
#include <formbusca.h>
#include <formcadprof.h>


namespace Ui {
class login;
}

class login : public QDialog
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = 0);
    ~login();

    QSqlDatabase mydb;

    void conClose(){
        mydb.close();
        mydb.removeDatabase(QSqlDatabase::defaultConnection);
    }
    bool conOpen(){
        mydb = QSqlDatabase::addDatabase("QSQLITE");
        mydb.setDatabaseName("C:/Users/Fernanda/Desktop/Banco Qt/trabalho.db");

        if(!mydb.open()){
            qDebug()<<("Erro");
            return false;
        }else{
            qDebug()<<("Conectou");
            return true;
        }
    }

private slots:
    void on_btEntrarLogin_clicked();

private:
    Ui::login *ui;
    formbusca *fBusca;
};

#endif // LOGIN_H
