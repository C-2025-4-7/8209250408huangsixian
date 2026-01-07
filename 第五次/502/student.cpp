#include <iostream>
#include"student.h"
using namespace std;
void Student::display()         
{
    cout << "number:" << num << endl;
    cout << "name:" << name << endl;
    cout << "sex£º" << sex << endl;
}
void Student::set_value(int n,const char name1[], char sex1)
{

    num = n;
    int i = 0;
    while (name1[i] != '\0' && i < 19) {
        name[i] = name1[i]; 
        i++;
    }
    name[i] = '\0';
    sex = sex1;

}