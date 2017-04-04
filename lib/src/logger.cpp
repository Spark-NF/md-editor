#include "logger.h"
#include <QDateTime>
#include <QDebug>


void Logger::log(QString l, LogLevel level)
{
	QDateTime time = QDateTime::currentDateTime();
	qDebug() << time.toString("hh:mm:ss.zzz") << l;
}
