#ifndef BYTECONVERTERDIALOG_H
#define BYTECONVERTERDIALOG_H

#include <QDialog>

class QLineEdit;

class ByteConverterDialog : public QDialog
{
  Q_OBJECT
  
public:
  explicit ByteConverterDialog();

  
private:
  QLineEdit* decLineEdit;
  QLineEdit* hexLineEdit;
  QLineEdit* binLineEdit;

private slots:
  void decChanged(const QString&);
  void hexChanged(const QString&);
  void binChanged(const QString&);

};

#endif // DIALOG_H
