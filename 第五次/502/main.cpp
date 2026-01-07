                
#include <iostream>            
#include "student.h"
using namespace std;
int main()
{
	int n;
	char name1[20];
	char sex1;
	cin >> n >> name1 >> sex1;
	Student stud;               
	Student stud1;
	stud1.set_value(n,name1,sex1);
	stud.set_value(123, "Alice", 'f');
	stud.display();   
	stud1.display();
	return 0;

}
