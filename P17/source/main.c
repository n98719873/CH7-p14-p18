#include<stdio.h>
#include<stdlib.h>
#define MAX 80

int main(void)
{
	FILE *fptr;
	char str[MAX];
	int a, bytes;

	a = fopen_s(&fptr, "C://Users/USER/Desktop/output.txt", "r");
	
	while (!feof(fptr))//¿À¨d¨Oß_®Ï¿…ß¿
	{
		bytes = fread(str, sizeof(char), MAX - 1, fptr);
		str[bytes] = '\0';
		printf("%s\n", str);
	}
	fclose(fptr);

	system("pause");
	return 0;
}