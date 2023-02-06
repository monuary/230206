#include<iostream>
using namespace std;

class SinivelCap	//�๰
{
public:
	void Take() const { cout << "�๰ġ��" << endl; }
};

class SneezeCap	//��ä��
{
public:
	void Take() const { cout << "��ä��ġ��" << endl; }
};

class SnuffleCap	//�ڸ���
{
public:
	void Take() const { cout << "�ڸ���ġ��" << endl; }
};

class CONTAC600	//ĸ��
{
private:
	SinivelCap sin;
	SneezeCap sne;
	SnuffleCap snu;

public:
	void Take() const
	{
		sin.Take();
		sne.Take();
		snu.Take();
	}
};

class ColdPatient
{
public:
	void TakeCONTAC600(const CONTAC600& cap) const { cap.Take(); }
};

int main()
{
	CONTAC600 cap;
	ColdPatient sufferer;
	sufferer.TakeCONTAC600(cap);
	return 0;
}