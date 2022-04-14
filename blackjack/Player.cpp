#include "Player.h"
Player::Player(const string& name) : GenericPlayer(name) {}
Player::~Player() {}
bool Player::isHitting() const {
	cout << m_Name << ", ���������Y/N����";
	char ans;
	cin >> ans;
	return (ans == 'y') || (ans == 'Y');
}
void Player::win() const{
	cout << "��� " << m_Name << " ��ʤ��\n";
}
void Player::lose() const {
	cout << "��� " << m_Name << " ʧ�ܡ�\n";
}
void Player::push() const {
	cout << "��� " << m_Name << " ƽ�֡�\n";
}