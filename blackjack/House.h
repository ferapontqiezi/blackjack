#pragma once
#include "GenericPlayer.h"
// ׯ��
class House :
    public GenericPlayer
{
public:
    House(const string& name = "House");
    virtual ~House();
    // ׯ���Ƿ����
    virtual bool isHitting() const;
    // ������һ����
    void flipFirstCard();
};

