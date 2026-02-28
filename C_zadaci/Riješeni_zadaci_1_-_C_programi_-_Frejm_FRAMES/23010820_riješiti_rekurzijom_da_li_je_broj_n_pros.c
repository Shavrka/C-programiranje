/*
 * ZADATAK 23010820 - 23010820
 * Riješiti rekurzijom da li je broj n prost ili složen.
 * Kategorija: Riješeni zadaci 1 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/230c/23010820.htm
 */

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool prost_broj(int n, int djel){  // broj i djeljitelj
if (djel==1) return true;       // nema djeljitelja, prost broj
else if (n%djel==0) return false;        // slozen broj
else return prost_broj(n, djel-1);  // sliljedeci djeljitelj za provjeru
}

int main ()  {
printf("Prost broj\n");
int broj_a, korijen;
bool prost = true;

printf("Broj: ");    // ulazne vrijednosti
scanf("%d", &broj_a);

korijen = sqrt(broj_a);   // provjera djeliocaa od korijena broja

printf("Broj %d je ", broj_a);
if (prost_broj(broj_a, korijen)) printf("prost broj");
else printf("slozen broj ");   // ispis

return 0;
}

Ispis na ekranu:
Prost broj
Broj: 7
Broj 7 je prost broj

II izvršavanje
Prost broj
Broj: 6
Broj 6 je slozen broj