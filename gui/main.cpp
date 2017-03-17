//  main.cpp

//  the iostream header contains cout among other things
#include <iostream>
#include <QtWidgets>
#include "MainWindow.hpp"

//  this declaration lets us leave off the "std::" when using things in the standard libraries
//  without it, we'd have to type "std::cout", now we can just type "cout"
using namespace std;


int main(int argc, char **argv) 
{
    
    QApplication a(argc, argv);

    MainWindow win;
    win.show();

    return a.exec();
}
