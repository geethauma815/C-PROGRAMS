#include <stdio.h>
#include <string.h>
int main()
{
  	char str[100];
  	int i;
	printf("enter string\n");
  	scanf("%s",str);
  	int l=strlen(str);
  	for(i=l-1;i>=0;i--)
  	printf("%c",str[i]);
  }
