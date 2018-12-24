#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	FILE *fptr;
	char ch;
	int count = 0;
	int a;
	
	a = fopen_s(&fptr, "C://Users/USER/Desktop/welcome.txt", "r");

	if (fptr != NULL)
	{
		while ((ch = getc(fptr)) != EOF)//判斷是否到檔尾
		{
			printf("%c", ch);
			count++;
		}
		fclose(fptr);
		printf("\n總共有%d個字元\n", count);
	}
	else
		printf("檔案開啟失敗!!\n");
	system("pause");
	return 0;
}