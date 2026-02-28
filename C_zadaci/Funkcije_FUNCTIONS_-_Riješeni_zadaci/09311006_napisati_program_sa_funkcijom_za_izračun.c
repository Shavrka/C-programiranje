/*
 * ZADATAK 2 - 09311006
 * Napisati program sa funkcijom za izračunavanje kvadrata broja.
 * Kategorija: Funkcije /FUNCTIONS/ - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/093c/09311006.htm
 */

#include <stdio.h>

int proizvod(int a) {   // definisanje funkcije kvadrat dva broja
return a * a;   // proizvod broja
}

int main ()
{
printf("Kvadrat broja\n");
int broj1, p;

printf("Broj: ");      // ulazna vrijednost
scanf("%d",&broj1);

p = proizvod(broj1);      // poziv funkcije proizvod

printf("%d * %d = %d ", broj1, broj1, p);     // ispis vrijednosti ulaznih i izlaznih varijabli

return 0;
}

II varijanta
// 09311006
#include <stdio.h>

int proizvod(int a) {   // definisanje funkcije kvadrat dva broja
int proizvod;

proizvod = a * a;   // proizvod broja

return proizvod;    // izlazna vrijednost funkcije
}

int main ()
{
printf("Kvadrat broja\n");
int broj1, p;

printf("Broj: ");      // ulazna vrijednost
scanf("%d",&broj1);

p = proizvod(broj1);      // poziv funkcije proizvod

printf("%d * %d = %d ", broj1, broj1, p);     // ispis vrijednosti ulaznih i izlaznih varijabli

return 0;
}