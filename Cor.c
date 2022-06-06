#include<stdio.h> 
#include<stdlib.h> //as system function is in the standard library

#define LIMPA_TELA system("cls");

int main()        
    {
        system("color 1"); //here 1 represents the text color
        printf("This is blue\n\n");
        getch();
        
        LIMPA_TELA
        
        system("color C"); //here 1 represents the text color
        printf("This is red\n\n");
        getch();
        
        LIMPA_TELA
		
		system("color 5"); //here 1 represents the text color
        printf("This is purple\n\n");
        getch();
        
        LIMPA_TELA
		 
        system("color 7"); //here 1 represents the text color
        printf("This is white\n\n");
        getch();
        
        return 0;
    }
