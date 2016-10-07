#ifndef SNAKE_GAME_H
#define SNAKE_GAME_H
#include "base/base.hpp"
/**
 in <conio.h> _getch() keybord value and windows clolor define 
 *UP 72					//����� ��
 *DOWN 80				//����� ��
 *LEFT 75				//����� ��
 *RIGHT 77				//����� ��
 *ESC 27				//ESC��
 *ENTER 13				//�س���
 *SPACE 32   			//�ո�
 *GREEN 0XA      	 	//��ɫ
 *BLUE 0xB				//��ɫ
 *RED 0xC				//��ɫ
 *WHITE 0xB|0xC			//��ɫ
**/
//keybord->value
enum {
	UP = 72, DOWN = 80, LEFT = 75, RIGHT = 77, ESC = 27, ENTER = 13,
	SPACE = 32
};
//COLOR define
enum class color{
	GREEN = 0XA, BLUE = 0xB, RED = 0xC, WHITE = 0xB|0xC, YELLO=0XA|0xC
};

//game list
enum {
	snake_game = 8, snake_ai = 9, exit_game = 10
};

void gotoxy(const int x, const int y, const color c);
int get_key();
void HideCursor();

void play_snake_game();
void play_snake_ai();
int menu();
#endif