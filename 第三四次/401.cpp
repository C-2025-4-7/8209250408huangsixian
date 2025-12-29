#include<iostream>
using namespace std;
int main() {
	int nums[10];
	int unique_nums[10];
	int unique_count = 0;

	cout << "Enter ten number:";
	bool is_exist = false;
	for (int i = 0; i < 10; i++) {
		cin >> nums[i];
		for(int j=0;j<unique_count;j++){
			if (nums[i] == unique_nums[j]) { is_exist = true; break; }
		}
		if (!is_exist) {
			unique_nums[unique_count] = nums[i];
			unique_count++;
		}
	}
	cout << "The distinct numbers are:" << endl;
	for (int i = 0; i < unique_count; i++) { cout << unique_nums[i] << " "; }
	cout << endl;
	return 0;
	

}