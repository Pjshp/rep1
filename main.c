#include <stdio.h>

void zadanie_1()
{
    float a, b, c, d, dodatnie=0, ujemne=0; /* zadeklarowanie zmiennych
    zmiennoprzecinkowych*/

    printf("Podaj 4 liczby:\n"); // wyswietlenie polecenia dla uzytkownika

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    scanf("%f", &d); // pobranie od uzytkownika wartosci zmiennych

    if (a>=0) // sprawdzenie, czy liczba a jest dodatnia
        dodatnie++; // jezeli to sie zgadza, to podnosimy wartosc dodatnich o 1
    else // w przeciwnym przypadku (a ujemne)
        ujemne++; // zwiekszamy wartosc ujemnych o 1

    if (b>=0) // reszta liczb dokladnie tak samo jak w przypadku a
        dodatnie++;
    else
        ujemne++;

    if (c>=0)
        dodatnie++;
    else
        ujemne++;

    if (d>=0)
        dodatnie++;
    else
        ujemne++;

    if (dodatnie>ujemne) // porownanie wartosci ujemnych i dodatnich
        printf("Wsrod podanych jest wiecej liczb dodatnich.");
    else if (ujemne>dodatnie)
        printf("Wsrod podanych jest wiecej liczb ujemnych.");
    else
        printf("Wsrod podanych jest tyle samo liczb dodatnich i ujemnych.");
    /*wypisanie informacji dla uzytkownika, ktora grupa jest wieksza*/
}
int main()
{
    zadanie_1();
    /*float a, b, c, d, dodatnie=0, ujemne=0; /* zadeklarowanie zmiennych
    zmiennoprzecinkowych*/

    /*printf("Podaj 4 liczby:\n"); // wyswietlenie polecenia dla uzytkownika

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    scanf("%f", &d); // pobranie od uzytkownika wartosci zmiennych

    if (a>=0) // sprawdzenie, czy liczba a jest dodatnia
        dodatnie++; // jezeli to sie zgadza, to podnosimy wartosc dodatnich o 1
    else // w przeciwnym przypadku (a ujemne)
        ujemne++; // zwiekszamy wartosc ujemnych o 1

    if (b>=0) // reszta liczb dokladnie tak samo jak w przypadku a
        dodatnie++;
    else
        ujemne++;

    if (c>=0)
        dodatnie++;
    else
        ujemne++;

    if (d>=0)
        dodatnie++;
    else
        ujemne++;

    if (dodatnie>ujemne) // porownanie wartosci ujemnych i dodatnich
        printf("Wsrod podanych jest wiecej liczb dodatnich.");
    else if (ujemne>dodatnie)
        printf("Wsrod podanych jest wiecej liczb ujemnych.");
    else
        printf("Wsrod podanych jest tyle samo liczb dodatnich i ujemnych.");
    /*wypisanie informacji dla uzytkownika, ktora grupa jest wieksza*/

    return 0;
}
