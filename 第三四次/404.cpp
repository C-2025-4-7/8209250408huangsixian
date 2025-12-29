#include<iostream>
using namespace std;
void bubbleSort(int arr[], int size) {
	for (int i = 0; i < size - 1; i++) {
		bool swapped = false; 
		
		for (int j = 0; j < size - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				swapped = true;
			}
		}
		if (!swapped) {
			break;
		}
	}
	for(int i=0;i<size;i++) {
		cout << arr[i]<<" ";
	}
}

void merge(const int list1[], int size1, const int list2[], int size2, int list3[]) {
	
	for(int i= 0; i < size1; i++) {
		list3[i] = list1[i];
	}
	for(int i=size1; i < size1 + size2; i++) {
		list3[i] = list2[i - size1];
	}
	cout << "merged list is:"; 
	bubbleSort(list3, size1 + size2);
	
}
int main() {
	const int MAX_SIZE = 80;
	int list1[MAX_SIZE], list2[MAX_SIZE], list3[2 * MAX_SIZE];
	int size1, size2;
	cout << "Enter list1:";
	cin >> size1;
	for (int i = 0; i < size1; i++) {
		cin >> list1[i];
	}
	cout << "Enter list2:";
	cin >> size2;
	for (int i = 0; i < size2; i++) {
		cin >> list2[i];
	}
	merge(list1,size1, list2,size2, list3);

	
	

	return 0;
}