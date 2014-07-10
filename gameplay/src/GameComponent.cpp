//
//  GameComponent.cpp
//  gameplay
//
//  Created by Adrian Dawid on 10.07.14.
//
//

#include "GameComponent.h"

using namespace gameplay;

void GameComponent::Start(Node* p)
{
    bIsActive=true;
    parent=p;
}

void GameComponent::Destory(){
    bIsActive=false;
}