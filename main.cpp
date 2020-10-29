#include <stdio.h>
#include <conio.h>
#include <graphics.h>


#define WIDTH 1200
#define HEIGHT 800//初始画布宽高
#define DIS 20//两个圆的距离
#define RADIUS 180;//圆半径
#define PI 3.14159

int main()
{
	initgraph(WIDTH, HEIGHT);
	setbkcolor(RGB(135, 127, 108));
	cleardevice();

	//定义圆的圆心
	int centerX = DIS + RADIUS;
	int centerY = DIS + RADIUS;

	//画圆 
	for (centerX = 200; centerX < 1200; centerX = centerX + 400)
	{
		for (centerY = 200; centerY < 800; centerY = centerY + 400)
		{
			solidcircle(centerX, centerY, 180);
		}
	}
	
	_getch();
	return 0;
}