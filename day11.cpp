#include<iostream>
#include<string>
using namespace std;

struct stuent
{
	string name;
	int age;
	int score;
};

int main() {
	stuent s = { "zhang",18,100 };
	stuent* p = &s;
	cout << p->name <<"\n"<< p->age<<"\n" << p->score << endl;

	system("pause");
	return 0;
}