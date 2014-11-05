#ifndef FORMCADTURMA_H
#define FORMCADTURMA_H

#include <QDialog>

namespace Ui {
class formcadturma;
}

class formcadturma : public QDialog
{
    Q_OBJECT

public:
    explicit formcadturma(QWidget *parent = 0);
    ~formcadturma();

private slots:
    void on_btCancelar_clicked();

    void on_btLimpar_clicked();

    void on_btSalvar_clicked();

private:
    Ui::formcadturma *ui;
};

#endif // FORMCADTURMA_H
