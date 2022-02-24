#include <iostream>
#include <string>

using namespace std;


/*******************************************
* [배열]
* 장점 : 
* 1. 직접 접근이 가능하다.
* 2. 접근 속도가 항상 일정하다.
* 
* 단점 : 
* 1. 배열의 길이를 변경할 수 없다.
* 2. 데이터 삽입/삭제시 원소의 재배열이 필요.
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

	// 1. 가장 뒷쪽에 위치한 원소 삭제. (11이 있으면 안됨)
	Length--;
	Array[Length] = NULL;

	// 2. 5번 데이터 삭제. (5가 있으면 안됨.)
	Array = DeleteArray(Array, 5, Length);

	for (int i = 0; i < Length; ++i)
		cout << Array[i] << endl;

	return  0;
}