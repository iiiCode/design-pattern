#include "AComponent.h"
#include "ADecorator.h"

int main(int argc, char *argv[])
{
    AComponent *component = new AComponent();
    ADecorator *decorator = new ADecorator(component);
    ADecorator *decorator_1 = new ADecorator(decorator);

    decorator->operation();
    decorator_1->operation();

    delete component;
    delete decorator;

    return 0;
}
