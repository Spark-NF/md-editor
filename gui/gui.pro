include(../Markdown.pri)
include(../lib/lib.pri)

TARGET = Markdown
DEPENDPATH += ui
QT += widgets

win32 {
	QT += winextras
}

INCLUDEPATH += $${PDIR} $${PWD}/src
HEADERS += \
	$${PWD}/src/main-window.h
SOURCES += \
	$${PWD}/src/main.cpp \
	$${PWD}/src/main-window.cpp
FORMS += \
        $${PWD}/src/main-window.ui
