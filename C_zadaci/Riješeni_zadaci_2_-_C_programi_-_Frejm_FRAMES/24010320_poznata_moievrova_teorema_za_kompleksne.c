/*
 * ZADATAK 24010320 - 24010320
 * Poznata Moievrova teorema za kompleksne brojeve tvrdi da je za ma kakve realne brojeve x i nZa realne brojeve x i n unesene sa tastature izračunati lijevu i desnu stranu ovog izraza i ispisati ih na ekranu. Na nekoliko primjera provjeriti da li se zaista dobijaju jednake vrijednosti.
 * Kategorija: Riješeni zadaci 2 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/240c/24010320.htm
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
double x,n;
scanf("%lf", &x);
scanf("%lf", &n);
double complex z=cos(x)+sin(x)*I;
double complex z1=cos(n*x)+sin(n*x)*I;
double complex st=cpow(z,n);
printf("%lf+%lfi = %lf+%lfi", crealf(st), cimagf(st), crealf(z1), cimagf(z1));
return 0;
}