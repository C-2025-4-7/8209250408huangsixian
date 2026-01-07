#include<iostream>
using namespace std;
class Grade {
private:
	int id;
	float score;
public:
	Grade(int i = 0, int g = 0) : id(i), score(g) {}
	float getScore() {
		return score;
	}
	int getId() {
		return id;
	}
	void Max(Grade*p,int len)
	{
		if (len <= 0) return;
		Grade* Maxscore = p;
		for(int i=0;i<5;i++)
		{
			if (p[i].getScore() > Maxscore->getScore())
			{
				Maxscore = &p[i];
			}
		}
		cout << "最高分是：" << Maxscore->getScore() << "，学号是：" << Maxscore->getId() << endl;
	}
};
int main()
{
	Grade gr[5];
	int id;
	float score;
	for (int i = 0; i < 5; i++) {
		cout << "请输入第" << i + 1 << "个学生的学号和成绩：" << endl;
		cin >> id >> score;
		gr[i] = Grade(id, score);
	}
	Grade g;
	g.Max(gr, 5);
	return 0;
}