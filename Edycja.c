#include "Edycja.h"

/**Funkcja pomocnicza ktora wyszukuje wszystkie rekordy o podanych parametrach,
*wykorzystywana jest do wyswietlania oraz do wyszukiwania odpowiednich pol do edycji
*@param **top glowa listy
*@param *data ciag znaków np imie ,gatunek
*@param choice wybor po jakim polu funkcja ma wyszukaæ rekordy
*@param number zmienna obslugujaca np rok lub id
*@param *tab_id przechowuje id albumow znalezionych do edycji
*@return funkcja nie zwraca ¿adnej wartoœci lecz do wyswietlania znalezionych rekordow wykorzystuje funkcje print_line()
*/
void find_lines(Album **top,char *data,int choice,int number,int *tab_id)
{
    struct Album *tmp;
    int licznik_wsk=0;
    int licznik = 0;
    int dlugosc = 0;
    tmp = (*top);
    for (int i=0;i<dlugosc_listy(*top);i++)
    {
        tab_id[i] = 0;
    }
    if (choice == 1)
    {
        while(tmp!=NULL)
        {
            if (tmp->id == number)
            {
                print_line(tmp);
                puts("");
            }
            tmp = tmp->next;

        }
    }
    if (choice == 2)
    {
        while(tmp!=NULL)
        {
            if (strstr(tmp->imie_nazwisko,data)!=0)
            {
                dlugosc = dlugosc_listy((*top));
                licznik = dlugosc +1;
                print_line(tmp);
                puts("");
                tab_id[licznik_wsk]=tmp->id;
                licznik_wsk++;
            }
            tmp = tmp->next;
            licznik++;
            dlugosc = dlugosc_listy((*top));
                if (licznik == dlugosc)
                {
                    puts("Podales zla wartosc! Podaj jeszcze raz!");
                    while(getchar()!='\n');
                    scanf("%[^\n]s",data);
                    tmp = (*top);
                    licznik = 0;
                }

        }

    }
     if (choice == 3)
    {
        while(tmp!=NULL)
        {
            if (strstr(tmp->tytul,data)!=0)
            {
                dlugosc = dlugosc_listy((*top));
                licznik = dlugosc +1;
                print_line(tmp);
                puts("");
                tab_id[licznik_wsk]=tmp->id;
                licznik_wsk++;
            }
            tmp = tmp->next;
            licznik++;
            dlugosc = dlugosc_listy((*top));
                if (licznik == dlugosc)
                {
                    puts("Podales zla wartosc! Podaj jeszcze raz!");
                    while(getchar()!='\n');
                    scanf("%[^\n]s",data);
                    tmp = (*top);
                    licznik = 0;
                }

        }
    }
     if (choice == 4)
    {
        while(tmp!=NULL)
        {
            if (strstr(tmp->gatunek,data)!=0)
            {
                dlugosc = dlugosc_listy((*top));
                licznik = dlugosc +1;
                print_line(tmp);
                puts("");
                tab_id[licznik_wsk]=tmp->id;
                licznik_wsk++;
            }
            tmp = tmp->next;
            licznik++;
            dlugosc = dlugosc_listy((*top));
                if (licznik == dlugosc)
                {
                    puts("Podales zla wartosc! Podaj jeszcze raz!");
                    while(getchar()!='\n');
                    scanf("%[^\n]s",data);
                    tmp = (*top);
                    licznik = 0;
                }

        }
    }
     if (choice == 5)
    {
        while(tmp!=NULL)
        {
            if (tmp->rok == number)
            {
                dlugosc = dlugosc_listy((*top));
                licznik = dlugosc +1;
                print_line(tmp);
                puts("");
                tab_id[licznik_wsk]=tmp->id;
                licznik_wsk++;
            }
            tmp = tmp->next;
            licznik++;
            dlugosc = dlugosc_listy((*top));
                if (licznik == dlugosc)
                {
                    puts("Podales zla wartosc! Podaj jeszcze raz!");
                    scanf("%s",data);
                    tmp = (*top);
                    licznik = 0;
                }

        }
    }
     if (choice == 6)
    {
        while(tmp!=NULL)
        {
            if (strstr(tmp->stan,data)!=0)
            {
                dlugosc = dlugosc_listy((*top));
                licznik = dlugosc +1;
                print_line(tmp);
                puts("");
                tab_id[licznik_wsk]=tmp->id;
                licznik_wsk++;
            }
            tmp = tmp->next;
            licznik++;
            dlugosc = dlugosc_listy((*top));
                if (licznik == dlugosc)
                {
                    puts("Podales zla wartosc! Podaj jeszcze raz!");
                    while(getchar()!='\n');
                    scanf("%[^\n]s",data);
                    tmp = (*top);
                    licznik = 0;
                }

        }
    }
     if (choice == 7)
    {
        while(tmp!=NULL)
        {
            if (strstr(tmp->przesluchany,data)!=0)
            {
                dlugosc = dlugosc_listy((*top));
                licznik = dlugosc +1;
                print_line(tmp);
                puts("");
                tab_id[licznik_wsk]=tmp->id;
                licznik_wsk++;
            }
            tmp = tmp->next;
            licznik++;
            dlugosc = dlugosc_listy((*top));
                if (licznik == dlugosc)
                {
                    puts("Podales zla wartosc! Podaj jeszcze raz!");
                    while(getchar()!='\n');
                    scanf("%[^\n]s",data);
                    tmp = (*top);
                    licznik = 0;
                }
        }
    }


}
/**Funkcja pomocnicza sluzaca do wyswietlania rekordow o danym wskazniku
*@param top glowa listy
*@return funkcja nic nie zwraca
*/
void print_line(struct Album *top)
{
    struct Album *wsk;
    wsk = top;

    printf("ID: %d ",wsk->id);
    printf("Imie i Nazwisko: %s ",wsk->imie_nazwisko);
    printf("Tytul: %s ",wsk->tytul);
    printf("Gatunek: %s ",wsk->gatunek);
    printf("Rok: %d ",wsk->rok);
    printf("Stan: %s ",wsk->stan);
    printf("Przesluchany: %s \n",wsk->przesluchany);

}

/**Funkcja obslugujaca wybor albumu przez uzytkownika do edycji, jest wykorzystywana po tym jak program wyswietli
*kilka albumow do edytowania
*@param *top glowa listy
*@param id id wybranego albumu
*@return funkcja zwraca wskaznik na dany album
*/
int *which(struct Album *top,int id)
{
    struct Album *tmp;
    tmp = top;
    while(tmp)
    {
        if (tmp->id == id)
            return (int *) tmp;
        else
            tmp = tmp->next;
    }
    return 0;
}
/** Funkcja zliczajaca ilosc zapisanych id w tablicy tab_wsk potrzebnych do edycji
*@param *lista glowa listy
*@param *tab_wsk tablica zawierajaca id albumów spelniajacych wymagania wyszukiwania
*@return funkcja zwraca ilosc id zapisanych w tablicy
*/
int count_elements(struct Album *lista,int *tab_wsk)
{
    int count = 0;
    for (int i=0;i<dlugosc_listy(lista);i++)
    {
        if (tab_wsk[i] != 0)
        {
            count++;
        }
    }
    return count;
}
/** Funkcja sluzaca do wyszukiwania albumow do edycji przez uzytkownika
*@param *lista glowa listy
*@return funkcja nie zwraca zadnej wartosci lecz wywoluje funkcje interfejsu edycji edit_menu()
*/
void find_menu(Album *lista)
{
    int tab_wsk[dlugosc_listy(lista)];
    int wybor=0;
    char t;
    int identificator;
    char data[20];
    for(int i=0;i<dlugosc_listy(lista);i++)
    {
        tab_wsk[i]=0;
    }
    wypisz_liste(lista);
    if (lista == NULL)
    {
        return;
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
    puts("8 - POWROT DO MENU GLOWNEGO");


    puts("Podaj wybor:");
    scanf("%d",&wybor);
    if (wybor == 8 )
    {
        system("cls");
        while(8)
            break;
    }
    if(wybor<1 || wybor>8)
    {
        puts("\nPodano zla wartosc!!!");
        puts("");
    }
    }while(wybor<1 || wybor>8);

    if (wybor == 1)
    {
        struct Album *tmp;
        int id=0;
        puts("Podaj id:");
        scanf("%d",&id);
        tmp = (Album*)which(lista,id);
        print_line(tmp);
        while (tmp == NULL)
        {
            puts("Podana wartosc nie istnieje! Podaj jeszcze raz! Aby przerwac wpisz 0");
            scanf("%d",&id);
            tmp = (Album*)which(lista,id);
        }
        do
        {
            edit_menu(tmp,tab_wsk);
            puts("Chcesz edytowac dalej? (t=tak)");
            t=getch();
            print_line(tmp);
        }while(t == 't');



    }
    if (wybor == 2)
    {
        puts("Podaj imie i nazwisko:");
        while(getchar()!='\n');
        scanf("%[^\n]s",data);
        find_lines(&lista,data,2,0,tab_wsk);
        int how_many = count_elements(lista,tab_wsk);
        if (how_many == 1 )
        {
            struct Album *tmp2;
            tmp2 = lista;
            while (tmp2)
            {
                for (int j=0;j<dlugosc_listy(lista);j++)
                {
                    if (tmp2->id == tab_wsk[j])
                    {
                        do
                        {
                            edit_menu(tmp2,tab_wsk);
                            puts("Chcesz edytowac dalej? (t=tak)");
                            t=getch();
                            print_line(tmp2);
                        }while(t == 't');
                        break;
                    }
                }
                tmp2=tmp2->next;
            }
        }
        else
        {
            struct Album *tmp;
        puts("Podaj id albumu do edycji:");
        scanf("%d",&identificator);
        tmp = (Album*)which(lista,identificator);
        while (tmp == 0)
        {
            puts("Podales niepoprawne id!Podaj jeszcze raz");
            scanf("%d",&identificator);
            tmp = (Album*)which(lista,identificator);
        }
        int count = 0;
        while (count < dlugosc_listy(lista))
        {
            if (tab_wsk[count] == tmp->id)
            {
                do
                {
                    edit_menu(tmp,tab_wsk);
                    puts("Chcesz edytowac dalej? (t=tak)");
                    t=getch();
                    print_line(tmp);
                    }while(t == 't');
                break;
            }
            else
                count++;
            if (count == dlugosc_listy(lista))
            {
                    puts("Podales niepoprawne id!Podaj jeszcze raz");
                    scanf("%d",&identificator);
                    tmp = (Album*)which(lista,identificator);
                    count=0;
                    while (tmp == 0)
                    {
                        puts("Podales niepoprawne id!Podaj jeszcze raz");
                        scanf("%d",&identificator);
                        tmp = (Album*)which(lista,identificator);
                    }
            }
        }

        }

    }

     if (wybor == 3)
    {
        puts("Podaj tytul:");
        while(getchar()!='\n');
        scanf("%[^\n]s",data);
        find_lines(&lista,data,3,0,tab_wsk);
        int how_many = count_elements(lista,tab_wsk);
        if (how_many == 1 )
        {
            struct Album *tmp2;
            tmp2 = lista;
            while (tmp2)
            {
                for (int j=0;j<dlugosc_listy(lista);j++)
                {
                    if (tmp2->id == tab_wsk[j])
                    {
                        do
                        {
                            edit_menu(tmp2,tab_wsk);
                            puts("Chcesz edytowac dalej? (t=tak)");
                            t=getch();
                            print_line(tmp2);
                        }while(t == 't');
                        break;
                    }
                }
                tmp2=tmp2->next;
            }
        }
        else
        {
            struct Album *tmp;
        puts("Podaj id albumu do edycji:");
        scanf("%d",&identificator);
        tmp = (Album*)which(lista,identificator);
        while (tmp == 0)
        {
            puts("Podales niepoprawne id!Podaj jeszcze raz");
            scanf("%d",&identificator);
            tmp = (Album*)which(lista,identificator);
        }
        int count = 0;
        while (count < dlugosc_listy(lista))
        {
            if (tab_wsk[count] == tmp->id)
            {
                do
                {
                    edit_menu(tmp,tab_wsk);
                    puts("Chcesz edytowac dalej? (t=tak)");
                    t=getch();
                    print_line(tmp);
                }while(t == 't');
                break;
            }
            else
                count++;
            if (count == dlugosc_listy(lista))
            {
                    puts("Podales niepoprawne id!Podaj jeszcze raz");
                    scanf("%d",&identificator);
                    tmp = (Album*)which(lista,identificator);
                    count=0;
                    while (tmp == 0)
                    {
                        puts("Podales niepoprawne id!Podaj jeszcze raz");
                        scanf("%d",&identificator);
                        tmp = (Album*)which(lista,identificator);
                    }
            }
        }
        }

    }
    if (wybor == 4)
    {
        puts("Podaj gatunek:");
        while(getchar()!='\n');
        scanf("%[^\n]s",data);
        find_lines(&lista,data,4,0,tab_wsk);
        int how_many = count_elements(lista,tab_wsk);
        if (how_many == 1 )
        {
            struct Album *tmp2;
            tmp2 = lista;
            while (tmp2)
            {
                for (int j=0;j<dlugosc_listy(lista);j++)
                {
                    if (tmp2->id == tab_wsk[j])
                    {
                        do
                        {
                            edit_menu(tmp2,tab_wsk);
                            puts("Chcesz edytowac dalej? (t=tak)");
                            t=getch();
                            print_line(tmp2);
                        }while(t == 't');
                        break;
                    }
                }
                tmp2=tmp2->next;
            }
        }
        else
        {
           struct Album *tmp;
        puts("Podaj id albumu do edycji:");
        scanf("%d",&identificator);
        tmp = (Album*)which(lista,identificator);
        while (tmp == 0)
        {
            puts("Podales niepoprawne id!Podaj jeszcze raz");
            scanf("%d",&identificator);
            tmp = (Album*)which(lista,identificator);
        }
        int count = 0;
        while (count < dlugosc_listy(lista))
        {
            if (tab_wsk[count] == tmp->id)
            {
                do
                {
                    edit_menu(tmp,tab_wsk);
                    puts("Chcesz edytowac dalej? (t=tak)");
                    t=getch();
                    print_line(tmp);
                }while(t == 't');
                break;
            }
            else
                count++;
            if (count == dlugosc_listy(lista))
            {
                    puts("Podales niepoprawne id!Podaj jeszcze raz");
                    scanf("%d",&identificator);
                    tmp = (Album*)which(lista,identificator);
                    count=0;
                    while (tmp == 0)
                    {
                        puts("Podales niepoprawne id!Podaj jeszcze raz");
                        scanf("%d",&identificator);
                        tmp = (Album*)which(lista,identificator);
                    }
            }
        }
        }
    }
     if (wybor == 5)
    {
        puts("Podaj rok:");
        scanf("%d",&identificator);
        find_lines(&lista,data,5,identificator,tab_wsk);
        int how_many = count_elements(lista,tab_wsk);
        if (how_many == 1 )
        {
            struct Album *tmp2;
            tmp2 = lista;
            while (tmp2)
            {
                for (int j=0;j<dlugosc_listy(lista);j++)
                {
                    if (tmp2->id == tab_wsk[j])
                    {
                        do
                        {
                            edit_menu(tmp2,tab_wsk);
                            puts("Chcesz edytowac dalej? (t=tak)");
                            t=getch();
                            print_line(tmp2);
                        }while(t == 't');
                        break;
                    }
                }
                tmp2=tmp2->next;
            }
        }
        else
        {
            struct Album *tmp;
        puts("Podaj id albumu do edycji:");
        scanf("%d",&identificator);
        tmp = (Album*)which(lista,identificator);
        while (tmp == 0)
        {
            puts("Podales niepoprawne id!Podaj jeszcze raz");
            scanf("%d",&identificator);
            tmp = (Album*)which(lista,identificator);
        }
        int count = 0;
        while (count < dlugosc_listy(lista))
        {
            if (tab_wsk[count] == tmp->id)
            {
                do
                {
                    edit_menu(tmp,tab_wsk);
                    puts("Chcesz edytowac dalej? (t=tak)");
                    t=getch();
                    print_line(tmp);
                }while(t == 't');
                break;
            }
            else
                count++;
            if (count == dlugosc_listy(lista))
            {
                    puts("Podales niepoprawne id!Podaj jeszcze raz");
                    scanf("%d",&identificator);
                    tmp = (Album*)which(lista,identificator);
                    count=0;
                    while (tmp == 0)
                    {
                        puts("Podales niepoprawne id!Podaj jeszcze raz");
                        scanf("%d",&identificator);
                        tmp = (Album*)which(lista,identificator);
                    }
            }
        }
        }

    }
    if (wybor == 6)
    {
        puts("Stan:");
        while(getchar()!='\n');
        scanf("%[^\n]s",data);
        find_lines(&lista,data,6,0,tab_wsk);
        int how_many = count_elements(lista,tab_wsk);
        if (how_many == 1 )
        {
            struct Album *tmp2;
            tmp2 = lista;
            while (tmp2)
            {
                for (int j=0;j<dlugosc_listy(lista);j++)
                {
                    if (tmp2->id == tab_wsk[j])
                    {
                        do
                        {
                            edit_menu(tmp2,tab_wsk);
                            puts("Chcesz edytowac dalej? (t=tak)");
                            t=getch();
                            print_line(tmp2);
                        }while(t == 't');
                        break;
                    }
                }
                tmp2=tmp2->next;
            }
        }
        else
        {
            struct Album *tmp;
        puts("Podaj id albumu do edycji:");
        scanf("%d",&identificator);
        tmp = (Album*)which(lista,identificator);
        while (tmp == 0)
        {
            puts("Podales niepoprawne id!Podaj jeszcze raz");
            scanf("%d",&identificator);
            tmp = (Album*)which(lista,identificator);
        }
        int count = 0;
        while (count < dlugosc_listy(lista))
        {
            if (tab_wsk[count] == tmp->id)
            {
                do
                {
                    edit_menu(tmp,tab_wsk);
                    puts("Chcesz edytowac dalej? (t=tak)");
                    t=getch();
                    print_line(tmp);
                }while(t == 't');
                break;
            }
            else
                count++;
            if (count == dlugosc_listy(lista))
            {
                    puts("Podales niepoprawne id!Podaj jeszcze raz");
                    scanf("%d",&identificator);
                    tmp = (Album*)which(lista,identificator);
                    count=0;
                    while (tmp == 0)
                    {
                        puts("Podales niepoprawne id!Podaj jeszcze raz");
                        scanf("%d",&identificator);
                        tmp = (Album*)which(lista,identificator);
                    }
            }
        }
        }

    }
     if (wybor == 7)
    {
        puts("Przesluchany?");
        while(getchar()!='\n');
        scanf("%[^\n]s",data);
        find_lines(&lista,data,7,0,tab_wsk);
        int how_many = count_elements(lista,tab_wsk);
        if (how_many == 1 )
        {
            struct Album *tmp2;
            tmp2 = lista;
            while (tmp2)
            {
                for (int j=0;j<dlugosc_listy(lista);j++)
                {
                    if (tmp2->id == tab_wsk[j])
                    {
                        do
                        {
                            edit_menu(tmp2,tab_wsk);
                            puts("Chcesz edytowac dalej? (t=tak)");
                            t=getch();
                            print_line(tmp2);
                        }while(t == 't');
                        break;
                    }
                }
                tmp2=tmp2->next;
            }
        }
        else
        {
        struct Album *tmp;
        puts("Podaj id albumu do edycji:");
        scanf("%d",&identificator);
        tmp = (Album*)which(lista,identificator);
        while (tmp == 0)
        {
            puts("Podales niepoprawne id!Podaj jeszcze raz");
            scanf("%d",&identificator);
            tmp = (Album*)which(lista,identificator);
        }
        int count = 0;
        while (count < dlugosc_listy(lista))
        {
            if (tab_wsk[count] == tmp->id)
            {
                do
                {
                    edit_menu(tmp,tab_wsk);
                    puts("Chcesz edytowac dalej? (t=tak)");
                    t=getch();
                    print_line(tmp);
                }while(t == 't');
                break;
            }
            else
                count++;
            if (count == dlugosc_listy(lista))
            {
                    puts("Podales niepoprawne id!Podaj jeszcze raz");
                    scanf("%d",&identificator);
                    tmp = (Album*)which(lista,identificator);
                    count=0;
                    while (tmp == 0)
                    {
                        puts("Podales niepoprawne id!Podaj jeszcze raz");
                        scanf("%d",&identificator);
                        tmp = (Album*)which(lista,identificator);
                    }
            }
        }
        }

    }


}

/**Funkcja Menu ktora odpowiada za interfejs edytowania
*@param *top glowa listy
*@param *tab_wsk tablica przechowuje id do edycji
*@return funkcja nie zwraca zadnej wartosci lecz korzysta z funkcji edit_album() gdzie przebiega edycja
*/
void edit_menu(Album *top,int *tab_wsk)
{
    int count=count_elements(top,tab_wsk);
    Album *wsk;
    wsk = top;
    if (count > 1)
    {
        printf("ID: %d ",wsk->id);
        printf("Imie i Nazwisko: %s ",wsk->imie_nazwisko);
        printf("Tytul: %s ",wsk->tytul);
        printf("Gatunek: %s ",wsk->gatunek);
        printf("Rok: %d ",wsk->rok);
        printf("Stan: %s ",wsk->stan);
        printf("Przesluchany: %s ",wsk->przesluchany);
    }
    int wybor=0;

    do{
    puts("\n\nCo chcesz edytowac?");
    puts("1 - Imie i Nazwisko");
    puts("2 - Tytul");
    puts("3 - Gatunek");
    puts("4 - Rok");
    puts("5 - Stan");
    puts("6 - Przesluchany");


    scanf("%d",&wybor);

    if(wybor<1 || wybor>7)
    {
        puts("\nPodano zla wartosc!!!");
        puts("");
    }
    }while(wybor<1 || wybor>7);

    edit_album(&wsk,wybor);

}
/**Funkcja sluzaca do edycji albumow
*@param **lista glowa listy
*@param wybor wybor jakie pole chcemy edytowac
*@return funkcja nie zwraca zadnej wartosci
*/
void edit_album(Album **lista,int wybor)
{
    Album *tmp;
    tmp = (*lista);
    if (wybor == 1)
    {
        printf("Aktualne imie i nazwisko: %s\n",tmp->imie_nazwisko);
        puts("Podaj nowe imie i nazwisko: ");
        while(getchar()!='\n');
        scanf("%[^\n]s",tmp->imie_nazwisko);
        printf("Nowe imie i nazwisko: %s\n",tmp->imie_nazwisko);
    }
     if (wybor == 2)
    {
        printf("Aktualny tytul: %s\n",tmp->tytul);
        puts("Podaj nowy tytul: ");
        while(getchar()!='\n');
        scanf("%[^\n]s",tmp->tytul);
        printf("Nowy tytul: %s\n",tmp->tytul);
    }
    if (wybor == 3)
    {
        printf("Aktualny gatunek: %s\n",tmp->gatunek);
        puts("Podaj nowy gatunek: ");
        while(getchar()!='\n');
        scanf("%[^\n]s",tmp->gatunek);
        printf("Nowy gatunek: %s\n",tmp->gatunek);
    }
     if (wybor == 4)
    {
        printf("Aktualny rok: %d\n",tmp->rok);
        puts("Podaj nowy rok: ");
        scanf("%d",&(tmp->rok));
        printf("Nowy rok: %d\n",tmp->rok);
    }

    if (wybor == 5)
    {
        printf("Stan %s\n",tmp->stan);
        puts("Aktualizuj: ");
        while(getchar()!='\n');
        scanf("%[^\n]s",tmp->stan);
        printf("Po aktualizacji: %s\n",tmp->stan);
    }
     if (wybor == 6)
    {
        printf("Przesluchany? %s\n",tmp->przesluchany);
        puts("Aktualizuj: ");
        while(getchar()!='\n');
        scanf("%[^\n]s",tmp->przesluchany);
        printf("Po aktualizacji: %s\n",tmp->przesluchany);
    }


}
