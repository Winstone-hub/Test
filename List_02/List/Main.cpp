#include <iostream>
#include <list>

using namespace std;


typedef struct tagNode
{
	tagNode* Front;
	int Value;
	tagNode* Back;
}NODE;

typedef struct tagIterator
{
	tagNode* pThis;

}Iterator;

int iSize = 1;

void push_back(int _Value, NODE* _pList);
NODE* front(NODE* _pList);
NODE* back(NODE* _pList);

Iterator* begin(NODE* _pList);
Iterator* end(NODE* _pList);

void Delete(int _where, NODE* _pList);
NODE* erase(int _where, NODE* _pList);
int size();

int main(void)
{
	auto pList = new NODE;

	pList->Front = nullptr;
	pList->Value = 10;
	pList->Back = nullptr;

	push_back(20, pList);
	push_back(30, pList);
	push_back(40, pList);
	push_back(50, pList);
	push_back(60, pList);
	push_back(70, pList);
	push_back(80, pList);
	push_back(90, pList);

	cout << "size : " << size() << endl;
	int i = 0;

	/*
	for (NODE* iIter = pList; iIter != nullptr; iIter = iIter->Back)
	{
		if (i == 1)
			iIter = erase(1, iIter);

		i++;

		cout << iIter->Value << endl;
	}
	*/

	for (Iterator* iIter = begin(pList) ; iIter->pThis != nullptr;
		iIter->pThis = iIter->pThis->Back)
	{
		cout << iIter->pThis->Value << endl;
	}

	cout << "size : " << size() << endl;



	//============================================================

	list<int> NumberList;

	for (int i = 0; i < 10; ++i)
		NumberList.push_back(i * 10 + 10);


	cout << "size : " << NumberList.size() << endl;

	list<int>::iterator iter = NumberList.end();

	

	cout << "begin : " << (*NumberList.begin()) << endl;
	cout << "end : " << *(--NumberList.end()) << endl;

	cout << endl;
	for (auto iter = NumberList.begin(); 
		iter != NumberList.end(); ++iter)
	{
		cout << (*iter) << endl;
	}
	cout << endl;
	// ** ¾à½Ä
	for (auto iter : NumberList) 
	{ 
		cout << iter << endl;
	}

	return 0;
}

void push_back(int _Value, NODE* _pList)
{
	/*
	NODE* ParentNode = back();
	NODE* Node = new NODE;

	Node->Front = ParentNode;
	Node->Value = _Value;
	Node->Back = nullptr;

	ParentNode->Back = Node;
	*/
	if (_pList->Back == nullptr)
	{
		NODE* Node = new NODE;

		Node->Front = _pList;
		Node->Value = _Value;
		Node->Back = nullptr;

		_pList->Back = Node;
		++iSize;
	}
	else
	{
		push_back(_Value, _pList->Back);
	}
}

NODE* front(NODE* _pList)
{
	return _pList;
}

NODE* back(NODE* _pList)
{
	/*
	NODE* pNextNode = pList;

	while (pNextNode->Back != nullptr)
		pNextNode = pNextNode->Back;

	return pNextNode;
	*/

	if (_pList->Back == nullptr)
		return _pList;
	else
		back(_pList->Back);
}

Iterator* begin(NODE* _pList)
{
	Iterator* iter = new Iterator;

	iter->pThis = new NODE;
	iter->pThis = _pList;

	return iter;
}

Iterator* end(NODE* _pList)
{
	return nullptr;
}

void Delete(int _where, NODE* _pList)
{
	if (_where == 1)
	{
		_pList->Back->Front = _pList->Front;
		_pList->Front->Back = _pList->Back;

		delete _pList;
		iSize += (-1);
	}
	else
		Delete(_where + (-1), _pList->Back);
}

NODE* erase(int _where, NODE* _pList)
{
	if (_where == 1)
	{
		_pList->Back->Front = _pList->Front;

		NODE* Temp = _pList->Back;

		delete _pList;
		iSize += (-1);

		return Temp;
	}
	else
		erase(_where + (-1), _pList->Back);
}

int size()
{
	return iSize;
}
