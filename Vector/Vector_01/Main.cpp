#include <iostream>
#include <string>

using namespace std;


/*******************************************
* [�迭]
* ���� : 
* 1. ���� ������ �����ϴ�.
* 2. ���� �ӵ��� �׻� �����ϴ�.
* 
* ���� : 
* 1. �迭�� ���̸� ������ �� ����.
* 2. ������ ����/������ ������ ��迭�� �ʿ�.
* 
********************************************/


int* AddArray(int* _array, int& _length)
{
	int* Array = (int*)malloc(sizeof(int) * (_length + 1));

	for (int i = 0; i < 10; ++i)
		Array[i] = _array[i];

	_length += 1;
	Array[10] = _length;

	free(_array);
	_array = nullptr;

	return Array;
}

int* DeleteArray(int* _array, int _Where, int& _length)
{
	--_length;
	--_Where;
	int* Array = (int*)malloc(sizeof(int) * _length);

	memcpy(Array, _array, sizeof(int) * (_length));

	for (int i = _Where; i < _length; ++i)
		Array[i] = _array[i + 1];

	free(_array);
	return Array;
}

int main(void)
{
	int Length = 10;
	int* Array = (int*)malloc(sizeof(int) * Length);
	
	for (int i = 0; i < Length; ++i)
		Array[i] = i + 1;

	Array = AddArray(Array, Length);

	// 1. ���� ���ʿ� ��ġ�� ���� ����. (11�� ������ �ȵ�)
	Length--;
	Array[Length] = NULL;

	// 2. 5�� ������ ����. (5�� ������ �ȵ�.)
	Array = DeleteArray(Array, 5, Length);

	for (int i = 0; i < Length; ++i)
		cout << Array[i] << endl;

	return  0;
}