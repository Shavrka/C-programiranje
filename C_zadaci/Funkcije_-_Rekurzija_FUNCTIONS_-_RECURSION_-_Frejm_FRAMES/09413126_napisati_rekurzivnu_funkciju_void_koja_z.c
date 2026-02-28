/*
 * ZADATAK 09413126 - 09413126
 * Napisati rekurzivnu funkciju void koja za dato n iscrtava trougao dimenzije n x n. Napr za n=7:
 * Kategorija: Funkcije - Rekurzija /FUNCTIONS - RECURSION/ - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/094c/09413126.htm
 */

#include <stdio.h>

void ispis_prazno(int prazno) {  // f-ja ispis praznina prije znaka
if (prazno == 0)   return;   // kraj ispisa prazno
printf(" ");                // prazno
printf(" ");            // razmak

ispis_prazno(prazno - 1);    // slijedeci prazno; rekurzija
}

void ispis_znak(int znak) {      // f-ja ispis znaka
if (znak == 0)    return;    // kraj ispisa znakovi
printf("x "); // ispis x ?

ispis_znak(znak - 1);        // ispis znaka; rekurzija
}

void trougao(int n, int num) {   // upravljanje ispisom prznina i znaka
if (n == 0)
return;
ispis_prazno(n - 1);
ispis_znak(num - n + 1);
printf("\n");                // kursor u novi red

trougao(n - 1, num);         // upravljanjem ispisom; rekurzija
}

int main () {
printf("Trougao. Rekurzija\n");
int broj;

printf("Broj redova: ");      // ulazne vrijednosti
scanf("%d",&broj);

trougao(broj, broj);          // nacrtaj trouga n x n
return 0;
}