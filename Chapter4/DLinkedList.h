#pragma once

#define True 1
#define FALSE 0

typedef int LData;

typedef struct
{
	LData data;
	Node* next;
}Node;

typedef struct {
	Node* head;
	Node* cur;
	Node* before;
	int numOfData;
	int(*comp)(LData d1, LData d2);
}LinkedList;

typedef LinkedList List;
void ListInit(List* plist);
void LInsert(List* plist, LData data);

int LFirst(List* plist, LData* pdata);
int LNext(List* plist, LData* pdata);

LData LRemove(List* plist);
int LCount(List* plist);

void SetSortRule(List* plist, int(*comp)(LData d1, LData d2));