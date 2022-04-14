#pragma once
#include "Hand.h"
// ��ҳ����࣬������Һ͵�����ң�ׯ�ң����̳д���
class GenericPlayer :
    public Hand
{
public:
    friend ostream& operator<<(ostream& os, const GenericPlayer& p);

    GenericPlayer(const string& name = "");
    virtual ~GenericPlayer();
    // ����
    virtual bool isHitting() const = 0;
    // ���ƣ�����֮�ͳ���21
    bool isBusted() const;
    // ����ͨ����ұ���
    void bust() const;
protected:
    string m_Name;
};


