#include"Wyszukiwanie.h"

/**Funkcja Menu do wyswietalnia danych rekordow przez uzytkownika
*@param *lista glowa listy
*@return funkcja nie zwraca ¿adnej wartosci*/
void find_menu_to_print(Album *lista)
{

    int wybor=0;
    int rok;
    int tab_id[dlugosc_listy(lista)];
    char data[20];
    for(int i=0;i<dlugosc_listy(lista);i++)
    {
        tab_id[i]=0;
    }
    do{
    puts("\nPo czym chcesz znalezc album?");
    puts("1 - ID");
    puts("2 - Imie i Nazwisko");
    puts("3 - Tytul");
    puts("4 - Gatunek");
    puts("5 - Rok");
    puts("6 - Stan");
    puts("7 - Przesluchany");
    puts("8 - WYJSCIE DO MENU GLOWNEGO");


    puts("Podaj wybor:");
    scanf("%d",&wybor);

    if(wybor<1 || wybor>9)
    {
        puts("\nPodano zla wartosc!!!");
        puts("");
    }
    }while(wybor<1 || wybor>9);

    if (wybor == 1)
    {
        int id=0;
        puts("\nPodaj id:");
        scanf("%d",&id);
        puts("");
        find_lines(&lista,data,1,id,tab_id);
    }
    if (wybor == 2)
    {
        puts("\nPodaj imie i nazwisko:");
        while(getchar()!='\n');
        scanf("%[^\n]s",data);
        puts("");
        find_lines(&lista,data,wybor,0,tab_id);
    }
     if (wybor == 3)
    {
        puts("\nPodaj tytul:");
        while(getchar()!='\n');
        scanf("%[^\n]s",data);
        puts("");
        find_lines(&lista,data,wybor,0,tab_id);
    }
    if (wybor == 4)
    {
        puts("\nPodaj gatunek:");
        while(getchar()!='\n');
        scanf("%[^\n]s",data);
        puts("");
        find_lines(&lista,data,wybor,0,tab_id);
    }
     if (wybor == 5)
    {
        puts("\nPodaj rok:");
        scanf("%d",&rok);
        puts("");
        find_lines(&lista,data,wybor,rok,tab_id);
    }
    if (wybor == 6)
    {
        puts("\nStan:");
        while(getchar()!='\n');
        scanf("%[^\n]s",data);
        puts("");
        find_lines(&lista,data,wybor,0,tab_id);
    }
     if (wybor == 7)
    {
        puts("\nPrzesluchany?");
        while(getchar()!='\n');
        scanf("%[^\n]s",data);
        puts("");
        find_lines(&lista,data,wybor,0,tab_id);
    }
     if (wybor == 8)
     {
         system("cls");
         while(1)
            break;
     }


}
