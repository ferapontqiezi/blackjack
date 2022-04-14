#pragma once
#include"Player.h"
#include"House.h"
#include"Deck.h"
#include<vector>
#include<string>
using namespace std;
class Game
{
public:
	Game(const vector<string>& names);
	~Game();
	void play();
private:
	Deck m_Deck;
	House m_House;
	vector<Player> m_Players;
};

