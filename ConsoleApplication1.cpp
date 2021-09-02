// 答题程序.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//


#include <graphics.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
void show()
{
	int xh;
	srand((unsigned)time(NULL));
	xh = rand() % 100;
	cleardevice();
	circle(300, 240, 100);

}
struct button
{
	int x;
	int y;
	int width;
	int height;
	COLORREF color;
	char* pText;

};
struct button* createButton(int x, int y, int width, int height, COLORREF color, const char *pText)
{
	struct button* pB = (struct button*)malloc(sizeof(struct button));
	pB->x = x;
	pB->y = y;
	pB->width = width;
	pB->height = height;
	pB->color = color;
	pB->pText = (char *)malloc(strlen(pText) + 1);
	strcpy(pB->pText, pText);
	return pB;
}
void drawButton(struct button* pB)
{

	setfillcolor(pB->color);
	settextstyle(35, 0, "黑体");
	setlinecolor(BLACK);
	settextcolor(BLACK);
	setbkmode(TRANSPARENT);
	fillrectangle(pB->x, pB->y, pB->x + pB->width, pB->y + pB->height);
	outtextxy(pB->x + 20, pB->y + 10, pB->pText);

}
void color()
{
	setfillcolor(BLACK);
	fillrectangle(0, 0, 600, 480);
	while (1)
	{

		cleardevice();
		setbkcolor(RGB(rand() % 256, rand() % 256, rand() % 256));
		Sleep(1000);
	}

}
int mouseInButton(struct button* pB, MOUSEMSG m)
{
	if (pB->x <= m.x&&m.x <= pB->x + pB->width&&pB->y <= m.y&&m.y <= pB->height + pB->y)
	{
		pB->color = RED;

		return 1;
	}
	pB->color = WHITE;
	return 0;
}

int main()
{
	initgraph(600, 480);
	IMAGE mm;

	int xx, yy;
	xx = 10;
	rectangle(500, 0, 600, 100);
	settextcolor(WHITE);

	outtextxy(500 + 10, 0 + 10, "请选择");

	struct button* play = createButton(250, 190, 100, 50, WHITE, "play");
	struct button* pause = createButton(0, 400, 200, 80, WHITE, "随机学号");
	struct button* resume = createButton(201, 400, 200, 80, WHITE, "随机姓名");
	struct button* close = createButton(401, 400, 200, 80, WHITE, "退出");


	while (1)//主界面
	{


		//show();
		if (xx == 3)
		{

			
		}
		if (xx == 0)
		{

			break;

		}


		BeginBatchDraw();
		putimage(0, 0, &mm);
		drawButton(play);
		drawButton(pause);
		drawButton(resume);
		drawButton(close);
		MOUSEMSG m = GetMouseMsg();
		//	putpixel(m.x, m.y, WHITE);
		if (mouseInButton(play, m))
		{
			
			if (m.uMsg == WM_LBUTTONDOWN)
			{
				if (xx = 1 && 2)
				{
					xx = 3;
					
					show();
				}
				}




			
		}



		if (mouseInButton(pause, m))
		{
			switch (m.uMsg)
			{
			case WM_LBUTTONDOWN:
			{
				setfillcolor(BLACK);
				fillrectangle(501, 0, 600, 99);
				settextcolor(WHITE);
				outtextxy(500 + 10, 0 + 25, "学号");
				xx = 1;
				break;
			}
			}
		}
		else
		{

		}




		if (mouseInButton(resume, m))
		{
			switch (m.uMsg)
			{
			case WM_LBUTTONDOWN:
				xx = 2;
				{
					setfillcolor(BLACK);
					fillrectangle(501, 0, 600, 99);
					settextcolor(WHITE);
					outtextxy(500 + 10, 0 + 25, "姓名");
					break;
				}
			}
		}
		if (mouseInButton(close, m))
		{
			switch (m.uMsg)
			{
			case WM_LBUTTONDOWN:
				xx = 0;

			}

		}


		EndBatchDraw();

		
	}
	


	closegraph();


	return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
