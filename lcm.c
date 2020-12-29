#include<stdio.h>
int lcm(int,int);
int main()
{
	int x,y,result;
	printf("Input first number:");
	scanf("%d",&x);
	printf("Input second number:");
	scanf("%d",&y);
	result=lcm(x,y);
	printf("The LCM of %d and %d = %d\n",x,y,result);
	return 0;
}

int lcm(int x,int y)
{
	static int temp=1;
	if(temp%x==0&&temp%y==0)
	{
		return temp;
	}
	temp++;
	lcm(x,y);
	return temp;
}
