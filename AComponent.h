#ifndef _A_COMPONENT_H_
#define _A_COMPONENT_H_

#include "Component.h"

class AComponent : public Component {
    public: 
        AComponent() {}
        virtual ~AComponent() {}
        virtual void operation();
};

#endif //_A_COMPONENT_H_
