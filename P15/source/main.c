#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	FILE *fptr1,*fptr2;
	char ch;
	int a,b;

	a = fopen_s(&fptr1, "C://Users/USER/Desktop/welcome.txt", "r");
	b = fopen_s(&fptr2, "C://Users/USER/Desktop/output.txt", "w");

	if ((fptr1 != NULL) && (fptr1 != NULL))
	{
		while ((ch = getc(fptr1)) != EOF)//判斷是否到檔尾
			putc(ch, fptr2);
		fclose(fptr1);
		fclose(fptr2);
		printf("檔案拷貝完成!!\n");
	}
	else
		printf("檔案開啟失敗!!\n");
	system("pause");
	return 0;
}