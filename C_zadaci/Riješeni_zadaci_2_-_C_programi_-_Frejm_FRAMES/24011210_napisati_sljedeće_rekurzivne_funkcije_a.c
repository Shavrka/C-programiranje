/*
 * ZADATAK 24011210 - 24011210
 * Napisati sljedeće rekurzivne funkcije: a. “SumaKubova“; b.Funkciju “SumaCifara“; c.Funkciju “Stepen“; d.Funkciju “NZD“ ...
 * Kategorija: Riješeni zadaci 2 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/240c/24011210.htm
 */

#include <stdio.h>
#include <stdlib.h>

int SumaKubova(int n)
{
if(n==1)
return 1;
return n*n*n+SumaKubova(n-1);
}
int SumaCifara(int n)
{
if(n/10)
return n%10+SumaCifara(n/10);
return n%10;
}
double Stepen(double x,int n)
{
if(x==0)
return 0;
if(n==0)
return 1;
if(n < 0)
return (1/x)*Stepen(1/x,-n-1);
else
return x*Stepen(x,n-1);
}
int NZD(int a,int b)
{
if((a%b)==0)
return b;
return NZD(b,(a%b));
}
int main()
{
int n1,n2;
double x;
printf("Unesite broj iz N za koji zelite sumu kubova od 1 do tog broja(ukljucivo), kao i zbir nj cifara:\n");
scanf("%d", &n1);
printf("%d, %d", SumaKubova(n1), SumaCifara(n1));
printf("\nUnesite odgovarajuci eksponent iz Z i broj iz R i dobicete nj stepen...:\n");
scanf("%d", &n2);
scanf("%lf", &x);
printf("%lf",Stepen(x,n2));
printf("\nUnesite dva broja iz Z i dobicete njihov NZD:\n");
scanf("%d", &n1);
scanf("%d", &n2);
printf("%d", NZD(n1,n2));
return 0;
}