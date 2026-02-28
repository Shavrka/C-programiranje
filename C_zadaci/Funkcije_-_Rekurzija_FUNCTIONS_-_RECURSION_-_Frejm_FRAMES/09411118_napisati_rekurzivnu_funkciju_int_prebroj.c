/*
 * ZADATAK 09411118 - 09411118
 * Napisati rekurzivnu funkciju int prebroj_cifre(int n) koja računa broj cifara datog cijelog broja n.
 * Kategorija: Funkcije - Rekurzija /FUNCTIONS - RECURSION/ - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/094c/09411118.htm
 */

#include <stdio.h>

int prebroj_cifre(int n) {
if(n < 10)  return 1;       // posljednja cifra broja? kraj rekurzije
return 1 + prebroj_cifre(n / 10);   // brojac uvecaj za 1, podijeli n sa 10 i pozovi istu funkciju
}

int main () {
printf("Prebroj cifre datog broja - Rekurzija\n");
int broj_n, br;

printf("Dati broj: ");      // ulazne vrijednosti
scanf("%d", &broj_n);

br = prebroj_cifre(broj_n);      // poziv funkcije suma

printf("Broj %d ima %d cifara", broj_n, br);
return 0;
}

Ispis na ekranu:
Prebroj cifre datog broja - Rekurzija
Dati broj: 230456
Broj 234056 ima 6 cifara