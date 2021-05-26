#include <stdio.h>
#include <Windows.h>

unsigned char a = 0xa6;
unsigned char b[12];

void initCanvas(int height, int width) {
	printf("%c%c", a, b[3]);
	for (int i = 0; i < width; i++) {
		printf("%c%c", a, b[1]);
	}
	printf("%c%c", a, b[4]);
	printf("\n");

	for (int i = 0; i < height; i++) {

		printf("%c%c", a, b[2]);
		for (int j = 0; j < width; j++) {
			printf(" ");
		}
		printf("%c%c", a, b[2]);
		printf("\n");
	}

	printf("%c%c", a, b[6]);
	for (int i = 0; i < width; i++) {
		printf("%c%c", a, b[1]);
	}
	printf("%c%c", a, b[5]);
	printf("\n");
}

void gotoxy(int x, int y)
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

int main() {
	for (int i = 1; i < 12; i++) b[i] = 0xa0 + i;
	initCanvas(20, 60);
	gotoxy(5, 10);
	printf(" 　　＿＿＿_∧∧");
	gotoxy(2, 11);
	printf("　～'　＿＿_(,,ㅁДㅁ)   ■■■■■■■■■■■■■■■■■");
	gotoxy(5, 12);
	printf("　　 ＵU 　Ｕ U");
	gotoxy(10, 15);
	printf("●");

	gotoxy(30, 30);

	system("pause");
}