#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//�̰� �迭�� �޸𸮰� �����̱� ������ ũ�⸦ �̸� �Ҵ��ϰ� 
//���� �����ϴ��� ���߿� ������ �� ���� ���Ƶ� �޸𸮸� �״�� �����Ѵٴ� �������� �����ִ� �ڵ�

int main()
{
	int arr[10];
	int readCount = 0;
	int readData;
	int i;

	while (1)
	{
		printf("�ڿ��� �Է� : ");
		scanf("%d", &readData);

		if (readData < 1)
			break;

		arr[readCount++] = readData;
	}

	for (int i = 0;i < readCount;i++)
		printf("%d ", arr[i]);
	printf("\n");





	return 0;
}