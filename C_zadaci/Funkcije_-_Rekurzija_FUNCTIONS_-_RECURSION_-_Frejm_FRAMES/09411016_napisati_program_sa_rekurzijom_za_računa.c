/*
 * ZADATAK 09411016 - 09411016
 * Napisati program sa rekurzijom za računanje proizvoda (faktorijela) prvih n brojeva.
 * Kategorija: Funkcije - Rekurzija /FUNCTIONS - RECURSION/ - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/094c/09411016.htm
 */

#include <stdio.h>

int proizvod(unsigned n) {
if(n == 1)     // ponavljanje do granicne vrijednosti ulazne varijable?
return 1;  // kraj rekurzije
return n * proizvod(n -1);    //  povratne vrijednost i poziv iste funkcije sa umanjenim n za 1
}

int main ()  {
printf("Prozvod prvih n brojeva . Rekurzija\n");
int broj, p;

printf("Broj: ");      // ulazne vrijednosti
scanf("%d",&broj);

p = proizvod(broj);      // poziv funkcije proizvod

printf("Prozvod brojeva od 1 do %d je %d", broj, p);     // ispis vrijednosti ulaznih i izlaznih varijabli
return 0;
}

II Varijanta
int proizvod(unsigned n) {

if(n == 1) { // ponavljanje do granicne vrijednosti ulazne varijable?
return 1;  // kraj rekurzije
} else {
return n * proizvod(n -1);    // izracunavanje izlazna vrijednost i poziv iste funkcije - rekurzija
}
}

Ispis na ekranu:
Prozvod prvih n brojeva . Rekurzija
Broj: 6
Prozvod brojeva od 1 do 6 je 720