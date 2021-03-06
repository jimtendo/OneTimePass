#include "adddialog.h"
#include "ui_adddialog.h"

AddDialog::AddDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddDialog)
{
    ui->setupUi(this);
}

AddDialog::~AddDialog()
{
    delete ui;
}

QString AddDialog::getService()
{
    return ui->serviceEdit->text();
}

QString AddDialog::getSecret()
{
    return ui->secretEdit->text();
}
