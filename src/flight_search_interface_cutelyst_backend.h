#ifndef FLIGHT_SEARCH_INTERFACE_CUTELYST_BACKEND_H
#define FLIGHT_SEARCH_INTERFACE_CUTELYST_BACKEND_H

#include <Cutelyst/Application>

using namespace Cutelyst;

class flight_search_interface_cutelyst_backend : public Application
{
    Q_OBJECT
    CUTELYST_APPLICATION(IID "flight_search_interface_cutelyst_backend")
    public:
        Q_INVOKABLE explicit flight_search_interface_cutelyst_backend(QObject *parent = 0);
    ~flight_search_interface_cutelyst_backend();

    bool init();
};

#endif // FLIGHT_SEARCH_INTERFACE_CUTELYST_BACKEND_H
