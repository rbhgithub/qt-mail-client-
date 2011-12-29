#include "dialog.h"
#include<QLabel>
#include<QLineEdit>
#include<QPushButton>
#include<QVBoxLayout>
#include<QHBoxLayout>
#include<QGridLayout>
#include<QIntValidator>
#include<QRegExpValidator>

ByteConverterDialog::ByteConverterDialog()
{
  QVBoxLayout* mainLayout = new QVBoxLayout(this);
  QGridLayout* editLayout = new QGridLayout();
  QHBoxLayout* btnLayout = new QHBoxLayout();


  mainLayout->addLayout(editLayout);
  mainLayout->addStretch ();
  mainLayout->addLayout (btnLayout);


  QLabel* decLabel = new QLabel(tr("Decimal"));
  QLabel* hexLabel = new QLabel(tr("Hex"));
  QLabel* binLabel = new QLabel(tr("Binary"));
  decLineEdit = new QLineEdit;
  hexLineEdit = new QLineEdit;
  binLineEdit = new QLineEdit;

  editLayout->addWidget(decLabel, 0, 0);
  editLayout->addWidget(decLineEdit, 0, 1);
  editLayout->addWidget(hexLabel, 1, 0);
  editLayout->addWidget(hexLineEdit, 1, 1);
  editLayout->addWidget(binLabel, 2, 0);
  editLayout->addWidget(binLineEdit, 2, 1);

  QPushButton* exitButton = new QPushButton(tr("Quit"));
  btnLayout->addStretch();
  btnLayout->addWidget(exitButton);


  exitButton->setDefault (true);


  QIntValidator* intValidator = new QIntValidator(0,255,decLineEdit);

  decLineEdit->setValidator (intValidator);

  QRegExpValidator* hexValidator = new QRegExpValidator
      (QRegExp("[0-9a-zA-Z]{1,2}"),hexLineEdit);
  hexLineEdit->setValidator (hexValidator);
  QRegExpValidator* binValidator = new QRegExpValidator
      (QRegExp("[01]{1,8}"),binLineEdit);
  binLineEdit->setValidator (binValidator);


  setWindowTitle (tr("Byte Converter"));

  connect(exitButton,SIGNAL(clicked()),this,SLOT(accept()));
  connect (decLineEdit,SIGNAL(textChanged(const QString&)),
           this,SLOT(decChanged(const QString&)));
  connect (binLineEdit,SIGNAL(textChanged(const QString&)),
           this,SLOT(binChanged(const QString&)));
  connect (hexLineEdit,SIGNAL(textChanged(const QString&)),
           this,SLOT(hexChanged(const QString&)));
}

void ByteConverterDialog::decChanged (const QString& newValue)
{
  bool ok;
  int num = newValue.toInt (&ok);
  if (ok) {
      hexLineEdit->setText (QString::number(num,16));
      binLineEdit->setText (QString::number (num,2));
    } else {
      hexLineEdit->setText ("");
      binLineEdit->setText ("");
    }
}

void ByteConverterDialog::hexChanged (const QString& newValue)
{
  bool ok;
  int num = newValue.toInt (&ok,16);
  if (ok) {
      decLineEdit->setText (QString::number(num));
      binLineEdit->setText (QString::number (num,2));
    } else {
      decLineEdit->setText ("");
      binLineEdit->setText ("");
    }
}


void ByteConverterDialog::binChanged (const QString& newValue)
{
  bool ok;
  int num = newValue.toInt (&ok,2);
  if (ok) {
      hexLineEdit->setText (QString::number(num,16));
      decLineEdit->setText (QString::number (num));
    } else {
      hexLineEdit->setText ("");
      decLineEdit->setText ("");
    }
}




















































































