#include <iostream>
#include <list>
#include <vector>
#include <map>
#include <string>

using namespace std;



class Object
{
public:
	string Name;
public:
	virtual int GetNumber() = 0;

public:
	Object() {}
	Object(string _name) : Name(_name) {}
	Object(string _name, int _i)
	{
		Name = "Enemy" + to_string(_i);
	}
	~Object() {}
};

class Enemy : public Object
{
public:
	int iNumber;

	virtual int GetNumber()override
	{
		return iNumber;
	}
public:
	Enemy() {}
	Enemy(int _i) : iNumber(_i) {}
	Enemy(string _name) : Object(_name) {}
	Enemy(string _name, int _i) : Object(_name, _i) {}
};


int main(void)
{
	/*
	map<string, list<Object*>> Objects;

	list<Object*> Enemys;

	for (int i = 0; i < 100; ++i)
		Enemys.push_back(new Enemy(i));

	Objects.insert(make_pair("Enemy", Enemys));


	// ** Objects : Ãâ·Â ¼÷Á¦.
	for (map<string, list<Object*>>::iterator iter = Objects.begin();
		iter != Objects.end(); ++iter)
	{
		for (list<Object*>::iterator iter2 = iter->second.begin();
			iter2 != iter->second.end(); ++iter2)
		{
			cout << (*iter2)->GetNumber() << endl;
		}
	}
	*/






	/*
	map<int, Object*> Objects;

	for (int i = 0; i < 100; ++i)
		Objects.insert(make_pair(i, new Enemy("Enemy", i)));



	for (map<int, Object*>::iterator iter = Objects.begin();
		iter != Objects.end(); ++iter)
	{
		cout << iter->second->Name << endl;
	}

	map<int, Object*>::iterator iter = Objects.find(10);


	cout << endl << iter->first << endl;
	cout << iter->second->Name << endl;
	*/



	return 0;
}