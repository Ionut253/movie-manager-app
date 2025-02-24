#include "QtWidgetsApplication1.h"
#include "CTRL.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QIcon icon("icon.png");
	Repository repo{ "movies.txt" };
	Controller ctrl{ repo };
	Movies2 w(nullptr, ctrl);
	w.setWindowIcon(icon);
	w.show();
	return a.exec();
}
