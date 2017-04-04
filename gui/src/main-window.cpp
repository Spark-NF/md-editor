#include "main-window.h"
#include "ui_main-window.h"


MainWindow::MainWindow()
	: ui(new Ui::MainWindow)
{
	ui->setupUi(this);
}

MainWindow::~MainWindow()
{
	delete ui;
}
