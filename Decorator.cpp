#include "Decorator.h"

Decorator::Decorator(Component *component)
{
    mComponent = component;
}

void Decorator::operation()
{
    mComponent->operation();
}
