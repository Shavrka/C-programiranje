/*
 * ZADATAK 09413122 - 09413122
 * Napisati program da ispisuje u prvom redu jedno ime a zatim u svakom narednom po jedno ime više.
 * Kategorija: Funkcije - Rekurzija /FUNCTIONS - RECURSION/ - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/094c/09413122.htm
 */

#include <stdio.h>

void ispisi_red(int n2)  {    // ispis reda
if (n2 == 0)  return;     // kraj reda
printf("IME ");             // ispis znak

ispisi_red(n2 - 1);       // rekurzija, ispsi slijedeci znak u redu
}

void novi_red(int n, int i) { // brojac broja znakova u redu
if (n == 0)   return;     // kraj?
ispisi_red(i);            // ispis reda
printf("\n");             // prelazak u novi red
novi_red(n - 1, i + 1);   // rekurzivni poziv slijedeci red
}

int main () {
printf("Ispis trougla. Rekurzija\n");
int broj;

printf("Broj: ");      // ulazne vrijednosti
scanf("%d",&broj);

novi_red(broj, 1);      // { // broj redova i prvi 5red
return 0;
}