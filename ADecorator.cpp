#include <iostream>
#include "ADecorator.h"

ADecorator::ADecorator(Component *component) : Decorator(component)
{
}

void ADecorator::operationFirst()
{
    std::cout << __func__ << std::endl;
}

void ADecorator::operationLast()
{
    std::cout << __func__ << std::endl;
}

void ADecorator::operation()
{
    operationFirst();
    std::cout << __func__ << std::endl;
    operationLast();
}
