#pragma once
#include "GenericPlayer.h"
// �������
class Player :
    public GenericPlayer
{
public:
    Player(const string& name = "");
    virtual ~Player();
    // ��������Ƿ������
    virtual bool isHitting() const;
    // ���ʤ��
    void win() const;
    // ���ʧ��
    void lose() const;
    // ���ƽ��
    void push() const;
};

