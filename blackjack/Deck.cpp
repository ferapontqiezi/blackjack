#include "Deck.h"
Deck::Deck() {
	m_Cards.reserve(52);
	populate();
}
Deck::~Deck() {}
void Deck::populate() {
	clear();
	for (int s = Card::CLUBS; s <= Card::SPADES; s++) {
		for (int r = Card::ACE; r <= Card::KING; r++) {
			add(new	Card(static_cast<Card::rank>(r), static_cast<Card::suit>(s)));
		}
	}
}
void Deck::shuffle() {
	random_shuffle(m_Cards.begin(), m_Cards.end());
}
void Deck::deal(Hand& h) {
	if (!m_Cards.empty()) {
		h.add(m_Cards.back());
		m_Cards.pop_back();
	}
	else cout << "52张牌都发完啦。\n";
}
void Deck::additionalCards(GenericPlayer& p) {
	cout << endl;
	while (!(p.isBusted()) && p.isHitting()) {
		deal(p);
		cout << p << endl;
		if (p.isBusted()) p.bust();
	}
}