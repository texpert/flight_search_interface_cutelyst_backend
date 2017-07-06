#include "airlines.h"

using namespace Cutelyst;

Airlines::Airlines(QObject *parent) : Controller(parent)
{
}

Airlines::~Airlines()
{
}

void Airlines::index(Context *c)
{
    c->response()->body() = "Matched Controller::Airlines in Airlines.";
}

