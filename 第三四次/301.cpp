#include<iostream>
using namespace std;
int Max(int x, int y) { return x > y ? x : y; }
int Min(int x, int y) { return x < y ? x : y; }
int gcd(int x, int y) {
	for (int i = Max(x, y); i > 0; i--) 
	{ if (x % i == 0 && y % i == 0) 
	      { cout << "最大公约数是：" << i << endl; return i; break; } }
}
int lcm(int x, int y) { for (int i = Max(x,y); ; i++) { if (i %x  == 0 &&i % y == 0) { cout << "最小公倍数是：" << i << endl; break; return i; } } }
int main() {
	int x, y;
	cin >> x >> y;
	gcd(x, y);
	lcm(x, y);
	gcd(180,630 );
	lcm(180, 630);



	return 0;
}
//最大公约数 gcd  最小公倍数 lcm