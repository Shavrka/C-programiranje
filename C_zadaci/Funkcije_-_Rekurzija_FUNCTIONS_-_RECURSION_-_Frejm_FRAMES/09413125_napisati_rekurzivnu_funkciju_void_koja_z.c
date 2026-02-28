/*
 * ZADATAK 09413125 - 09413125
 * Napisati rekurzivnu funkciju void koja za dato n iscrtava trougao dimenzije n x n. Napr za n=7:
 * Kategorija: Funkcije - Rekurzija /FUNCTIONS - RECURSION/ - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/094c/09413125.htm
 */

#include <stdio.h>

void ispisi_red(int j)  {    // ispis reda
if (j == 0)  return;     // kraj reda
ispisi_red(j - 1);       // rekurzija do provog znaka u redu
printf("%d", j);         // ispis znak
}

void novi_red(int n, int i) { // brojac broja znakova u redu
if (n == 0)   return;     // kraj?
ispisi_red(i);            // ispis reda
printf("\n");             // prelazak u novi red
novi_red(n - 1, i + 1);   // rekurzivni poziv slijedeci red
}

int main () {
printf("Trougao. Rekurzija\n");
int broj;

printf("Broj redova: ");      // ulazne vrijednosti
scanf("%d",&broj);

novi_red(broj, 1);      // { // broj redova i prvi 5red
return 0;
}