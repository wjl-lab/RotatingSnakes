#include <stdio.h>
#include <conio.h>
#include <graphics.h>


#define WIDTH 1200
#define HEIGHT 800//��ʼ�������
#define DIS 20//����Բ�ľ���
#define RADIUS 180;//Բ�뾶
#define PI 3.14159

int main()
{
	initgraph(WIDTH, HEIGHT);
	setbkcolor(RGB(135, 127, 108));
	cleardevice();

	//����Բ��Բ��
	int centerX = DIS + RADIUS;
	int centerY = DIS + RADIUS;

	//��Բ 
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