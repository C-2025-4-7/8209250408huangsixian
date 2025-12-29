#include<iostream>
using namespace std;
void bubble_sort(double list[]) {
	bool changed = true;
	do
	{
		double* p = list;
		int listSize = 10;
		changed = false;
		for (int j = 0; j < listSize-1; j++)
			if (list[j] > list[j + 1])
			{
				double swap = list[j];
				list[j] = list[j + 1];
				list[j + 1] = swap;
				changed = true;
			}
	} while (changed);
	for (int i = 0; i < 10; i++) { cout << list[i]<<"  "; }

}
int main() {
	double a[10] = {4,6,2,7,5,1,9,8,3 };
	double* p = a;
	bubble_sort(p);
}
