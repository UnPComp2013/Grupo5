#ifndef CADASTROPROFESSORES_H
#define CADASTROPROFESSORES_H

#include <QMainWindow>

namespace Ui {
class cadastroprofessores;
}

class cadastroprofessores : public QMainWindow
{
    Q_OBJECT

public:
    explicit cadastroprofessores(QWidget *parent = 0);
    ~cadastroprofessores();

private:
    Ui::cadastroprofessores *ui;
};

#endif // CADASTROPROFESSORES_H
