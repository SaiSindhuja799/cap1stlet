
#include<stdio.h>
int main()
{
	char s[1000];
	int len,ctr;
	scanf("%[^\n]s",s);
	for(len=0;s[len];len++);
	if(isalpha(s[ctr]))
	s[0]=s[0]-32;
	for(ctr=0;ctr<len;ctr++)
	{
		if(isalpha(s[ctr])|| s[ctr]==' ')
		{
		if(s[ctr]==' ')
		{
			s[ctr+1]=s[ctr+1]-32;
		}
		}
	}
	printf("%s",s);
}
