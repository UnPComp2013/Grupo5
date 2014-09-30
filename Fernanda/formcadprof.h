#ifndef FORMCADPROF_H
#define FORMCADPROF_H

#include <QDialog>

namespace Ui {
class formcadprof;
}

class formcadprof : public QDialog
{
    Q_OBJECT

public:
    explicit formcadprof(QWidget *parent = 0);
    ~formcadprof();
    
private slots:
    void on_btCancelar_clicked();

    void on_btLimpar_clicked();

    void on_btSalvar_clicked();
    
private:
    Ui::formcadprof *ui;
};

#endif // FORMCADPROF_H
