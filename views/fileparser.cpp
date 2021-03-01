
#include "fileparser.h"

#include<memory>
#include<iostream>

#include <QJsonDocument>
#include <QJsonArray>
#include <QMessageBox>
#include <QJsonObject>


FileParser::FileParser(const QString& fileContent)
{

    this->rawContent = fileContent;

}

QJsonValue FileParser::parseToJSON()
{
    auto content = this->rawContent.toLocal8Bit();
    auto doc = QJsonDocument::fromJson(content);
    QJsonObject json = doc.object();

    return json.value("values");
}


std::vector<double> FileParser::getNumbers()
{
    auto jsonAddress = this->parseToJSON();

    QJsonArray numbers = jsonAddress.toArray();
    std::vector<double> parsedNumbers;
    parsedNumbers.reserve(numbers.size());
    for (auto ptr = numbers.begin(); ptr < numbers.end(); ptr++)
    {
        parsedNumbers.push_back(ptr->toDouble());
    }

    return parsedNumbers;
}
