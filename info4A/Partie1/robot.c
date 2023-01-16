#include "robot.h"
#include <stdio.h>
#include <stdlib.h>

int XA=4;           
int YA=1; 


void afficheBord()
{
    for(int i=0; i<=MAX_X+1; i++)
    {
        printf("+");
    }
    printf("\n");
}

void afficheLigne(int pos, char c)
{
	for(int i=0; i<=MAX_X; i++)
	{
		if(i==pos) printf("%c",c);
		else printf(" ");
	}
	printf("+\n");
}
/*
	d'abord tester le d'afficher les ligne 0 et MAX_X
	inspiré de afficheLigne
	modifier le affichebord
*/
void affiche()
{
	afficheBord();
	for(int i=0; i<MAX_Y; i++)
	{
		for(int j=0; j<=MAX_X+1; j++)
		{
			if(j==0 || j==MAX_X+1)
			{
				printf("+");
			}
			else if(i==YA && j==XA)
			{
				printf("X");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	afficheBord();
}

void pause()
{
    system("sleep 1");
    system("clear");
}

void demo()
{
    system("clear");  
    affiche(); 
    for(int i=0; i<50; i++)
    {
        pause();
        randomStepA();
		affiche();
    }
}

void randomStepA()
{
	int direction = (rand() % (1 + 1 -(-1))) - 1; 
}