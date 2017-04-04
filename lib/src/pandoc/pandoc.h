#ifndef PANDOC_H
#define PANDOC_H

#include <QObject>


class Pandoc : public QObject
{
	Q_OBJECT

	public:
		Pandoc(QObject *parent = Q_NULLPTR);
		QString convert(QString input);
};

#endif // PANDOC_H
