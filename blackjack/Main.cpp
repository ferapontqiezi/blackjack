#include"Game.h"
#include<iostream>
using namespace std;
int main() {
	cout << "\t\t欢迎来到blackjack游戏!\n\n" << endl;
	cout << "游戏简介可以看https://baike.baidu.com/item/black%20jack/8547846\n游戏实战可以看https://www.bilibili.com/video/BV1Ue411s7wK\n\n" << endl;
	int num = 0;
	while (num < 1 || num > 7) {
		cout << "请问玩家数量是多少？(1~7): ";
		cin >> num;
	}
	vector<string> names;
	string name;
	for (int i = 1; i <= num; i++) {
		cout << "请第" << i << "个输入玩家姓名：";
		cin >> name;
		names.push_back(name);
	}
	cout << endl;
	// 游戏循环
	Game aGame(names);
	char again = 'Y';
	while (again != 'N' && again != 'n') {
		aGame.play();
		cout << "\n你想再玩一遍吗(Y/N): ";
		cin >> again;
	}
	return 0;
}