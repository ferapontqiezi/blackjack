#include "GenericPlayer.h"
GenericPlayer::GenericPlayer(const string& name) : m_Name(name) {}
GenericPlayer::~GenericPlayer() {}
bool GenericPlayer::isBusted() const{ return (getTotal() > 21); }
void GenericPlayer::bust() const { cout << m_Name << "爆牌（总和大于21）, 失败。\n"; }
ostream& operator<<(ostream& os, const Card& c) {
	const string RANKS[] = { "0", "A", "2","3","4","5","6","7","8","9","10","J","Q","K" };
	const string SUITS[] = { "梅花", "方块", "红心", "黑桃" };
	if (c.m_IsFaceUp) {
		os << SUITS[c.m_suit] << RANKS[c.m_rank];
	}
	else {
		os << "xx";
	}
	return os;
}
ostream& operator<<(ostream& os, const GenericPlayer& p) {
	os << p.m_Name << ":\t";
	vector<Card*>::const_iterator it;
	if (!p.m_Cards.empty()) {
		for (it = p.m_Cards.begin(); it != p.m_Cards.end(); it++) {
			os << *(*it) << "\t";
		}
		if (p.getTotal() != 0) cout << "(" << p.getTotal() << ")";
	}
	else {
		os << "<空>";
	}
	return os;
}