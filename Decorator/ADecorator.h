#ifndef _A_DECORATOR_H_
#define _A_DECORATOR_H_

#include "Decorator.h"

class ADecorator : public Decorator {
    public:
        ADecorator(Component *component);
        virtual ~ADecorator() {}
        virtual void operation();
    private:
        void operationFirst();
        void operationLast();
};
#endif //_A_DECORATOR_H_
