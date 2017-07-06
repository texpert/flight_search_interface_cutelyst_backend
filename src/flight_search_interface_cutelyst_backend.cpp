#include "flight_search_interface_cutelyst_backend.h"

#include <Cutelyst/Plugins/View/JSON/viewjson.h>

#include "root.h"
#include "airlines.h"

using namespace Cutelyst;

flight_search_interface_cutelyst_backend::flight_search_interface_cutelyst_backend(QObject *parent) : Application(parent)
{
}

flight_search_interface_cutelyst_backend::~flight_search_interface_cutelyst_backend()
{
}

bool flight_search_interface_cutelyst_backend::init()
{
    new Root(this);

    new ViewJson(this);

    new Airlines(this);

    return true;
}

