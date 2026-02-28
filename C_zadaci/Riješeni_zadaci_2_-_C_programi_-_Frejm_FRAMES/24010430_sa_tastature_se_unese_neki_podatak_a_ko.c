/*
 * ZADATAK 24010430 - 24010430
 * Sa tastature se unese neki podatak, a koji u zavisnosti od toga kakav je uneseni podatak ispisuje jedan od sljedećih pet komentara: Uneseni podatak je prirodan broj. Uneseni podatak je cijeli broj, ali nije prirodan. Uneseni podatak je realan broj, ali nije cijeli. Uneseni podatak je kompleksan broj, ali nije realan. Uneseni podatak nije broj. Obavezno testirajte sve navedene slučajeve.
 * Kategorija: Riješeni zadaci 2 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/240c/24010430.htm
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
double re,im=0;
int l=0;
char c;
printf("Unesite neki broj/znak:\n");
if(!scanf("%lf", &re))
{
l=1;
}
scanf("%c", &c);
if((c!='+' && c!='-' && c!='\0') || l==1)
printf("Unijeli ste ne-broj.");
else if(c=='+' || c=='-')
{
scanf("%lf", &im);
printf("Unijeli ste ");
printf("complexan broj.");
}
else if(re==(int)re)
{
printf("Unijeli ste ");
printf("realan broj.");
}
else if(re>0)
{
printf("Unijeli ste ");
printf("prirodan broj.");
}
else
{
printf("Unijeli ste ");
printf("cio broj.");
}

return 0;
}