#include<iostream>
using namespace std;
void count(const char s[], int counts[]) {
	counts[26] = { 0 };
	for(int i=0;s[i]!='\0'; i++) {
		
			if (s[i] >= 'a' && s[i] <= 'z') {
				counts[s[i] - 'a']++;
				
			}
			else if (s[i] >= 'A' && s[i] <= 'Z') {
				counts[s[i] - 'A']++;
			
		}
	}
}
int main(){
	const int Maxlength = 100;
	char s[Maxlength]{};
	int counts[26] = { 0 };
	cout << "Enter a string: ";
	cin.getline(s,Maxlength);
	count(s, counts);
	for (int i = 0; i < 26; i++) {
		if (counts[i] != 0) { cout <<(char)( 'a' + i )<< " : " << counts[i]<<"  times" << endl; }
	}



	return 0;
}