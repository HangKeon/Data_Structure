#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//이건 배열의 메모리가 정적이기 때문에 크기를 미리 할당하고 
//만약 부족하더라도 도중에 수정할 수 없고 남아도 메모리를 그대로 차지한다는 문제점을 보여주는 코드

int main()
{
	int arr[10];
	int readCount = 0;
	int readData;
	int i;

	while (1)
	{
		printf("자연수 입력 : ");
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