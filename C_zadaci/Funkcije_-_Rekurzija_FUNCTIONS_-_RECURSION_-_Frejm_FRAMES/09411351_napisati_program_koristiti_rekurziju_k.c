/*
 * ZADATAK 09411351 - 09411351
 * Napisati program, koristiti rekurziju, koji će za učitanu vrijednost n izračunati vrijednost izraza i ispisati:
 * Kategorija: Funkcije - Rekurzija /FUNCTIONS - RECURSION/ - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/094c/09411351.htm
 */

#include <stdio.h>

int suma_f(int n) {

if(n == 1) { // ponavljanje do granicne vrijednosti ulazne varijable?       return 1;  // kraj rekurzije
}
return fact(n) + suma_f(n -1);    // izracunavanje izlazna vrijednost funkcije
}

int fact(unsigned n) {

if(n == 1) {  // ponavljanje do granicne vrijednosti ulazne varijable?
return 1;  // kraj rekurzije
}
return n * fact(n -1);    // povratne vrijednost i poziv iste funkcije sa umanjenim n za 1
}

int main ()
{
printf("Suma prvih n brojeva . Rekurzija\n");
int broj, s;

printf("Broj: ");      // ulazne vrijednosti
scanf("%d",&broj);

s = suma_f(broj);      // poziv funkcije suma

printf("Suma brojeva od 1 do %d je %d", broj, s);     // ispis vrijednosti ulaznih i izlaznih varijabli

return 0;
}
Ispis na ekranu:
Suma prvih n brojeva . Rekurzija
Broj: 7
Suma brojeva od 1 do 7 je 5913