#include <locale.h>
#include <iostream>
#include <math.h>
using namespace std;
class Shape 
{	public: int l;
	Shape(int _l){l = _l;};
};

class Circle: public Shape
{public: Circle(int r): Shape(r){};
float getS()
{return 3.14*l*l; };
float getF()
{return 2*3.14*l; };
};

class Pr: public Shape
{public: int k;
Pr(int _w, int _h): Shape(_h){k = _w;};
float getP()
{return l*2+k*2; };
float getC()
{return l*k; };
};

class Tr: public Shape
{public: int z, q;
Tr(int _x, int _y, int _g): Shape(_x) {	z =_g; q =_y; };

int getPer()
{ return l+z+q;};
float getGer()
{	float pp;
	pp = (l+z+q)/2;
	return sqrt(pp*(pp-l)*(pp-z)*(pp-q));};
};

void main()
{	setlocale(LC_ALL, "RUS");
	int v, m, n, a1, b1, c1;
	cout << "������� ������ ������� ��������������: "; cin >> m;
	cout << "������� ������ ������� ��������������: "; cin >> v;
	cout << "������� ������ �����:"; cin >> n;
	cout << "������� ������ ������� ������������: "; cin >> a1;
	cout << "������� ������ ������� ������������: "; cin >> b1;
	cout << "������� ������ ������� ������������: "; cin >> c1;
	Circle b(n);
	Pr a(m,v);
	Tr c(a1, b1, c1);
	cout << "�������� ��������������: " << a.getP() << endl;
	cout << "������� ��������������: " << a.getC() << endl;
	cout << "������� �����: " << b.getS() << endl;
	cout << "�������� �����: " << b.getF() << endl;
	cout << "�������� ������������: " << c.getPer() << endl;
	cout << "������� ������������: " << c.getGer() << endl;
	system("pause");
}

