#include "pandoc.h"
#include <QProcess>
#include <QDebug>


Pandoc::Pandoc(QObject *parent)
	: QObject(parent)
{
}

QString Pandoc::convert(QString input)
{
	QString program = "pandoc";
	QStringList arguments;
	arguments << "--from=markdown"
			  << "--to=html"
			  << "--output=-"
			  << "--smart"
			  << "--standalone";

	QProcess *process = new QProcess(this);
	process->start(program, arguments);
	process->write(input.toUtf8());
	process->closeWriteChannel();
	process->waitForFinished(500);

	QString output = process->readAllStandardOutput();
	process->deleteLater();

	return output;
}
