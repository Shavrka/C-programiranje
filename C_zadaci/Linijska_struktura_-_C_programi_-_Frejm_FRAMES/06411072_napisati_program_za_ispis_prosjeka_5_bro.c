/*
 * ZADATAK 06411072 - 06411072
 * Napisati program za ispis prosjeka 5 brojeva.
 * Kategorija: Linijska struktura - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/064c/06411072.htm
 */

#include<stdio.h>
int main()
{
int a1,a2,a3,a4,a5;
float asred;
printf("Prvi broj: ");     // ime varijable cija vrijednost se ucitava
scanf("%d",&a1);           // ucitavanje vrijednosti varijable sa tastature
printf("Drugi broj: ");    // ime varijable cija vrijednost se ucitava
scanf("%d",&a2);           // ucitavanje vrijednosti varijable sa tastature
printf("Treci broj: ");    // ime varijable cija vrijednost se ucitava
scanf("%d",&a3);           // ucitavanje vrijednosti varijable sa tastature
printf("Cetvrti broj: ");  // ime varijable cija vrijednost se ucitava
scanf("%d",&a4);           // ucitavanje vrijednosti varijable sa tastature
printf("Peti broj:");      // ime varijable cija vrijednost se ucitava
scanf("%d",&a5);           // ucitavanje vrijednosti varijable sa tastature

asred = (a1+a2+a3+a4+a5)/5.;     // prosjecna vrijednost
printf("prosjek= %.1f", asred);  // ispis vrijednosti
return 0;
}

II varijanta
// 06411072
#include<stdio.h>
int main()
{
int a1,a2,a3,a4,a5;
printf("Prvi broj: ");     // ime varijable cija vrijednost se ucitava
scanf("%d",&a1);           // ucitavanje vrijednosti varijable sa tastature
printf("Drugi broj: ");    // ime varijable cija vrijednost se ucitava
scanf("%d",&a2);           // ucitavanje vrijednosti varijable sa tastature
printf("Treci broj: ");    // ime varijable cija vrijednost se ucitava
scanf("%d",&a3);           // ucitavanje vrijednosti varijable sa tastature
printf("Cetvrti broj: ");  // ime varijable cija vrijednost se ucitava
scanf("%d",&a4);           // ucitavanje vrijednosti varijable sa tastature
printf("Peti broj:");      // ime varijable cija vrijednost se ucitava
scanf("%d",&a5);           // ucitavanje vrijednosti varijable sa tastature

printf("prosjek= %.1f", (a1+a2+a3+a4+a5)/5.);  // ispis vrijednosti
return 0;
}