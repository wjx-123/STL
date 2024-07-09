/*Ë«ÏòÁ´±í*/
#pragma once
#include <iostream>

struct DoubleLinkNode
{
	int data;
	DoubleLinkNode* next;
	DoubleLinkNode* prev;
	DoubleLinkNode(int val);
};

class DoubleLinkList 
{
public:
	DoubleLinkNode* dummy;

	DoubleLinkList();
	~DoubleLinkList();

public:
	void add(int);

	void remove(int);

	DoubleLinkNode* find(int);
};
