#include <iostream>
#include <list>
#include <vector>
#include <map>
#include <string>

using namespace std;



class Object
{

};

class Enemy : public Object
{
public:
	int iNumber;
public:
	Enemy() {}
	Enemy(int _i) : iNumber(_i) {}
};


int main(void)
{
	map<string, list<Object*>> Objects;

	list<Object*> Enemys;

	Enemys.push_back(new Enemy(1));
	Enemys.push_back(new Enemy(2));
	Enemys.push_back(new Enemy(3));

	Objects.insert(make_pair("Enemy", Enemys));
	// ** Objects : Ãâ·Â ¼÷Á¦.
	return 0;
}