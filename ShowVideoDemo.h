#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_ShowVideoDemo.h"

class ShowVideoDemo : public QMainWindow
{
	Q_OBJECT

public:
	ShowVideoDemo(QWidget *parent = Q_NULLPTR);

private:
	Ui::ShowVideoDemoClass ui;
};
