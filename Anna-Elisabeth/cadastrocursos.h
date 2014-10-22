#ifndef CADASTROCURSOS_H
#define CADASTROCURSOS_H

#include <QDialog>

namespace Ui {
class cadastrocursos;
}

class cadastrocursos : public QDialog
{
    Q_OBJECT

public:
    explicit cadastrocursos(QWidget *parent = 0);
    ~cadastrocursos();

private:
    Ui::cadastrocursos *ui;
};

#endif // CADASTROCURSOS_H
