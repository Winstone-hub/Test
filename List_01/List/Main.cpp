#include <iostream>
//#include <list>

using namespace std;


typedef struct tagNode
{
	int Value;
	tagNode* Next;

}Node; 

Node* pList = new Node;


Node* back(Node* _pNode)
{
	if (_pNode->Next != nullptr)
		back(_pNode->Next);
	else
		return _pNode;
}


void push_back(int _number, Node* _pNode = pList)
{

}



int main(void)
{
	// ** 업데이트에 개념.
	// ** (new Vector3) C++ || C# 차이






	/*
	int iArray[16] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int* iIter = nullptr;

	iIter = iArray;

	//cout << (*iIter) << endl;

	for (int i = 0; i < 10; ++i)
		cout << (*(iIter + i)) << endl;
	*/





	/*
	list<int> NumberList = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	for (list<int>::iterator iter = NumberList.begin();
		iter != NumberList.end(); ++iter)
	{
		cout << *iter << endl;
	}
	*/


	/*
	int iArray[16] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, NULL };
	
	for (int* iIter = iArray; (*iIter) != NULL; ++iIter)
		cout << (*iIter) << endl;
	*/

	

	pList->Value = 0;
	pList->Next = nullptr;
	
	for (int i = 0; i < 10; ++i)
	{
		Node* pNode = new Node;

		pNode->Value = i + 1;
		pNode->Next = nullptr;

		Node* BackNode = back(pList);
		BackNode->Next = pNode;
	}



	cout << back(pList)->Value << endl;

	return 0;
}




