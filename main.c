//
//  main.c
//  sztos
//
//  Created by Maciej Drozdowicz on 20/11/2017.
//  Copyright © 2017 Maciej Drozdowicz. All rights reserved.
// stos - odkladam na gore - zdejmuje z gory

#include <stdio.h>
int k,l;
int wybor;
int elem;
int i,stos;
int stos=0;

int main(int argc, const char * argv[]) {
    printf("Podaj wielkosc stosu: ");
    scanf("%i",&k);
    int tab[k];
       do
    {
        printf("1.odloz na stos\n2.zdejmij\n3.wyswietl\n4.zakoncz\nPodaj: ");
        scanf("%i",&wybor);
        
        switch (wybor) {
            case 1:
                printf("Podaj element: ");
                scanf("%i",&elem);
                tab[k-1-stos]=elem;  // <--- tu na dole mam nowy element
                stos++;
                break;
                
            case 2:
                stos--;
                break;
                
            case 3:
                for(l = 0; l<stos; l++)
                {
                    printf("%i",tab[k-1-l]);
                    printf("\n\n");
                }
                break;
                
            
        }
        
    }
    while(wybor!=4);
    
    return 0;
}
