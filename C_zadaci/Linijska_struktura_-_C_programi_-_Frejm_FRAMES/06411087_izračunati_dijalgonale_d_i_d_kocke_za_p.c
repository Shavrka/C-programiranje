/*
 * ZADATAK 06411087 - 06411087
 * Izračunati dijalgonale d i D kocke (za poznatu stranicu a).
 * Kategorija: Linijska struktura - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/064c/06411087.htm
 */

#include<stdio.h>
#include<math.h>
int main()
{
float a, d, D;                        // deklarisanje varijabli
printf("Ucitaj stranicu kocke a: ");  // ime varijable cija vrijednost se ucitava
scanf("%f",&a);                       // ucitavanje vrijednost varijable sa tastature
d = a * sqrt(2);                      // dijalgonala d stranice kocke
D = a * sqrt(3);                      // dijalgonala D kocke
printf("dijagonala d je %.1f\n",d);   // ispis vrijednosti
printf("dijagonala D je %.1f\n",D);   // ispis vrijednosti
return 0;
}

II varijanta
// 06411087
#include<stdio.h>
#include<math.h>
int main()
{
float a, d, D;                        // deklarisanje varijabli
printf("Ucitaj stranicu kocke a: ");  // ime varijable cija vrijednost se ucitava
scanf("%f",&a);                       // ucitavanje vrijednost varijable sa tastature
d = a * pow(2, 0.5);                  // dijalgonala d kocke
D = a * pow(3, 0.5);                  // dijalgonala D kocke
printf("dijagonala d je %.1f\n",d);   // ispis vrijednosti
printf("dijagonala D je %.1f\n",D);   // ispis vrijednosti
return 0;
}

III varijanta
// 06411087
#include<stdio.h>
#include<math.h>
int main()
{
float a;                              // deklarisanje varijable
printf("Ucitaj stranicu kocke a: ");  // ime varijable cija vrijednost se ucitava
scanf("%f",&a);                       // ucitavanje vrijednost varijable sa tastature
printf("dijagonala d je %.1f\n", a * sqrt(2));  // ispis vrijednosti
printf("dijagonala D je %.1f\n", a * sqrt(3));  // ispis vrijednosti
return 0;
}