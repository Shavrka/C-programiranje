/*
 * ZADATAK 09411012 - 09411012
 * Napisati rekurzivnu funkciju za izračunavanje sume prvih 5 brojeva.
 * Kategorija: Funkcije - Rekurzija /FUNCTIONS - RECURSION/ - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/094c/09411012.htm
 */

#include <stdio.h>

int suma(int n) {
if(n <= 1)      // ponavljanje dok n ne postane 1?
return 1;   // izlazak iz rekurzije
return n + suma(n-1);    // povratne vrijednost i poziv iste funkcije sa umanjenim n za 1
}

int main (){
printf("Suma prvih 5 brojeva . Rekurzija\n");
int s;

s = suma(5);      // poziv funkcije suma

printf("Suma brojeva od 1 do 5 = %d", s);     // ispis vrijednosti ulaznih i izlaznih varijabli
return 0;
}

Ispis na ekranu:
Suma prvih 5 brojeva . Rekurzija
Suma brojeva od 1 do 5 = 15