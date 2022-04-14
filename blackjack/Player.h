#pragma once
#include "GenericPlayer.h"
// 人类玩家
class Player :
    public GenericPlayer
{
public:
    Player(const string& name = "");
    virtual ~Player();
    // 返回玩家是否想跟牌
    virtual bool isHitting() const;
    // 玩家胜利
    void win() const;
    // 玩家失败
    void lose() const;
    // 玩家平局
    void push() const;
};

