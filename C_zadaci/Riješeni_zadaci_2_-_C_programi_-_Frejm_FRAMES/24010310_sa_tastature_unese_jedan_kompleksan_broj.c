/*
 * ZADATAK 24010310 - 24010310
 * Sa tastature unese jedan kompleksan broj z i dva realna broja x i y, a koji zatim računa i ispisuje vrijednost izraza (1).
 * Kategorija: Riješeni zadaci 2 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/240c/24010310.htm
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
float real, img,x,y;
printf("Realni dio kompl. broja:");
scanf("%f", ℜ);
printf("Imaginarni dio kompl. broja:");
scanf("%f", &img);
float complex z1=real+img*I;
printf("x, y:");
scanf("%f", &x);
scanf("%f", &y);
float complex z2=x+y*I;
float complex z3=x-y*I;
float complex z4=pow(x+((z1*z1*z2)/z3),3);
printf("%.2f %+.2fi", creal(z4), cimag(z4));
return 0;
}