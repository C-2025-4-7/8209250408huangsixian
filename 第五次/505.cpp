#include<iostream>
using namespace std;
class Point{
private:
	int x, y;
public:
Point()
{
	x = 60;
	y = 80;
}
int getX()
{
	return x;
}
int getY()
{
	return y;
}
void setPoint(int a, int b)
{
	x = getX() + a;
	y = getY() + b;
}
void showPoint()
{
	cout << "(" << x << "," << y << ")" << endl;
} 
};
int main()
{
	int a = 0, b = 0;
	Point p;
	cout << "请输入点的坐标：" << endl;
	cin >> a >> b;
	p.setPoint(a, b);
	cout << "点的坐标为：";
	p.showPoint();
	return 0;
}