#ifndef FORMCADDIS_H
#define FORMCADDIS_H

#include <QDialog>

namespace Ui {
class formcaddis;
}

class formcaddis : public QDialog
{
    Q_OBJECT

public:
    explicit formcaddis(QWidget *parent = 0);
    ~formcaddis();

private slots:
    void on_btCancelar_clicked();

    void on_btLimpar_clicked();

    void on_btSalvar_clicked();
