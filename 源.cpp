//��3����������С����˳������Ҫ��ʹ�ñ��������á�
#include<iostream>
using namespace std;

void ranknum(int &x,int &y,int &z);
void swap(int &x, int &y);

int main()
{
	int a, b, c;
	cout << "����������������" << endl;
	cin >> a >> b >> c;
	ranknum(a, b, c);
	cout << "��С��������"<<a<<b<<c<<endl;
	return 0;
}
void ranknum(int &x,int &y,int &z)
{
	
	if (x > y) swap(x, y);
		
	if (x > z) swap(x, z);
	
	if (y> z) swap(y, z);
	
}
void swap(int& x, int& y)
{
	int t;
	if (x > y)
	{
		t = x;
		x = y;
		y = t;
	}
}