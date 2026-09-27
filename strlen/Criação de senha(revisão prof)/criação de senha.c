#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#define b 16

int main(){
	setlocale(LC_ALL,"portuguese");
	char sen[b], vrf[b];
	
	printf("\nA senha tem que ter pelo menos 8 e no máximo 15 caracteres");
	printf(" terá que ser escrito também com letras minúsculas para evitar falhas no sistema\n\n");
	printf("prima qualquer tecla pra continuar\n");
	//get();
	//system("cls");
	printf("Insira aqui a senha:\n");
	scanf("%s", & sen[b]);
	fflush(stdin);
	
	if (strlen(sen)<8 || strlen(sen)>=b){
		puts("Número de caracteres inválido.");
		return 0;
	}else{
		printf("");
	}
	
	printf("Confirme a senha:\n");
	fgets(vrf, b, stdin);
	fflush("stdin");
	
	int con=strcmp(sen, vrf);
	
	if (con==0){
		
		puts("A senha foi criada.");
	}else{
		puts("As senhas são diferentes");
	}
	
	return 0;
}