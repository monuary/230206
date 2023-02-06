#include<iostream>
using namespace std;

class SinivelCap	//Äà¹°
{
public:
	void Take() const { cout << "Äà¹°Ä¡·á" << endl; }
};

class SneezeCap	//ÀçÃ¤±â
{
public:
	void Take() const { cout << "ÀçÃ¤±âÄ¡·á" << endl; }
};

class SnuffleCap	//ÄÚ¸·Èû
{
public:
	void Take() const { cout << "ÄÚ¸·ÈûÄ¡·á" << endl; }
};

class CONTAC600	//Ä¸½¶
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