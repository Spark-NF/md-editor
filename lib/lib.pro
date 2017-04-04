include(../Markdown.pri)

TEMPLATE = lib
TARGET = lib
CONFIG += staticlib

INCLUDEPATH += $${PWD}/src
HEADERS += \
	$${PWD}/src/logger.h \
	$${PWD}/src/pandoc/pandoc.h
SOURCES += \
	$${PWD}/src/logger.cpp \
	$${PWD}/src/pandoc/pandoc.cpp
