/*
 * ZADATAK 230_13 - 23010130
 * Učitati 3 realna broja i ispitati da li postoji trougao čije su to stranice. Ako postoji da li je: raznostraničan, jednakokraki ili jednakostraničan?
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/230c/23010130.htm
 */

#include <stdio.h>

int main()
{
float a, b, c;

printf("Ucitati stranice trougla \n");

printf("Prva stranica trougla: ");
scanf("%f",&a);
while (a <= 0) {
printf("Stranica mora biti pozitivana. Ponovi unos: ");
scanf("%f",&a);
}

printf("Druga stranica trougla: ");
scanf("%f",&b);
while (b <= 0) {
printf("Stranica mora biti pozitivana. Ponovi unos: ");
scanf("%f",&b);
}

printf("Treca stranica trougla: ");
scanf("%f",&c);
while (c <= 0) {
printf("Stranica mora biti pozitivana. Ponovi unos: ");
scanf("%f",&c);
}

if (a + b > c && a + c > b && b + c > a){
printf("Postoji trougao sa datim stranicama \n");
if (a==b && b==c)
printf("i on je jednakostranicni.");
else if (a!=b && b!=c && c!=a)
printf("i on je raznostranicni.");
else
printf("i on je jednakokraki.");
}
else
printf("Ne postoji trougao sa datim stranicama.");

return 0;
}