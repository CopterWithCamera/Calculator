#ifndef PACKANALYSIS_H
#define PACKANALYSIS_H

#include <QObject>

#include "main.h"

class PackAnalysis : public QObject
{
    Q_OBJECT

    QByteArray waitingfifo;
    int len;

public:
    explicit PackAnalysis(QObject *parent = nullptr);

signals:
    void StatusUpdated(char type, QByteArray value);
    void DataImported();

public slots:
    void ImportData(QByteArray& newData);

private slots:
    void unPack();

};

#endif // PACKANALYSIS_H
