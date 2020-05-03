/*
 * Tetris -game
 * Main class
 * Starts the UI class that
 * contains the game
 *
 * Timi Rautamäki, 284032
 *
 */

#include "mainwindow.hh"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
