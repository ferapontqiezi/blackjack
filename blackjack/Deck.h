#pragma once
#include<random>
#include<algorithm>
#include "Hand.h"
#include "GenericPlayer.h"
class Deck :
    public Hand
{
public:
    Deck();
    virtual ~Deck();
    // 创建52扑克牌堆
    void populate();
    // 洗牌
    void shuffle();
    // 发牌
    void deal(Hand& aHand);
    // 玩家跟牌，发给额外的牌给GenericPlayer
    void additionalCards(GenericPlayer& aGenericPlayer);
};

