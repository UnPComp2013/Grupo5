#ifndef FORMCADHORARIO_H
#define FORMCADHORARIO_H

#include <QDialog>

namespace Ui {
class formcadhorario;
}

class formcadhorario : public QDialog
{
    Q_OBJECT

public:
    explicit formcadhorario(QWidget *parent = 0);
    ~formcadhorario();

private:
    Ui::formcadhorario *ui;
};

#endif // FORMCADHORARIO_H
