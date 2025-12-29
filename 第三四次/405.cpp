#include <iostream>
#include <string>
using namespace std;
int indexOf(const string& s1, const string& s2) {
    int len1 = s1.length();
    int len2 = s2.length();

    if (len1 == 0) return 0;
    if (len1 > len2) return -1;

    for (int i = 0; i <= len2 - len1; ++i) {
        bool match = true;
        for (int j = 0; j < len1; ++j) {
            if (s2[i + j] != s1[j]) {
                match = false;
                break;
            }
        }
        if (match) {
            return i; 
        }
    }
    return -1; 
}
int main() {
    string s1, s2;
    cout << "Enter the first string: ";
    cin >> s1;
    cin.ignore();
    cout << "Enter the second string: ";
    getline(cin, s2);
    int result = indexOf(s1, s2);
    cout << "indexOf(\"" << s1 << "\", \"" << s2 << "\") is " << result << endl;
    return 0;
}