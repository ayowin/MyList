
#ifndef _MyList_H
#define _MyList_H

#include <iostream>

struct Node;

class MyList
{
public:
	MyList();
	~MyList();

	bool insert(int position,int data);//插入数据

	bool isExist(int position);//该位置是否有值
	
	int get(int position);//取得数据
	
	int operator[](int position);//像数组一样取得数据

	bool update(int position, int data);//更新数据

	bool remove(int position);//删除数据

	int size();//取得链表长度

	void print();//调试输出

private:
	Node* head;
};

#endif

