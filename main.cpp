#include <stdio.h>
#include <conio.h>
#include <graphics.h>


#define WIDTH 1200
#define HEIGHT 800//��ʼ�������
#define DIS 20//����Բ�ľ���

#define PI 3.14159

int main()
{
	initgraph(WIDTH, HEIGHT);
	setbkcolor(RGB(135, 127, 108));
	cleardevice();

	//����Բ��Բ��
	int RADIUS = 180;//Բ�뾶
	int centerX = DIS + RADIUS;
	int centerY = DIS + RADIUS;


	//������ 
	for (centerX = 200; centerX < 1200; centerX = centerX + 400)
	{
		for (centerY = 200; centerY < 800; centerY = centerY + 400)
		{
			int i;
			float offset;
			
			for (RADIUS = 200; RADIUS > 0; RADIUS = RADIUS - 50)
			{
				int left = centerX - RADIUS;
				int right = centerX + RADIUS;
				int top = centerY - RADIUS;
				int bottom = centerY + RADIUS;

				for (i = 0; i < 36; i++)
				{
					offset = i * PI / 18;
					setfillcolor(RGB(255, 255, 0));
					solidpie(left, top, right, bottom, offset, 1 * PI / 54 + offset);
					setfillcolor(RGB(0, 0, 255));
					solidpie(left, top, right, bottom, 1 * PI / 54 + offset, 2 * PI / 54 + offset);
					setfillcolor(RGB(0, 255, 0));
					solidpie(left, top, right, bottom, 2 * PI / 54 + offset, 3 * PI / 54 + offset);
				}
				
			}


		}
	}
	
	_getch();
	return 0;
}