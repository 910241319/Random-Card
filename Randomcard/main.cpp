﻿#include "mainwindow.h"
#include "action.h"
#include <QApplication>
#if _MSC_VER >= 1600  
#pragma execution_character_set("utf-8")  
#endif
int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
    MainWindow w;
    w.show();
	return a.exec();
}
