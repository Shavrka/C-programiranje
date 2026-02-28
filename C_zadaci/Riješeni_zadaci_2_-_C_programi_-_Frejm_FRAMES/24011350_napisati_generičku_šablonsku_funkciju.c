/*
 * ZADATAK 24011350 - 24011350
 * Napisati generičku (šablonsku) funkciju “UnosBroja“ sa tri parametra. Funkcija treba da omogući pouzdano unošenje brojeva u program, uz potpunu kontrolu grešaka pri unosu...
 * Kategorija: Riješeni zadaci 2 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/240c/24011350.htm
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
double prvibr,drugibr,trecibr,d;
unosbroja("unesi koef. uz najstariji clan razl. od 0: ","error!",&prvibr);
unosbroja("unesi koef. uz lin. clan: ","error!",&drugibr);
unosbroja("unesi slob. koef.: ","error!",&trecibr);
d=drugibr*drugibr-4*prvibr*trecibr;
if(d>=0)
printf("x1=%.2lf, x2= %.2lf",(-drugibr+sqrt(d))/(2*prvibr),(-drugibr-sqrt(d))/(2*prvibr));
else
{
double complex t=csqrt(d);
double complex x1=(-drugibr+t)/(2*prvibr);
double complex x2=(-drugibr-t)/(2*prvibr);
printf("x1=%.2lf+%.2lfi, x2= %.2lf+%.2lfi",creal(x1), cimagf(x1), crealf(x2), cimagf(x2));
}
return 0;
}