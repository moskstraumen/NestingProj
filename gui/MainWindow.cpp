//  MainWindow.cpp
#include "MainWindow.hpp"

//  note that we call the superclass constructor here and pass on the arguments
MainWindow::MainWindow(QWidget * parent, Qt::WindowFlags flags) : QMainWindow(parent, flags) 
{
    Ui_MainWindow _ui;

    _ui.setupUi(this);


    QObject::connect(_ui.settingsButton, &QPushButton::clicked, this, &MainWindow::buttonClicked);

};

void MainWindow::buttonClicked()
{

    printf("Hello World!");

};
