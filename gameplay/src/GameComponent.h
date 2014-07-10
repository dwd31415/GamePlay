//
//  GameComponent.h
//  gameplay
//
//  Created by Adrian Dawid on 10.07.14.
//
//

#include "Node.h"


#ifndef gameplay_GameComponent_h
#define gameplay_GameComponent_h

namespace gameplay{

class GameComponent
{
private:
    Node* parent;
public:
    void Start(Node* partent);
    void Update(float deltaSeconds);
    void Destory();
    bool bIsActive;
};

}
#endif
