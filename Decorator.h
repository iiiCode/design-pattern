#ifndef _DECORATOR_H_
#define _DECORATOR_H_

#include "Component.h"

class Decorator : public Component {
    public:
        Decorator(Component *component);
        virtual void operation();
    private:
        Component *mComponent;
};

#endif //_DECORATOR_H_
