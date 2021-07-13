#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
	string name;
	int age;
	bool gender;

	Student(string n, int a, int g)
	{
		name = n;
		age = a;
		gender = g;
	}
};

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	string name;
	cin >> name;

	int age;
	cin >> age;

	int gender;
	cin >> gender;

	Student s(name, age, gender);

	cout << (s).name << " " << (s).age << " " << (s).gender << endl;

	return 0;
}