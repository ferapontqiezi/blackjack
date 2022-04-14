#include "Hand.h"
Hand::Hand() {
	m_Cards.reserve(7);
}
Hand::~Hand() {
	clear();
}
void Hand::add(Card* pCard) {
	m_Cards.push_back(pCard);
}
void Hand::clear() {
	for (auto it = m_Cards.begin(); it != m_Cards.end(); it++) {
		delete *it;
		*it = 0;
	}
	m_Cards.clear();
}
int Hand::getTotal() const {
	if (m_Cards.empty()) return 0;
	// 牌朝向下
	if (m_Cards[0]->getValue() == 0) return 0;
	int total = 0;
	// 如果牌中有A
	bool flag = false;
	for (auto it = m_Cards.begin(); it != m_Cards.end(); it++) {
		total += (*it)->getValue();
		if ((*it)->getValue() == Card::ACE) flag = true;
	}
	if (flag && total <= 11) total += 10;
	return total;
}