/*
 * ZADATAK 24010450 - 24010450
 * Sa tastature se unesu koeficijenti a, b i c kvadratne jednačine a x2+ b x + c = 0 a koji zatim računa i ispisuje njena rješenja. Program napraviti tako da se pri svakom unosu koeficijenta uvijek čitaju “svježi” podaci, bez obzira što je pri unosu prvog koeficijenta korisnik eventualno odmah unio tri podatka (uputa: koristite cin.ignore).
 * Kategorija: Riješeni zadaci 2 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/240c/24010450.htm
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
double a,b,c,d;
scanf("%lf", &a);
scanf("%lf", &b);
scanf("%lf", &c);
d=b*b-4*a*c;
if(a!=0)
{
if(d>=0)
printf("x1=%.2lf, x2=%.2lf",(-b+sqrt(d))/(2*a),(-b-sqrt(d))/(2*a));
else
{
double complex t=csqrt(d);
double complex x1=(-b+t)/(2*a);
double complex x2=(-b-t)/(2*a);
printf("x1=%.2lf+%.2lfi, x2=%.2lf+%.2lfi",crealf(x1), cimagf(x1), crealf(x2), cimagf(x2));
}
}
else if(b!=0)
printf("linearno rj.x=%.2lf", (-c)/b);
else if(c!=0)
printf("nema rj.");
else
printf("beskonacno rj.");
return 0;
}