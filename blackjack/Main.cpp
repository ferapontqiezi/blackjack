#include"Game.h"
#include<iostream>
using namespace std;
int main() {
	cout << "\t\t��ӭ����blackjack��Ϸ!\n\n" << endl;
	cout << "��Ϸ�����Կ�https://baike.baidu.com/item/black%20jack/8547846\n��Ϸʵս���Կ�https://www.bilibili.com/video/BV1Ue411s7wK\n\n" << endl;
	int num = 0;
	while (num < 1 || num > 7) {
		cout << "������������Ƕ��٣�(1~7): ";
		cin >> num;
	}
	vector<string> names;
	string name;
	for (int i = 1; i <= num; i++) {
		cout << "���" << i << "���������������";
		cin >> name;
		names.push_back(name);
	}
	cout << endl;
	// ��Ϸѭ��
	Game aGame(names);
	char again = 'Y';
	while (again != 'N' && again != 'n') {
		aGame.play();
		cout << "\n��������һ����(Y/N): ";
		cin >> again;
	}
	return 0;
}