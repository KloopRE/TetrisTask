#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFontDatabase>
#include "game.h"

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
    void on_play_button_clicked();

    void on_help_button_clicked();

    void on_settings_button_clicked();

private:
    Ui::MainWindow *ui;
    static const int font_size_title = 25;
    static const int font_size = 15;
    const QString default_font_family = "Default";
    void loadUI();
};

#endif // MAINWINDOW_H
