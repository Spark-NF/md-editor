#ifndef LOGGER_H
#define LOGGER_H

#define LOG(a, b) Logger::getInstance().log((a), (b))

#include <QObject>
#include <QString>


class Logger : public QObject
{
	Q_OBJECT

	public:
		enum LogLevel
		{
			Info,
			Notice,
			Warning,
			Error
		};

		static Logger& getInstance()
		{
			static Logger instance;
			return instance;
		}
		Logger(Logger const&) = delete;
		void operator=(Logger const&) = delete;
		void log(QString, LogLevel type = Info);

	private:
		Logger() {}
};

#endif // LOGGER_H
