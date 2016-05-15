#include "mainwindow.h"
#include "ui_mainwindow.h"

QKIcona * MainWindow::kicona = new QKIcona();

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{

    QString style = ui->style->currentText();
    QString type = ui->iconName->currentText();

    ui->actionKiki->setIcon(kicona->getIcon(style, type));
}
