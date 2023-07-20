#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QAction>
#include <QHBoxLayout>
#include <QImage>
#include <QLabel>
#include <QMainWindow>
#include <QMenu>
#include <QWidget>

class MainWindow : public QMainWindow {
    Q_OBJECT

   public:
    MainWindow(QWidget* parent = nullptr);
    ~MainWindow();

   private slots:
    void open();

   private:
    QMenu* file_menu_;
    QAction* open_action_;

    QMenu* view_menu_;
    QAction* status_bar_action_;

    QMenu* help_menu_;
    QAction* about_action_;

    QWidget* widget_;
    QHBoxLayout* layout_;
    QLabel* image_label_;
    QImage image_;
};
#endif  // MAINWINDOW_H