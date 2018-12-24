#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	FILE *in,*out;
	char str[100];
	int a, b,cnt;

	a = fopen_s(&in, "C://Users/USER/Desktop/welcome.txt", "r");
	b = fopen_s(&out, "C://Users/USER/Desktop/output.txt", "w");

	while (!feof(in))//ÀË¬d¬O§_¨ìÀÉ§À
	{
		cnt = fscanf_s(in,"%s",str,100);
		if (cnt>0)
			fprintf(out,"%s\n", str);
	}
	fclose(in);
	fclose(out);

	system("pause");
	return 0;
}