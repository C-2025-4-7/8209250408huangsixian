#include<iostream>
using namespace std;
int day(int x) {
	if (x == 1) { return x = 1; }
	if (x > 1) { return x = (day(x - 1) + 1) * 2; }
}


int main() {
	int n;
	cout << "请输入第几天吃得只剩下一个桃子了：" ;
	cin >> n;
	cout << "它一共摘了  "<<day(n)<<"  个桃子" << endl;
}