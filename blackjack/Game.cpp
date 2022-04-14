#include "Game.h"
Game::Game(const vector<string>& names) {
	for (auto it = names.begin(); it != names.end(); it++) {
		m_Players.push_back(Player(*it));
	}
	srand(static_cast<unsigned int>(time(0)));
	m_Deck.populate();
	m_Deck.shuffle();
}
Game::~Game() {}
void Game::play() {
	// 先发2张牌给玩家和庄家
	vector<Player>::iterator it;
	for (int i = 0; i < 2; i++) {
		for (it = m_Players.begin(); it != m_Players.end(); it++) {
			m_Deck.deal(*it);
		}
		m_Deck.deal(m_House);
	}
	// 隐藏庄家第一张牌
	m_House.flipFirstCard();
	// 呈现其他牌
	for (it = m_Players.begin(); it != m_Players.end(); it++) {
		cout << *it << endl;
	}
	cout << m_House << endl;
	// 发牌给跟牌的玩家
	for (it = m_Players.begin(); it != m_Players.end(); it++) {
		m_Deck.additionalCards(*it);
	}
	// 翻开庄家的第一张牌
	m_House.flipFirstCard();
	cout << m_House << endl;
	// 发牌给跟牌的庄家
	m_Deck.additionalCards(m_House);
	if (m_House.isBusted()) {
		// 活下来的玩家胜利
		for (it = m_Players.begin(); it != m_Players.end(); it++) {
			if (!(it->isBusted())) it->win();
		}
	}
	else {
		// 和庄家比较
		for (it = m_Players.begin(); it != m_Players.end(); it++) {
			if (!(it->isBusted())) {
				if (it->getTotal() > m_House.getTotal()) it->win();
				else if (it->getTotal() < m_House.getTotal()) it->lose();
				else it->push();
			}
		}
	}
	// 移除玩家和庄家的牌
	for (it = m_Players.begin(); it != m_Players.end(); it++) {
		it->clear();
	}
	m_House.clear();
}