#include<iostream>
using namespace std;
bool is_prime(int num) {
    if (num <= 1) {
        return false;
    }
    if (num == 2) {
        return true;
    }   
    if (num % 2 == 0) {
        return false;
    }

    for (int i = 3; i <= num; i += 2) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}
int main() {
    int count = 0;
    int num = 2;
    cout << "前两百个素数：" << endl;
    while (count < 200) {
        if (is_prime(num)) {
            cout << num << "\t";
            count++;
        }
        if (count % 10 == 0) {
            cout << endl;
        }
    }
}