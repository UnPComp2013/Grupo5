#ifndef FORMBUSCA_H
#define FORMBUSCA_H

#include <QMainWindow>

namespace Ui {
class formbusca;
}

class formbusca : public QMainWindow
{
    Q_OBJECT

public:
    explicit formbusca(QWidget *parent = 0);
    ~formbusca();
    
    private slots:
    void on_btLimpar_clicked();

