#include <stdio.h>
#include <conio.h>
#include <graphics.h>


#define WIDTH 1200
#define HEIGHT 800//初始画布宽高
#define DIS 20//两个圆的距离

#define PI 3.141

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
	while (1)
	{
		for (centerX = 200; centerX < 1200; centerX = centerX + 400)
		{
			for (centerY = 200; centerY < 800; centerY = centerY + 400)
			{
				int i;
				float offset;
				float totaloffset = 0;
				COLORREF color1 = HSVtoRGB(0, 0, 0.00);
				COLORREF color2 = HSVtoRGB(0, 0, 0.10);
				COLORREF color3 = HSVtoRGB(0, 0, 0.20);
				COLORREF color4 = HSVtoRGB(0, 0, 0.30);
				COLORREF color5 = HSVtoRGB(0, 0, 0.40);
				COLORREF color6 = HSVtoRGB(0, 0, 0.50);
				COLORREF color7 = HSVtoRGB(0, 0, 0.60);
				COLORREF color8 = HSVtoRGB(0, 0, 0.70);
				COLORREF color9 = HSVtoRGB(0, 0, 0.80);
				COLORREF color10 = HSVtoRGB(0, 0, 0.90);

				for (RADIUS = 180; RADIUS > 0; RADIUS = RADIUS - 20)
				{
					int left = centerX - RADIUS;
					int right = centerX + RADIUS;
					int top = centerY - RADIUS;
					int bottom = centerY + RADIUS;

					for (i = 0; i < 20; i++)
					{
						offset = i * PI / 10 + totaloffset;
						setfillcolor(color1);
						solidpie(left, top, right, bottom, offset, 2 * PI / 60 + offset);
						setfillcolor(color3);
						solidpie(left, top, right, bottom, 2 * PI / 60 + offset, 3 * PI / 60 + offset);
						setfillcolor(color5);
						solidpie(left, top, right, bottom, 3 * PI / 60 + offset, 4 * PI / 60 + offset);
						setfillcolor(color7);
						solidpie(left, top, right, bottom, 4 * PI / 60 + offset, 5 * PI / 60 + offset);
						setfillcolor(color9);
						solidpie(left, top, right, bottom, 5 * PI / 60 + offset, 6 * PI / 60 + offset);
					}
					totaloffset = totaloffset + PI / 20;
				}
			}
		}
		_getch();
	}
	
	return 0;
}