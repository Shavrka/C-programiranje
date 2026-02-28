/*
 * ZADATAK 52 - 06411091
 * Izračunati dijagonale d i D kvadra (za poznate stranice a, b, c).
 * Kategorija: Linijska struktura - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org//knjige/computer/c/v/064c/06411091.htm
 */

#include <stdio.h>
#include <math.h>
int main()
{
int a, b, c;                   // deklarisanje varijabli
float d1, d2, d3, D;           // deklarisanje varijabli

printf("Ucitaj stranicu a: "); // ime varijable cija vrijednost se ucitava
scanf("%d",&a);                // ucitavanje vrijednosti varijable sa tastature
printf("Ucitaj stranicu b: "); // ime varijable cija vrijednost se ucitava
scanf("%d",&b);                // ucitavanje vrijednosti varijable sa tastature
printf("Ucitaj stranicu c: "); // ime varijable cija vrijednost se ucitava
scanf("%d",&c);                // ucitavanje vrijednosti varijable sa tastature

D=sqrt(a*a+b*b+c*c);           // dijagonala kvadra
d1=sqrt(a*a+b*b);              // dijagonala koju obrazuju stranice a i b je = d1
d2=sqrt(a*a+c*c);              // dijagonala koju obrazuju stranice a i c je = d2
d3=sqrt(b*b+c*c);              // dijagonala koju obrazuju stranice b i c je = d3

printf("velika dijagonala je %.2f\n",D);  // ispis vrijednosti
printf("dijagonala koju obrazuju stranica a i b je %.2f\n",d1);  // ispis vrijednosti d1
printf("dijagonala koju obrazuju stranica a i c je %.2f\n",d2);  // ispis vrijednosti d2
printf("dijagonala koju obrazuju stranica b i c je %.2f\n",d3);  // ispis vrijednosti d3

return 0;
}

II varijanta
// 06411091
#include <stdio.h>
#include <math.h>
int main()
{
int a, b, c;                   // deklarisanje varijabli
float d1, d2, d3, D;           // deklarisanje varijabli

printf("Ucitaj stranicu a: "); // ime varijable cija vrijednost se ucitava
scanf("%d",&a);                // ucitavanje vrijednosti varijable sa tastature
printf("Ucitaj stranicu b: "); // ime varijable cija vrijednost se ucitava
scanf("%d",&b);                // ucitavanje vrijednosti varijable sa tastature
printf("Ucitaj stranicu c: "); // ime varijable cija vrijednost se ucitava
scanf("%d",&c);                // ucitavanje vrijednosti varijable sa tastature

D=pow((a*a+b*b+c*c), 0.5);      // dijagonala kvadra
d1=pow((a*a+b*b), 0.5);         // dijagonala koju obrazuju stranice a i b je = d1
d2=pow((a*a+c*c), 0.5);         // dijagonala koju obrazuju stranice a i c je = d2
d3=pow((b*b+c*c), 0.5);         // dijagonala koju obrazuju stranice b i c je = d3

printf("velika dijagonala je %.2f\n",D);  // ispis vrijednosti
printf("dijagonala koju obrazuju stranica a i b je %.2f\n",d1);  // ispis vrijednosti d1
printf("dijagonala koju obrazuju stranica a i c je %.2f\n",d2);  // ispis vrijednosti d2
printf("dijagonala koju obrazuju stranica b i c je %.2f\n",d3);  // ispis vrijednosti d3

return 0;
}

III varijanta
#include <stdio.h>
#include <math.h>
int main()
{
int a, b, c;                   // deklarisanje varijabli
float d1, d2, d3, D;           // deklarisanje varijabli

printf("Ucitaj stranicu a: "); // ime varijable cija vrijednost se ucitava
scanf("%d",&a);                // ucitavanje vrijednosti varijable sa tastature
printf("Ucitaj stranicu b: "); // ime varijable cija vrijednost se ucitava
scanf("%d",&b);                // ucitavanje vrijednosti varijable sa tastature
printf("Ucitaj stranicu c: "); // ime varijable cija vrijednost se ucitava
scanf("%d",&c);                // ucitavanje vrijednosti varijable sa tastature

printf("velika dijagonala je %.2f\n", sqrt(a*a+b*b+c*c));  // ispis vrijednosti
printf("dijagonala koju obrazuju stranica a i b je %.2f\n", sqrt(a*a+b*b));  // ispis vrijednosti d1
printf("dijagonala koju obrazuju stranica a i c je %.2f\n", sqrt(a*a+c*c));  // ispis vrijednosti d2
printf("dijagonala koju obrazuju stranica b i c je %.2f\n", sqrt(b*b+c*c));  // ispis vrijednosti d3

return 0;
}