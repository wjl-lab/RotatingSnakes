#include <stdio.h>
#include <conio.h>
#include <graphics.h>


#define WIDTH 1200
#define HEIGHT 800//初始画布宽高
#define DIS 20//两个圆的距离

#define PI 3.14159

int main()
{
	initgraph(WIDTH, HEIGHT);
	setbkcolor(RGB(135, 127, 108));
	cleardevice();

	//定义圆的圆心
	int RADIUS = 180;//圆半径
	int centerX = DIS + RADIUS;
	int centerY = DIS + RADIUS;


	//画扇形 
	for (centerX = 200; centerX < 1200; centerX = centerX + 400)
	{
		for (centerY = 200; centerY < 800; centerY = centerY + 400)
		{
			int i;
			float offset;
			float totaloffset = 0;
			
			for (RADIUS = 200; RADIUS > 0; RADIUS = RADIUS - 50)
			{
				int left = centerX - RADIUS;
				int right = centerX + RADIUS;
				int top = centerY - RADIUS;
				int bottom = centerY + RADIUS;

				COLORREF color1 = HSVtoRGB(0, 0, 0.0);
				COLORREF color2 = HSVtoRGB(0, 0, 0.1);
				COLORREF color3 = HSVtoRGB(0, 0, 0.2);
				COLORREF color4 = HSVtoRGB(0, 0, 0.3);
				COLORREF color5 = HSVtoRGB(0, 0, 0.4);
				COLORREF color6 = HSVtoRGB(0, 0, 0.5);
				COLORREF color7 = HSVtoRGB(0, 0, 0.6);
				COLORREF color8 = HSVtoRGB(0, 0, 0.7);
				COLORREF color9 = HSVtoRGB(0, 0, 0.8);
				COLORREF color10 = HSVtoRGB(0, 0, 0.9);
				

				for (i = 0; i < 36; i++)
				{
					offset = i * PI / 18 + totaloffset;
					setfillcolor(color1);
					solidpie(left, top, right, bottom, offset, 1 * PI / 180 + offset);
					setfillcolor(color2);
					solidpie(left, top, right, bottom, 1 * PI / 180 + offset, 2 * PI / 180 + offset);
					setfillcolor(color3);
					solidpie(left, top, right, bottom, 2 * PI / 180 + offset, 3 * PI / 180 + offset);
					setfillcolor(color4);
					solidpie(left, top, right, bottom, 3 * PI / 180 + offset, 4 * PI / 180 + offset);
					setfillcolor(color5);
					solidpie(left, top, right, bottom, 4 * PI / 180 + offset, 5 * PI / 180 + offset);
					setfillcolor(color6);
					solidpie(left, top, right, bottom, 5 * PI / 180 + offset, 6 * PI / 180 + offset);
					setfillcolor(color7);
					solidpie(left, top, right, bottom, 6 * PI / 180 + offset, 7 * PI / 180 + offset);
					setfillcolor(color8);
					solidpie(left, top, right, bottom, 7 * PI / 180 + offset, 8 * PI / 180 + offset);
					setfillcolor(color9);
					solidpie(left, top, right, bottom, 8 * PI / 180 + offset, 9 * PI / 180 + offset);
					setfillcolor(color10);
					solidpie(left, top, right, bottom, 9 * PI / 180 + offset, 10 * PI / 180 + offset);
				}
				totaloffset = offset + PI / 36;
			}


		}
	}
	
	_getch();
	return 0;
}