/*
 * ZADATAK 24010220 - 24010220
 * Napisati program koji traži da se sa tastature unese brzina broda u čvorovima koja se zadaje isključivo kao cijeli broj (obavezno koristiti promjenljivu tipa int), a zatim izračunava i ispisuje brzinu broda u km/h kao decimalan broj. Koristiti činjenicu da je čvor morska milja na sat, a da je jedna morska milja 1852 m (ovaj podatak obavezno definirati u programu kao konstantu). Na primjer, ukoliko se kao brzina broda unese broj 20, program treba da ispiše rezultat 38.87689 jer je 20 čvorova = 38.87689 km/h.
 * Kategorija: Riješeni zadaci 2 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/240c/24010220.htm
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
int v;
const int c=1852;
scanf("%d", &v);
printf("Brzina u cvorovima:%d\n", v);
printf("Brzina u km/h:%lf", v*((double)c/1000));
return 0;
}