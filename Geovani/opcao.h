#ifndef OPCOES_H
#define OPCOES_H

#include <QMainWindow>

namespace Ui {
class opcoes;
}

class opcoes : public QMainWindow
{
    Q_OBJECT

public:
    explicit opcoes(QWidget *parent = 0);
    ~opcoes();

private:
    Ui::opcoes *ui;
};

#endif // OPCOES_H
