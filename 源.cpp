//对3个变量按从小到大顺序排序，要求使用变量的引用。
#include<iostream>
using namespace std;

void ranknum(int &x,int &y,int &z);
void swap(int &x, int &y);

int main()
{
	int a, b, c;
	cout << "请输入三个整数：" << endl;
	cin >> a >> b >> c;
	ranknum(a, b, c);
	cout << "从小到大排序："<<a<<b<<c<<endl;
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