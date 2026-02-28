/*
 * ZADATAK 09411017 - 09411017
 * Napisati rekurzivnu funkciju za izračunavanje izračunavanje n-tog stepena broja.
 * Kategorija: Funkcije - Rekurzija /FUNCTIONS - RECURSION/ - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/094c/09411017.htm
 */

#include <stdio.h>

int stepen(int broj, int n) {
if(n == 0)      // ponavljanje do granicne vrijednosti ulazne varijable?
return 1;   // kraj rekurzije
return broj * stepen(broj, n -1);    //  povratne vrijednost i poziv iste funkcije sa umanjenim n za 1
}

int main () {
printf("Stepen broja na n - Rekurzija\n");
int broj_n, eksp;

printf("Broj: ");      // broj
scanf("%d",&broj_n);
printf("Exponent: ");      // exponent  (broj na n)
scanf("%d",&eksp);

printf("Stepen broja: %d na %d = %d", broj_n, eksp, stepen(broj_n, eksp));     // ispis vrijednosti ulaznih i izlaznih varijabli
return 0;
}

Ispis na ekranu:
Stepen broja na n - Rekurzija
Broj: 2
Exponent: 10
Stepen broja: 2 na 10 = 1024