#include <QApplication>
#include "main-window.h"


int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	QCoreApplication::setApplicationName("MdEditor");
	QCoreApplication::setApplicationVersion("1.0.0");
	QCoreApplication::setOrganizationName("DatOrg");
	QCoreApplication::setOrganizationDomain("dat.org");

	MainWindow mainWindow;
	mainWindow.show();

	return app.exec();
}
