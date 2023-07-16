#include "mainwindow.h"

#include <QMenuBar>

MainWindow::MainWindow(QWidget* parent) : QMainWindow(parent) {
    setWindowTitle("xPhoto");
    setWindowState(Qt::WindowMaximized);

    file_menu_ = menuBar()->addMenu(tr("&File"));
    open_action_ = new QAction(tr("&Open Folder"), this);
    file_menu_->addAction(open_action_);

    view_menu_ = menuBar()->addMenu(tr("&View"));
    status_bar_action_ = new QAction(tr("&show status bar"), this);
    view_menu_->addAction(status_bar_action_);

    help_menu_ = menuBar()->addMenu(tr("&Help"));
    about_action_ = new QAction(tr("&About"), this);
    help_menu_->addAction(about_action_);
}

MainWindow::~MainWindow() {}