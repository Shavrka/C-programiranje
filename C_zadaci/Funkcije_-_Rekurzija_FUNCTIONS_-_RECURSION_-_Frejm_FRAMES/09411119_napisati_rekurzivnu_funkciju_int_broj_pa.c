/*
 * ZADATAK 09411119 - 09411119
 * Napisati rekurzivnu funkciju int broj_parnih(int n) koja računa broj parnih cifara datog cijelog broja n.
 * Kategorija: Funkcije - Rekurzija /FUNCTIONS - RECURSION/ - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/094c/09411119.htm
 */

#include <stdio.h>

int probroj_parne(int n) {
if(n == 0) {  // cio dio dijeljenja broja sa 10 = 0 ?
return 0;   // kraj dijeljenja - rekurzije
}

if((n % 10) % 2 == 0 )  return 1 + probroj_parne(n / 10);     // cifra broja parna? parna - uvecaj brojac
else   return probroj_parne(n / 10);   // bez uvecanja brojaca; podijeli n sa 10 i pozovi istu funkciju
}

int main ()  {
printf("Prebroj parne cifre datog broja - Rekurzija\n");
int broj_n, br;

printf("Dati broj: ");        // ulazne vrijednosti
scanf("%d", &broj_n);

br = probroj_parne(broj_n);   // poziv funkcije suma

printf("Broj %d ima %d parne cifre", broj_n, br);
return 0;
}

Ispis na ekranu:
Prebroj parne cifre datog broja - Rekurzija
Dati broj: 23456
Broj 23456 ima 3 parne cifre