
#include "MyList.h"

struct Node
{
	int data = 0;
	Node* next = NULL;
};

MyList::MyList()
{
	head = new Node;
}

MyList::~MyList()
{
	if (head)
	{
		Node *p = head;
		while (p->next)
		{
			head = p->next;
			delete p;
			p = head;
		}
		delete head;
		head = NULL;
	}
}

bool MyList::insert(int position, int data)
{
	Node* p = head;
	if (position <= size() + 1 && position >0)
	{
		for (int i = 1; i < position; i++)
		{
			p = p->next;
		}
		Node* temp = new Node;
		temp->data = data;
		if (p->next)
		{
			temp->next = p->next;
		}
		p->next = temp;
		(head->data)++;
	}
	else return false;
	return true;
}

bool MyList::isExist(int position)
{
	if (position > 0 && position <= size())return true;
	else return false;
}

int MyList::get(int position)
{
	if (isExist(position))
	{
		Node* p = head;
		for (int i = 0; i < position;i++)
		{
			p = p->next;
		}
		return p->data;
	}
	return false;
}

int MyList::operator[](int position)
{
	return get(position);
}

bool MyList::update(int position, int data)
{
	if (isExist(position))
	{
		Node* p = head;
		for (int i = 0; i < position; i++)
		{
			p = p->next;
		}
		p->data = data;
		return true;
	}
	return false;
}

bool MyList::remove(int position)
{
	if (isExist(position))
	{
		Node* p = head;
		for (int i = 1; i < position; i++)
		{
			p = p->next;
		}
		if (p->next->next)
		{
			Node* temp = p->next->next;
			delete p->next;
			p->next = temp;
		}
		else
		{
			delete p->next;
			p->next = NULL;
		}
		(head->data)--;
		return true;
	}
	return false;
}

int MyList::size()
{
	return head->data;
}

void MyList::print()
{
	Node* p = head;
	std::cout << "总共有" << head->data << "个数据。" << std::endl;
	std::cout << "链表中的数据:";
	for (int i = 0; i < head->data; i++)
	{
		p = p->next;
		std::cout << p->data << " ";
	}
	std::cout << std::endl;
}
