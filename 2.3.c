#include <stdio.h>

int main(void) {
	//a
	// if (x<5)&&(y>=-10)
	//  printf(“%d”,x+y);//Неверно записанная программа, ошибка в записи условного оператора

  //b
	int x = 45; int y = -10;
	if (x < 5)
		if (y >= -10)
			printf("%d \n", x+y); //Программа работает

	//c
	//x = 45; y = -10;
	//if (x<5, y>=-10)
	//printf("%d \n", x + y); //Неверно записанная программа.

  //d
	x = 45; y = -10;
	if (x < 5 && y >= -10)
		printf("%d \n", x+y); //Программа работает


// Фрагменты b и d эквивалентны
}