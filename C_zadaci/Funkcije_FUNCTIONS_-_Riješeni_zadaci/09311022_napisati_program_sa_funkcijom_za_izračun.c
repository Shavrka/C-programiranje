/*
 * ZADATAK 1 - 09311022
 * Napisati program sa funkcijom za izračunavanje dvostruke vrijednosti učitanog cijelog broja.
 * Kategorija: Funkcije /FUNCTIONS/ - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/093c/09311022.htm
 */

#include <stdio.h>

int suma(int a) {    // definisanje funkcije dvostruke vrijednsoti broja
return a + a;    // dvostruka vrijenost broja - izlazna vrijednost funkcije
}

int main ()
{
printf("Dvostruka vrijednost broja\n");
int broj1;

printf("Broj: ");
scanf("%d",&broj1);

printf("%d + %d = %d ", broj1, broj1, suma(broj1));

return 0;
}

II varijanta  return a+a proracun u return naredbi
// 09311022
#include <stdio.h>

int suma(int a) {    // definisanje funkcije dvostruke vrijednsoti broja
return a + a;    // dvostruka vrijenost broja - izlazna vrijednost funkcije
}

int main ()
{
printf("Dvostruka vrijednost broja\n");
int broj1, s;

printf("Broj: ");          // ulazna vrijednost
scanf("%d",&broj1);        // ulaz

s = suma(broj1);           // poziv funkcije

printf("%d + %d = %d ", broj1, broj1, s);

return 0;
}

III varijanta   posebna varijabla za proracun u funkciji
// 09311022
#include <stdio.h>

int suma(int a) {
int suma;
suma = a + a;   // dvostruka vrijenost broja
return suma;    // izlazna vrijednost funkcije
}

int main ()
{
printf("Dvostruka vrijednost broja\n");
int broj1, s;

printf("Broj: ");
scanf("%d",&broj1);

s = suma(broj1);

printf("%d + %d = %d ", broj1, broj1, s);

return 0;
}