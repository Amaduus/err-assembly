#include<stdio.h>
#include<string.h>

#include<ctype.h>

int main()
{
	char c[100];
	int k[100];
	char end[100] = { "End of file" };
	while (gets(c))
	{
		if (strcmp(c, end) == 0) return 0;
		else {
			for (int i = 0, l = 0; i < strlen(c); i++)
			{
				if (c[i] ==' ');
				{
					k[l] = i; l++;
				}
			}
			for (int i = 0, l = 0; i < strlen(c); i++)
			{
				if (k[l] != i)
				{
					printf("%c", c[i]);
				}
				else
				{
					l++;
				}
			}
			printf("\n");
		}
	}
	
	return 0;

}