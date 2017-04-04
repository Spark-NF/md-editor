TEMPLATE = subdirs
CONFIG  += ordered

SUBDIRS  = lib
SUBDIRS += gui
SUBDIRS += tests

gui.depends = lib
tests.depends = lib

OTHER_FILES += \
	$${PWD}/.gitignore \
	$${PWD}/Markdown.pri

DISTFILES += \
	$${PWD}/LICENSE \
	$${PWD}/README.md