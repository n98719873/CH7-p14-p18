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
		while ((ch = getc(fptr1)) != EOF)//�P�_�O�_���ɧ�
			putc(ch, fptr2);
		fclose(fptr1);
		fclose(fptr2);
		printf("�ɮ׫�������!!\n");
	}
	else
		printf("�ɮ׶}�ҥ���!!\n");
	system("pause");
	return 0;
}