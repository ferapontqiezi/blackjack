#include "House.h"
House::House(const string& name): GenericPlayer(name) { }
House::~House() {}
// ׯ���Ƿ����
bool House::isHitting() const {
	// ׯ��С��16����������
	return (getTotal() <= 16);
}
// ������һ����
void House::flipFirstCard() {
	if (!m_Cards.empty()) m_Cards[0]->flip();
	else cout << "û�����ܷ���\n";
}