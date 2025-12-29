#include <iostream>
using namespace std;
int indexof(const char* s1, const char* s2) {
    if (s1[0] == '\0') return 0;
    for (int i = 0; s2[i] != '\0'; i++) {
        int j = 0;
        while (s1[j] != '\0' && s2[i + j] != '\0' && s2[i + j] == s1[j]) {
            j++;
        }
        if (s1[j] == '\0') {
            return i;
        }
    }
    return -1;
}
int main() {
    char s1[100], s2[100]; 
    cout << "请输入子串s1：";
    cin >> s1;
    cout << "请输入主串s2：";
    cin >> s2;

    int result = indexof(s1, s2);
    if (result != -1) {
        cout << "s1是s2的子串，首次匹配的下标是：" << result << endl;
    }
    else {
        cout << "s1不是s2的子串" << endl;
    }
    return 0;
}