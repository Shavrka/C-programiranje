/*
 * ZADATAK 24010410 - 24010410
 * Sa tastature se unese koeficijente a, b i c za dva pravca sa jednačinama oblika a x + b y + c = 0 (dakle, ukupno 6 koeficijenata), a koji zatim računa i ispisuje x i y koordinate presječne tačke.
 * Kategorija: Riješeni zadaci 2 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/240c/24010410.htm
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
double a1,b1,c1,a2,b2,c2;
printf("unesite koeficijente j-na dviju pravih:\n");
scanf("%lf", &a1);
scanf("%lf", &b1);
scanf("%lf", &c1);
scanf("%lf", &a2);
scanf("%lf", &b2);
scanf("%lf", &c2);
printf("Prave %.2lfx+%.2lfy+%.2lf=0 i %.2lfx+%.2lfy+%.2lf=0 gdje su x i y promjenljive\n", a1, b1, c1, a2, b2, c2);
if(a1*b2-a2*b1)
printf(" se sijeku u tacki (%.2lf, %.2lf)", (b1*c2-c1*b2)/(a1*b2-a2*b1),(a2*c1-a1*c2)/(a1*b2-a2*b1));
else
printf(" su paralelne.");
return 0;
}