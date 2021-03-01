#ifndef FILEPARSER_H
#define FILEPARSER_H


#include <QString>
#include <QJsonValue>

using std::string;

class FileParser
{
public:
    FileParser(const QString& fileContent);
    std::vector<double> getNumbers();

private:
    QString rawContent;
    QJsonValue parseToJSON();

};

#endif // FILEPARSER_H
