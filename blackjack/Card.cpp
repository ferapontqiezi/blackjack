#include "Card.h"
// 构造器Constructor
Card::Card(rank r, suit s, bool f) : m_rank(r), m_suit(s), m_IsFaceUp(f) {}
int Card::getValue() const {
	// 如果卡牌面朝下，那么值为0
	int retValue = 0;
	if (m_IsFaceUp) {
		retValue = m_rank;
		retValue = retValue > 10 ? 10 : retValue;
	}
	return retValue;
}
void Card::flip() {
	m_IsFaceUp = !(m_IsFaceUp);
}