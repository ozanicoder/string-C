#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#define c 4
int main()
{
	setlocale(LC_ALL,"portuguese");
 	char obj[c]={"boy"};
 	char res[c];
 	
 	printf("Como diz-se \"rapaz\" em inglês?\n");
 	fgets(res, c,stdin );
 	fflush(stdin);
 	
 	int r=strcmp(obj,res);
 	
 	if(r==0){
		 printf("Correcto!");
	 }else
	 {
		 printf("Incorrecto!");
	 }
 	
	return 0;
}