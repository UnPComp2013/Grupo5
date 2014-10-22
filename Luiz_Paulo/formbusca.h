#ifndef FORMBUSCA_H
#define FORMBUSCA_H

#include <QMainWindow>
#include <formcadcursos.h>
#include <formcadprof.h>
#include <formcaddis.h>

namespace Ui {
class formbusca;
}

class formbusca : public QMainWindow
{
    Q_OBJECT

public:
    explicit formbusca(QWidget *parent = 0);
    ~formbusca();
