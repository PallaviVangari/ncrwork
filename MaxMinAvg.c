#include<stdio.h>
int main()
{	
	int num=0,sum=0,max=0,min=33000,n,count=0;
	
	printf("enter the numbers:\n");
	
	scanf("%d",&n);
	while(n>0)
	{
		sum+=n;
		if(max<n)
			max=n;
		if(min>n)
			min=n;
		count++;
		scanf("%d",&n);
	}	 
	printf("Num of positive numbers=%d\n Max=%d\n Min=%d \n Avg=%f",count,max,min,(float)sum/count);
	return 0;
}

