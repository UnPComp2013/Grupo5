#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>



namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionCadastro_de_Professor_triggered();

    void on_actionCadastro_de_Turma_triggered();

    void on_actionCAdastro_de_Disciplina_triggered();

    void on_actionCadastro_de_Hor_rios_triggered();

private:
    Ui::MainWindow *ui;


};

#endif // MAINWINDOW_H
