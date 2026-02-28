/*
 * ZADATAK 09411019 - 09411019
 * Napisati rekurzivnu funkciju za izračunavanje sume kubova prvih n brojeva.
 * Kategorija: Funkcije - Rekurzija /FUNCTIONS - RECURSION/ - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/094c/09411019.htm
 */

#include <stdio.h>

int suma(int n) {
if(n == 1)     // ponavljanje do granicne vrijednosti ulazne varijable?
return 1;  // kraj rekurzije
return n*n*n  + suma(n -1);    // povratne vrijednost i poziv iste funkcije sa umanjenim n za 1
}

int main () {
printf("Suma kubova prvih n brojeva . Rekurzija\n");
int broj_n, s;

printf("Broj: ");      // ulazne vrijednosti
scanf("%d",&broj_n);

s = suma(broj_n);       // poziv funkcije suma

printf("Suma kubova brojeva od 1 do %d je %d", broj_n, s);     // ispis vrijednosti ulaznih i izlaznih varijabli
return 0;
}

Ispis na ekranu:
Suma kubova prvih n brojeva . Rekurzija
Broj: 3
Suma kubova brojeva od 1 do 3 je 36