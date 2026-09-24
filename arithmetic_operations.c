#include<stdio.h>
int main()
{
	int a,b,sum=0,sub=0,mul=0,div=0,rem=0;    printf("enter the value of a and b:");
	scanf("%d %d",&a,&b);
	sum=a+b;
	sub=a-b;
	mul=a*b;
	div=a/b;
	rem=a%b;
	printf("sum is:%d\n",sum);
	printf("sub is:%d\n",sub);
	printf("mul is:%d\n",mul);
	printf("div is:%d\n",div);
	printf("rem is:%d\n",rem);
}
	