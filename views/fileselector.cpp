#include "fileselector.h"

#include <QFileDialog>
#include <QFileSelector>
#include <QDir>
#include <QMessageBox>
#include <QDebug>

FileSelector::FileSelector(QWidget* parent) : QWidget(parent)
{
    qInfo() << "File Dialogue Created";
}


void FileSelector::getSelectedFile()
{
    this->selectedFile = QFileDialog::getOpenFileName(this, "Select File..", QDir::homePath());
}

QString FileSelector::readContent()
{
    QFile file(this->selectedFile);

    if (!file.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::warning(this, "Error", "File could not be opened");
    }

    QTextStream fileHandle(&file);
    QString content = fileHandle.readAll();
    file.close();
    return content;
}
