#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "opencv2/opencv.hpp"
#include <QMainWindow>
#include <QFileDialog>
#include <QDir>
#include <QFile>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
protected:
      void closeEvent(QCloseEvent *event);
private slots:
    void on_inputPushButton_pressed();

    void on_outputPushButton_pressed();

private:
    Ui::MainWindow *ui;
    void loadSettings();
    void saveSettings();
};

#endif // MAINWINDOW_H
