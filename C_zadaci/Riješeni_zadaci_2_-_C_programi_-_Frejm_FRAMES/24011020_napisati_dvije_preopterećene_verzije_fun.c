/*
 * ZADATAK 24011020 - 24011020
 * Napisati dvije preopterećene verzije funkcije “pretvorba” koje pretvaraju radijane u stepene. Prva verzija prihvata dva realna parametra “alfa“ i “stepeni”, dok druga verzija prihvata četiri parametra nazvana “alfa”, “stepeni”, “minute“ i “sekunde”, od kojih je prvi realan a ostali cjelobrojni.
 * Kategorija: Riješeni zadaci 2 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/240c/24011020.htm
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
double alfa,stepen;
int st,m,s;
scanf("%lf", &alfa);
pretvorba1(alfa,&stepen);
pretvorba2(alfa,&st,&m,&s);
printf("%.2lf", stepen);
printf("%d %d %d", st, m , s);
return 0;
}