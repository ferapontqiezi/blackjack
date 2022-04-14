#pragma once
#include <iostream>
using namespace std;
// 扑克牌
class Card
{
public:
	// 数字：A,2,3,4,5,6,7,8,9,10,J,Q,K
	enum rank {ACE = 1, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING};
	// 花色：梅花，方块，红心，黑桃
	enum suit {CLUBS, DIAMONDS, HEARTS, SPADES};
	Card(rank r = ACE, suit s = SPADES, bool f = true);
	// 返回Card的值，1~11
	int getValue() const;
	// 翻转卡片
	void flip();

	rank m_rank;
	suit m_suit;
	bool m_IsFaceUp;
};

