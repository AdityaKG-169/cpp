#include <bits/stdc++.h>
using namespace std;

class Student
{
private:
	string name;
	int age;
	int roll;

public:
	Student(string name, int age, int roll)
	{
		this->name = name;
		this->age = age;
		this->roll = roll;
	}

	void display()
	{
		cout << this << endl;
		cout << endl;
	}
};

int main()
{
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	Student s1("John", 20, 323);
	Student s2(s1);

	s1.display();
	s2.display();

	return 0;
}
