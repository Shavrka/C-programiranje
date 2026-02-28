/*
 * ZADATAK 24011620 - 24011620
 * Sa tastature se unosi dimenzija kvadratne matrice n, a zatim vrijednosti dvije matrice formata n x n. Program treba da ispiše zbir dvije unesene matrice.
 * Kategorija: Riješeni zadaci 2 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/240c/24011620.htm
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
int n;
scanf("%d", &n);
double **a=0,**b=0,**c=0;
kreirajmat(&a,n);
kreirajmat(&b,n);
unesimat(a,n);
unesimat(b,n);
c=saberimat(a,b,n);
ispisimat(c,n);
unistimat(&a,n);
unistimat(&b,n);
unistimat(&c,n);
return 0;
}