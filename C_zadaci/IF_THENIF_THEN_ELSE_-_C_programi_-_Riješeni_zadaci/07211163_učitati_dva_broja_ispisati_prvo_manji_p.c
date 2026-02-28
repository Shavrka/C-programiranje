/*
 * ZADATAK 4_01 - 07211163
 * Učitati dva broja. Ispisati prvo manji pa veći broj.
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072C/07211163.htm
 */

#include <stdio.h>
int main ()
{
printf("Ispisi manji pa veci\n");     // naslov
int a, b;

printf("1. broj: ");     // ulaz
scanf("%d", &a);
printf("2. broj: ");
scanf("%d", &b);

if(a < b)           // prvi manji od drugog?
printf("Manji %d \tveci %d", a, b);  // prvi manji od drugog
else
printf("Manji %d \tveci %d", b, a);  // drugi manji od prvog