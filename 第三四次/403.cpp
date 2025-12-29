#include<iostream>
using namespace std;
int main() {
	bool Cupboard[100] = { false };
	//student1;
	for(int i = 0; i < 100; i += 1) {
		Cupboard[i] = !Cupboard[i];
	}
	//student2-100;
	for(int i = 2; i <= 100; i++) {
		for (int j = i-1; j <= 99; j += i) {
			Cupboard[j] = !Cupboard[j];
		}
	}
	int j = 0;
	for (int i = 0; i < 100; i++) {
		j++;
		cout << Cupboard[i] << " ";
		if (j % 10 == 0) cout << endl;
	}
	//ÃÅµÄºÅÂë
	for (int i = 0; i < 100; i++) {
		if(Cupboard[i]==true)
			cout << "The cupboard number is: " << i + 1 << endl;
	}
	return 0;
}