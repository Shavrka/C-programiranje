/*
 * ZADATAK 4 - 09311020
 * Napisati program sa funkcijom za izračunavanje sume dva cijela broja.
 * Kategorija: Funkcije /FUNCTIONS/ - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/093c/09311020.htm
 */

#include <stdio.h>

int suma(int a, int b) {  // definisanje funkcije suma dva broja
return a + b;         // suma dva broja
}

int main ()
{
printf("Suma dva broja\n");
int broj1, broj2, s;

printf("Prvi broj: ");      // ulazne vrijednosti
scanf("%d",&broj1);
printf("Drugi broj: ");
scanf("%d",&broj2);

s = suma(broj1, broj2);      // poziv funkcije suma

printf("%d + %d = %d ", broj1, broj2, s);     // ispis vrijednosti ulaznih i izlaznih varijabli

return 0;
}

II varijanta
// 09311020
#include <stdio.h>

int suma(int a, int b) {
int suma;

suma = a + b;   // suma dva broja

return suma;    // izlazna vrijednost funkcije
}

int main ()
{
printf("Suma dva broja\n");
int broj1, broj2, s;

printf("Prvi broj: ");      // ulazne vrijednosti
scanf("%d",&broj1);
printf("Drugi broj: ");
scanf("%d",&broj2);

s = suma(broj1, broj2);      // poziv funkcije suma

printf("%d + %d = %d ", broj1, broj2, s);     // ispis vrijednosti ulaznih i izlaznih varijabli

return 0;
}