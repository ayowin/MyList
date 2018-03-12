
#ifndef _MyList_H
#define _MyList_H

#include <iostream>

struct Node;

class MyList
{
public:
	MyList();
	~MyList();

	bool insert(int position,int data);//��������

	bool isExist(int position);//��λ���Ƿ���ֵ
	
	int get(int position);//ȡ������

	bool update(int position, int data);//��������

	bool remove(int position);//ɾ������

	int size();//ȡ��������

	void print();//�������

private:
	Node* head;
};

#endif

