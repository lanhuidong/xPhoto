#include "mainwindow.h"

#include <QDir>
#include <QFileDialog>
#include <QMenuBar>

MainWindow::MainWindow(QWidget* parent) : QMainWindow(parent) {
    setWindowTitle("xPhoto");
    setWindowState(Qt::WindowMaximized);

    file_menu_ = menuBar()->addMenu(tr("&File"));
    open_action_ = new QAction(tr("&Open Folder..."), this);
    open_action_->setShortcuts(QKeySequence::Open);
    connect(open_action_, &QAction::triggered, this, &MainWindow::open);
    file_menu_->addAction(open_action_);

    view_menu_ = menuBar()->addMenu(tr("&View"));
    status_bar_action_ = new QAction(tr("&show status bar"), this);
    view_menu_->addAction(status_bar_action_);

    help_menu_ = menuBar()->addMenu(tr("&Help"));
    about_action_ = new QAction(tr("&About"), this);
    help_menu_->addAction(about_action_);
}

MainWindow::~MainWindow() {}

void MainWindow::open() {
    QString current_path = QDir::homePath();
    QString title = "请选择一张图片";
    QString filter = "所有文件(*.*)";
    QString fileName = QFileDialog::getOpenFileName(this, title, current_path, filter);
    if (!fileName.isEmpty()) {
        qDebug("%s", fileName.toLocal8Bit().data());
    }
}