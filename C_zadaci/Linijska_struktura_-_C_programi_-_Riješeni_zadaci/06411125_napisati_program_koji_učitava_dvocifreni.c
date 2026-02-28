/*
 * ZADATAK 109 - 06411125
 * Napisati program koji učitava dvocifreni broj i ispisuje razliku prve i druge cifre.
 * Kategorija: Linijska struktura - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org//knjige/computer/c/v/064c/06411125.htm
 */

#include <stdio.h>

main()
{
int x,y,r,broj;
printf("unesi dvocifren broj:");
scanf("%d",&broj);

x = broj / 10;    // cifra desetica
y = broj % 10;    // cifra jedinica
r = x - y;        // razlika cifara desetica i jedinica

printf("Razlika prve i druge cifre je  %d",r);
getchar();
}