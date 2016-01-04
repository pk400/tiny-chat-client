#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    user = new User();

    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_chatbutton_clicked() {
    QString msg = ui->chatline->text().trimmed();
    QString chat;
    chat.append("<b>");
    chat.append(user->getUsername());
    chat.append("</b>: ");
    chat.append(msg);

    if(!msg.isEmpty())
        ui->chatroom->append(chat);

    ui->chatline->clear();
    ui->chatline->setFocus();
}
