#include <iostream>
#include <string>


using namespace std;





// ** Vector
typedef struct tagInfo
{
	int Value;
	
}INFO;

// **미리 생성된 공간.
int Capacity = 0;

// ** 현재 원소의 개수
int Size = 0;

INFO* InfoList = nullptr;

void push_back(int _Value);
void pop_back();
INFO* erase(const void* _Where);

int size();
int capacity();

void Output();


int main(void)
{
	for (int i = 0; i < 10; ++i)
	{
		push_back(i * 10 + 10);
		cout << InfoList[i].Value << endl;
		cout << "capasity : " << capacity() << "     size : " << Size << endl << endl;
	}


	INFO* test = nullptr;

	for (int i = 0; i < Size; ++i)
	{
		if (i == 3)
		{
			test = erase(&InfoList[i]);
		}
	}

	pop_back();

	Output();
	


	return 0;
}

void push_back(int _Value)
{
	INFO* Temp = new INFO[Capacity];

	memcpy(Temp, InfoList, sizeof(INFO) * Capacity);

	if (Capacity < 3)
	{
		++Capacity;
		InfoList = new INFO[Capacity];

		for (int i = 0; i < (Capacity - 1); ++i)
			InfoList[i] = Temp[i];

		InfoList[Size].Value = _Value;
	}
	else
	{
		if (Capacity <= Size)
		{
			Capacity += (Capacity >> 1);
			InfoList = new INFO[Capacity];
		}

		for (int i = 0; i < (Capacity - 1); ++i)
			InfoList[i] = Temp[i];

		InfoList[Size].Value = _Value;
	}

	++Size;
}

void pop_back()
{
	--Size;
}

INFO* erase(const void* _Where)
{
	int Start = 0;
	--Size;

	for (int i = 0; i < Size; ++i)
	{
		if (InfoList[i].Value == ((INFO*)_Where)->Value)
		{
			Start = i;
			break;
		}
	}

	for (int i = Start; i < Size; ++i)
		InfoList[i] = InfoList[i + 1];
	
	return ((INFO*)_Where);
}

int size()
{
	return Size;
}

int capacity()
{
	return Capacity;
}

void Output()
{
	for (int i = 0; i < Size; ++i)
		cout << InfoList[i].Value << endl;
}
