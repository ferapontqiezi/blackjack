#include "House.h"
House::House(const string& name): GenericPlayer(name) { }
House::~House() {}
// 庄家是否跟牌
bool House::isHitting() const {
	// 庄家小于16，继续跟牌
	return (getTotal() <= 16);
}
// 翻开第一张牌
void House::flipFirstCard() {
	if (!m_Cards.empty()) m_Cards[0]->flip();
	else cout << "没有牌能翻！\n";
}