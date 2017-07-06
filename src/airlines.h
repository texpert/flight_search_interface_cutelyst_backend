#ifndef AIRLINES_H
#define AIRLINES_H

#include <Cutelyst/Controller>

using namespace Cutelyst;

class Airlines : public Controller
{
    Q_OBJECT
public:
    explicit Airlines(QObject *parent = 0);
    ~Airlines();

    C_ATTR(index, :Path :AutoArgs)
    void index(Context *c);

    C_ATTR(test, :Local)
    void test(Context *c) {
        c->stash({
                     {"username", "John"},
                     {"template", "site/test.html"}
                 });
    }
};

#endif //AIRLINES_H
