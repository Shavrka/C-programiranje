/*
 * ZADATAK 09411015 - 09411015
 * Napisati rekurzivnu funkciju za izračunavanje sume prvih n brojeva.
 * Kategorija: Funkcije - Rekurzija /FUNCTIONS - RECURSION/ - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/094c/09411015.htm
 */

#include <stdio.h>

int suma(int n) {
if(n == 1)     // ponavljanje do granicne vrijednosti ulazne varijable?
return 1;  // kraj rekurzije
return n + suma(n -1);    // povratne vrijednost i poziv iste funkcije sa umanjenim n za 1
}

int main () {
printf("Suma prvih n brojeva . Rekurzija\n");
int broj, s;

printf("Broj: ");      // ulazne vrijednosti
scanf("%d",&broj);

s = suma(broj);       // poziv funkcije suma

printf("Suma brojeva od 1 do %d je %d", broj, s);     // ispis vrijednosti ulaznih i izlaznih varijabli
return 0;
}

Ispis na ekranu:
Suma prvih n brojeva . Rekurzija
Broj: 7
Suma brojeva od 1 do 7 je 28