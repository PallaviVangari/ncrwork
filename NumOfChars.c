#include<stdio.h>
int main()
{
	int d=0,s=0,t=0,l=0,i=0;
	char ch[80],c;
	
	printf("Enter the string:");
	scanf("%c",&c);
	while(c!='\n')
	{
		ch[i++]=c;
		scanf("%c",&c);
	}
	i=0;
	while(ch[i])
	{
		if(ch[i]>='0' && ch[i]<='9')
			d++;
		else if(ch[i]==' ')
			s++;
		else if(ch[i]=='\t')
			t++;
		else if((ch[i]>='A' && ch[i]<='Z')||(ch[i]>='a' && ch[i]<='z'))
			l++;
		i++;
	}
	printf("No: of digits=%d \n Num of spaces=%d \n num of tabs=%d \n Num of letters=%d",d,s,t,l);
	return 0;
}

