#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void Print()
{
	printf("-------------------------------\n");
	printf("-------------ICE---------------\n");
	printf("-----------breaking------------\n");
	printf("-------------------------------\n");
	printf("Enter.�� �Է����ּ���.......");
}
main()
{
	Print();
	srand(time(NULL));
	
	char* room[15] = { "�����","�㼱��","������", "�ڻ��", "������", "������", "�̽¿�", "������", "���游",
		"�̻���","������","������","��ö��","�ڻ�� ������","��ȫ�� ������" };
	char* win[3] = { "0", };
	for (int i = 2; i >= 0; i--)
	{
		getchar();
		win[i] = room[rand() % 15];
		
		if(i==2)
			printf("%d��. %s", i + 1, win[i]);
		else
		{
			for (int j = 2; j > i; j--)
			{
				if (win[i] == win[j])
				{
					while (win[i] == win[j])
					{
						/*printf("------------------\n");
						printf("%s\n", win[i]);
						printf("------------------\n");*/ //
						win[i] = room[rand() % 13];
					}
				}
			}
			printf("%d��. %s", i + 1, win[i]);
		}
	}
	printf("\n");
	system("pause");
}

