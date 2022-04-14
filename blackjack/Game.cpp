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
	// �ȷ�2���Ƹ���Һ�ׯ��
	vector<Player>::iterator it;
	for (int i = 0; i < 2; i++) {
		for (it = m_Players.begin(); it != m_Players.end(); it++) {
			m_Deck.deal(*it);
		}
		m_Deck.deal(m_House);
	}
	// ����ׯ�ҵ�һ����
	m_House.flipFirstCard();
	// ����������
	for (it = m_Players.begin(); it != m_Players.end(); it++) {
		cout << *it << endl;
	}
	cout << m_House << endl;
	// ���Ƹ����Ƶ����
	for (it = m_Players.begin(); it != m_Players.end(); it++) {
		m_Deck.additionalCards(*it);
	}
	// ����ׯ�ҵĵ�һ����
	m_House.flipFirstCard();
	cout << m_House << endl;
	// ���Ƹ����Ƶ�ׯ��
	m_Deck.additionalCards(m_House);
	if (m_House.isBusted()) {
		// �����������ʤ��
		for (it = m_Players.begin(); it != m_Players.end(); it++) {
			if (!(it->isBusted())) it->win();
		}
	}
	else {
		// ��ׯ�ұȽ�
		for (it = m_Players.begin(); it != m_Players.end(); it++) {
			if (!(it->isBusted())) {
				if (it->getTotal() > m_House.getTotal()) it->win();
				else if (it->getTotal() < m_House.getTotal()) it->lose();
				else it->push();
			}
		}
	}
	// �Ƴ���Һ�ׯ�ҵ���
	for (it = m_Players.begin(); it != m_Players.end(); it++) {
		it->clear();
	}
	m_House.clear();
}