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
    // ����52�˿��ƶ�
    void populate();
    // ϴ��
    void shuffle();
    // ����
    void deal(Hand& aHand);
    // ��Ҹ��ƣ�����������Ƹ�GenericPlayer
    void additionalCards(GenericPlayer& aGenericPlayer);
};

