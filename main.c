#include"Operacje_lista.h"
#include"Wczyt_Odczyt_lista.h"
#include"Edycja.h"
#include"Wyszukiwanie.h"
#include"Export_CSV.h"
#include"Sortowanie.h"

int main()
{
    Album* lista = NULL;
    int option;
    int choice;
    FILE *plik = fopen("album.txt","a+");
    do_programu(&lista);
    while(option != 0)
    {
        printf("\n Baza albumow muzycznych");
        printf("\n\n\n 0 Wyjscie z programu");
        printf("\n 1 Dodawanie");
        printf("\n 2 Usuwanie");
        printf("\n 3 Wyswietlanie");
        printf("\n 4 Edycja");
        printf("\n 5 Export do pliku csv");
        printf("\n 6 Sortowanie\n");

        scanf("%d", &option);

        switch(option)
           {
            case 1:
            system("cls");
            printf("DODAWANIE OSOBY\n\n");
            dodajOsobe(&lista);
            do_pliku(lista);
            break;

            case 2:
            system("cls");
            printf("USUWANIE OSOBY\n");
            usun_osobe(&lista);
            do_pliku(lista);
            break;

            case 3:
            system("cls");
            printf("WYSWIETLANIE\n");
            wypisz_liste(lista);
            puts("\n");
            if (lista != NULL)
            {
                puts("Chcesz wyszukac album? 1 - tak 0 - nie");
                scanf("%d",&choice);
                if (choice == 1)
                    find_menu_to_print(lista);
            }
            break;

            case 4:
            system("cls");
            printf("EDYCJA\n");
            find_menu(lista);
            do_pliku(lista);
            break;

            case 5:
            system("cls");
            printf("EXPORT DO PLIKU CSV\n");
            if(lista == NULL)
            {
                printf("\nLISTA JEST PUSTA\n");
            }else
            {
            char str[100];
            printf("\n Podaj nazwe pliku :");
            scanf("%s", str);
            Export_Csv(str,lista);
            }
            break;

            case 6:
            system("cls");
            printf("SORTOWANIE\n");
            sort_list(&lista);
            do_pliku(lista);
            break;

            default:
                puts("Podano zla wartosc");
            }
    }
    return 0;
}
