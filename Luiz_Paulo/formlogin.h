#ifndef FORMLOGIN_H
#define FORMLOGIN_H

#include <QMainWindow>
#include <formbusca.h>

namespace Ui {
class formlogin;
}

class formlogin : public QMainWindow
{
    Q_OBJECT

public:
    explicit formlogin(QWidget *parent = 0);
    ~formlogin();
    
private slots:
    void on_btVoltarLogin_clicked();

    void on_btEntrarLogin_clicked();
    
    private:
    Ui::formlogin *ui;
