#ifndef FILESELECTOR_H
#define FILESELECTOR_H

#include <QWidget>

class FileSelector : public QWidget
{
    Q_OBJECT
public:
    explicit FileSelector(QWidget* parent = nullptr);

private:
    QString selectedFile;

public slots:
    void getSelectedFile();
    QString readContent();

};

#endif // FILESELECTOR_H
