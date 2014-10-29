#ifndef CADASTROCURSO_H
#define CADASTROCURSO_H

#include <QMainWindow>

namespace Ui {
class cadastrocurso;
}

class cadastrocurso : public QMainWindow
{
    Q_OBJECT

public:
    explicit cadastrocurso(QWidget *parent = 0);
    ~cadastrocurso();

private:
    Ui::cadastrocurso *ui;
};

#endif // CADASTROCURSO_H
