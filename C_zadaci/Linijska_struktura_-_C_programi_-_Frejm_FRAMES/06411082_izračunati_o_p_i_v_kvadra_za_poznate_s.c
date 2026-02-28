/*
 * ZADATAK 06411082 - 06411082
 * Izračunati O, P i V kvadra (za poznate stranice a, b, c).
 * Kategorija: Linijska struktura - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/064c/06411082.htm
 */

#include <stdio.h>
int main()
{
int a,b,c,P,V,O;                // deklarisanje varijabli
printf("Ucitaj stranicu a: ");  // ime varijable cija vrijednost se ucitava
scanf("%d",&a);                 // ucitavanje vrijednosti varijable sa tastature
printf("Ucitaj stranicu b: ");  // ime varijable cija vrijednost se ucitava
scanf("%d",&b);                 // ucitavanje vrijednosti varijable sa tastature
printf("Ucitaj stranicu c: ");  // ime varijable cija vrijednost se ucitava
scanf("%d",&c);                 // ucitavanje vrijednosti varijable sa tastature

O=4*(a+b+c);                    // obim kvadra
P=2*(a*b+a*c+b*c);              // povšina kvadra
V=a*b*c;                        // zapremina kvadra

printf("Obim kvadra je %d\n",O);       //  ispis vrijednosti
printf("Povrsina kvadra je %d\n",P);   //  ispis vrijednosti
printf("Zapremina kvadra je %d\n",V);  //  ispis vrijednosti
return 0;
}

II varijanta
// 06411082
#include <stdio.h>
int main()
{
int a,b,c;                      // deklarisanje varijabli
printf("Ucitaj stranicu a: ");  // ime varijable cija vrijednost se ucitava
scanf("%d",&a);                 // ucitavanje vrijednosti varijable sa tastature
printf("Ucitaj stranicu b: ");  // ime varijable cija vrijednost se ucitava
scanf("%d",&b);                 // ucitavanje vrijednosti varijable sa tastature
printf("Ucitaj stranicu c: ");  // ime varijable cija vrijednost se ucitava
scanf("%d",&c);                 // ucitavanje vrijednosti varijable sa tastature

printf("Obim kvadra je %d\n", 4*(a+b+c));            //  ispis vrijednosti
printf("Povrsina kvadra je %d\n", 2*(a*b+a*c+b*c));  //  ispis vrijednosti
printf("Zapremina kvadra je %d\n", a*b*c);           //  ispis vrijednosti
return 0;
}