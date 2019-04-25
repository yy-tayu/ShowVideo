#include "ShowVideoDemo.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	ShowVideoDemo w;
	w.show();
	return a.exec();
}
