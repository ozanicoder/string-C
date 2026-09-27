#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#define a 11
int main(){
	setlocale(LC_ALL,"french");
	
	char nom1[a], nom2[a],nome[20];
	
	printf("Quel est ton nome de famille?\n");
	fgets(nom2, a, stdin);
	fflush(stdin);
	system("cls");
	
	printf("Quel est ton prénome?\n");
	fgets(nom1, a, stdin);
	fflush(stdin);
	system("cls");
	
	 strcpy ( nome,strcat(nom1,nom2));
	 printf("Tu t'appelles %s", nome);
	
	return 0;
}