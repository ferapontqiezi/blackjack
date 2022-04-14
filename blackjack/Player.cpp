#include "Player.h"
Player::Player(const string& name) : GenericPlayer(name) {}
Player::~Player() {}
bool Player::isHitting() const {
	cout << m_Name << ", 你想跟牌吗（Y/N）：";
	char ans;
	cin >> ans;
	return (ans == 'y') || (ans == 'Y');
}
void Player::win() const{
	cout << "玩家 " << m_Name << " 获胜。\n";
}
void Player::lose() const {
	cout << "玩家 " << m_Name << " 失败。\n";
}
void Player::push() const {
	cout << "玩家 " << m_Name << " 平局。\n";
}