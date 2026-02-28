/*
 * ZADATAK 09411352 - 09411352
 * Napisati rekurzivnu funkciju koja izračunava vrijednost binomnog koeficijenta :
 * Kategorija: Funkcije - Rekurzija /FUNCTIONS - RECURSION/ - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/094c/09411352.htm
 */

#include <stdio.h>

int binom(int n, int k){
if (k == 0)   return 1;      // posljednji k
else if (n == 0)  return 0;  // posljednje n
else
return binom(n-1, k-1) + binom(n-1, k);  // sabiranje prethodna dva iznad dobija se novi clan - Paskalov trougao
}

int main()
{
int broj_n, broj_k;
printf("Broj n: ");
scanf("%d", &broj_n);
printf("Broj k: ");
scanf("%d", &broj_k);
printf("Vrijednost binomnog koeficijenta (n nad k) je: %d\n", binom(broj_n, broj_k));
return 0;
}

Ispis na ekranu:
Broj n: 6
Broj k: 3
Vrijednost binomnog koeficijenta (n nad k) je: 20