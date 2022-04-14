#pragma once
#include <iostream>
using namespace std;
// �˿���
class Card
{
public:
	// ���֣�A,2,3,4,5,6,7,8,9,10,J,Q,K
	enum rank {ACE = 1, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING};
	// ��ɫ��÷�������飬���ģ�����
	enum suit {CLUBS, DIAMONDS, HEARTS, SPADES};
	Card(rank r = ACE, suit s = SPADES, bool f = true);
	// ����Card��ֵ��1~11
	int getValue() const;
	// ��ת��Ƭ
	void flip();

	rank m_rank;
	suit m_suit;
	bool m_IsFaceUp;
};

