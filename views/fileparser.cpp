
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
    std::vector<double> people;
    people.reserve(numbers.size());
    for (auto ptr = numbers.begin(); ptr < numbers.end(); ptr++)
    {
        numbers.push_back(ptr->toDouble());
    }

    return people;
}
