#include<iostream>
using namespace std;
class Time             
{
private:             
	int hour;
	int minute;
	int sec;
public:
	void setTime(int h, int m, int s)  
	{
		cin >> h >> m >> s;
		hour = h;
		minute = m;
		sec = s;
		
	}
	void showTime()           
	{
		cout << hour << ":" << minute << ":" << sec << endl;
	}
};
int main()
{
	int h=0, m=0, s=0;
	Time tl;           //定义t1为Time类对象
	/*cin >> t1.hour;      //输入设定的时间 
	cin >> t1.minute;
	cin >> t1.sec;
	cout << t1.hourl << ":" << t1.minute << ":" << t1.sec << endl;*/
	tl.setTime(h,m,s);
	tl.showTime();
	return 0;
}
