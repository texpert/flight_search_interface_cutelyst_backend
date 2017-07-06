#ifndef FLIGHT_API_CLIENT_H
#define FLIGHT_API_CLIENT_H

#include <QObject>
#include <QtCore>
#include <QtNetwork>

#include <QOAuth2AuthorizationCodeFlow>

class Flight_API_Client : public QObject
{
    Q_OBJECT
public:
    explicit Flight_API_Client(QObject *parent = nullptr);

signals:

public slots:
};

#endif // FLIGHT_API_CLIENT_H
