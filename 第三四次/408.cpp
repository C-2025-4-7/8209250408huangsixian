#include <iostream>
using namespace std;

int parseHex(const char* const hexString) {
    int result = 0;
    for (int i = 0; hexString[i] != '\0'; i++) {
        char c = hexString[i];
        int val;
        if (c >= '0' && c <= '9') {
            val = c - '0';
        }
        else if (c >= 'A' && c <= 'F') {
            val = 10 + (c - 'A');
        }
        else if (c >= 'a' && c <= 'f') {
            val = 10 + (c - 'a');
        }
        else {
            return 0;
        }
        result = result * 16 + val;
    }
    return result;
}

int main() {
    char hex[100];
    cout << "输入16进制字符串：";
    cin >> hex;
    cout << "转换为10进制：" << parseHex(hex) << endl;
    return 0;
}