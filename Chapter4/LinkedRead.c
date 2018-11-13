#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct
{
	int data;
	struct Node* next;
}Node;

int main()
{
	Node* head = NULL;
	Node* tail = NULL;
	Node* cur = NULL;

	Node* newNode = NULL;
	int readData;

	//�����͸� �Է� �޴� ����/////
	while (1)
	{
		printf("�ڿ��� �Է� : ");
		scanf("%d", &readData);

		if (readData < 1)
			break;

		//����� �߰� ����
		newNode = (Node*)malloc(sizeof(Node));
		newNode->data = readData;
		newNode->next = NULL;

		if (head == NULL)
			head = newNode;
		else
			tail->next = newNode;

		tail = newNode;
	}
	printf("\n");

	//�Է� ���� �������� ��°���/////
	printf("�Է� ���� �������� ��ü ���!\n");

	if (head == NULL)
		printf("����� �ڿ����� �������� �ʽ��ϴ�.\n");
	else
	{
		cur = head;
		printf("%d ", cur->data);					//ù ��° ������ ���

		while (cur->next != NULL)
		{
			cur = cur->next;
			printf("%d ", cur->data);
		}
	}
	printf("\n\n");

	//�޸��� ��������
	if (head == NULL)
		return 0;												//������ ��尡 ���������� �ʴ´�.
	else
	{
		Node* delNode = head;
		Node* delNextNode = head->next;

		printf("%d��(��) �����մϴ�.\n", head->data);
		free(delNode);											//ù ��° ��� ����

		while (delNextNode != NULL)								//�� ��° ���� ��� ����	
		{
			delNode = delNextNode;
			delNextNode = delNextNode->next;

			printf("%d��(��) �����մϴ�.\n", delNode->data);
			free(delNode);
		}
	}





	return 0;
}