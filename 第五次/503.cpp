#include<iostream>
using namespace std;
class Cuboid
{
private:
	double length;
	double width;
	double height;
public:
	void SetDate(double l, double w, double h)
	{
		length = l;
		width = w;
		height = h;
	}
	double Volume()
	{
		return length * width * height;
	}
};
int main() {
	double l=0, w=0, h=0;
	Cuboid cb;
	cout << "请分别输入长、宽、高：" << endl;
	cin >> l>>w>> h;
	cb.SetDate(l, w, h);
	cout << "长方体的体积为:" << cb.Volume()<< endl;
	
}