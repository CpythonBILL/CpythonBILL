	
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
void updateWithInput()//���û������йصĸ��� 
{
	
	
 


}

	void updateWithoutInput()//���û������޹صĸ��� 
	{
		
		 
	
		 FILE *fpWrite=fopen("data.txt","w");
	if(fpWrite==NULL)
	{
		//return 0;
	}


fprintf(fpWrite,"ѧ�� ���� ��ѧ Ӣ��\n");
printf("������  ");


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


