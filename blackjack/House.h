#pragma once
#include "GenericPlayer.h"
// 庄家
class House :
    public GenericPlayer
{
public:
    House(const string& name = "House");
    virtual ~House();
    // 庄家是否跟牌
    virtual bool isHitting() const;
    // 翻开第一张牌
    void flipFirstCard();
};

