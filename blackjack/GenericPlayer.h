#pragma once
#include "Hand.h"
// 玩家抽象类，人类玩家和电脑玩家（庄家）均继承此类
class GenericPlayer :
    public Hand
{
public:
    friend ostream& operator<<(ostream& os, const GenericPlayer& p);

    GenericPlayer(const string& name = "");
    virtual ~GenericPlayer();
    // 跟牌
    virtual bool isHitting() const = 0;
    // 爆牌：点数之和超过21
    bool isBusted() const;
    // 宣布通用玩家爆牌
    void bust() const;
protected:
    string m_Name;
};


