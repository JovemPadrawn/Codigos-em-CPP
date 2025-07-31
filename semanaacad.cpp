#include <locale.h>
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int h, m, s, relogio;
	s = 0;
	m = 0;
	h = 0;
	do {
		//printf("%d:%d:%d\n", h, m, s);
		do {
			//printf("%d:%d:%d\n", h, m, s);
			do {
				printf("%02d:%02d:%02d\n", h, m, s);
				Sleep(1000);
				system("cls");
				s++;
			} while (s<60);
			s = 0;
			m++;
		} while (m<60);
		//s = 0;
		m = 0;
		h++;
	} while (h<12);
}
