	
#include <stdio.h>
#include <stdlib.h>
#include <conio.h> 

	int i,s;
int z=4;
int j=2;
int cs,xs;
int bh=1;
int a[10]={0};
	int ss;
	char tc,ch;
	int aa;
void startup()
{

}
void show()
{
 
}
void updateWithInput()//与用户输入有关的更新 
{
	
	
 


}

	void updateWithoutInput()//与用户输入无关的更新 
	{
		
		 
	
		 FILE *fpWrite=fopen("data.txt","w");
	if(fpWrite==NULL)
	{
		//return 0;
	}


fprintf(fpWrite,"学号 语文 数学 英语\n");
printf("多少人  ");


	fclose(fpWrite);
	

}
//	getchar();
 int main()
{
startup();
while(1)	
{
show();
updateWithoutInput();
updateWithInput();

}	
	return 0;
}


