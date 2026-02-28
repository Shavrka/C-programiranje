/*
 * ZADATAK 24 - 09320031
 * Napisati program sa funkcijom za odredjivanje manjeg od 2 broja.
 * Kategorija: Funkcije /FUNCTIONS/ - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/093c/09320031.htm
 */

#include <stdio.h>
int min(int a, int b) {   // definisanje funkcije min - manji od dva
int min;
if (a < b)             // ako je prvi manji?
min = a;            // izlazna vrijednost funkcije - manji od dva broja
else                   // drugi manji
min = b;            // izlazna vrijednost funkcije - manji od dva broja
return min;
}

int main ()
{
printf("Manji od 2\n");
int a, b;                 // deklarisanje varijable
printf("Prvi broj: ");    // ulazne vrijednosti
scanf("%d",&a);           // prvi broj
printf("Drugi broj: ");
scanf("%d",&b);           // drugi broj

printf("Manji od %d i %d je %d ", a, b, min(a, b)); // ispis vrijednosti ulaznih i izlaznih varijabli

return 0;
}

II varijanta
// 09320031
#include <stdio.h>
int min(int a, int b) {   // definisanje funkcije min - manji od dva
if (a < b)             // ako je prvi manji?
return a;           // izlazna vrijednost funkcije - manji od dva broja
else                   // drugi manji
return b;           // izlazna vrijednost funkcije - manji od dva broja
}

int main ()
{
printf("Manji od 2\n");
int a, b;                 // deklarisanje varijable

printf("Prvi broj: ");    // ulazne vrijednosti
scanf("%d",&a);           // prvi broj
printf("Drugi broj: ");
scanf("%d",&b);           // drugi broj

printf("Manji od %d i %d je %d ", a, b, min(a, b)); // ispis vrijednosti ulaznih i izlaznih varijabli

return 0;
}