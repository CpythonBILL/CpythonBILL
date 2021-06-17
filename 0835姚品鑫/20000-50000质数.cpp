#include<stdio.h>
#include <windows.h>
void show() //使用封装函数show 
{
	
int i;
int n=20000; 
 int as=50000;
 int b=0;
while(1)
{ 
i=2;
while(i<n)
{

if(n%i==0)
break;
i++;
}
if(i==n)
{

//printf("%d ",n);
b++;
}
n++;
if(n==as) break;
} 
system("cls");
printf("%d\n",b);
}
int main()
{
	show();
	
	
	system("pause");
return 0;
}
