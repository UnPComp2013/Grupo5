#ifndef FORMCADCURSOS_H
#define FORMCADCURSOS_H

#include <QDialog>

namespace Ui {
class formcadcursos;
}
class formcadcursos : public QDialog
{
    Q_OBJECT
public:
    explicit formcadcursos(QWidget *parent = 0);
    ~formcadcursos();
