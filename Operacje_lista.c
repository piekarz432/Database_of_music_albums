#include "Operacje_lista.h"

/**Funkcja sluzy do wyznaczania dlugości listy
*@param *lista glowa listy
*@return funkcja zwraca dlugosc listy*/
int dlugosc_listy(Album* lista)
{
    int d = 0;
    Album* wsk = lista;
    while(wsk != NULL)
    {
        d++;
        wsk = wsk->next;
    }
    return d;
}

/**Funkcja dodaje nowy węzel do listy
*@param **lista glowa listy
*@param *nowa nowy element
*@return funkcja nie zwraca zadnej wartosci
*/
void dodaj(Album** lista, Album* nowa)
{
     while (*lista != NULL) lista = &((*lista)->next);
     *lista = nowa;
     nowa->next = NULL;
}
/**Funkcja szuka odpowiedniego id tak aby wszystkie numery byly wykorzystane
*@param **top glowa listy
*@return funkcja zwraca odpowiednio dobrany numer id
*/
int search_id(struct Album **top)
{
    struct Album *tmp;
    tmp = (*top);
    int i=1;
    if (tmp == NULL)
    {
        return 1;
    }
        while (tmp)
        {
            if (i == tmp->id)
            {
                tmp = (*top);
                i++;
            }
            else
                tmp = tmp->next;

        }
        return i;
}

/**Funkcja dodająca nową osobę do listy
*@param **lista glowa listy
*@return funkcja nie zwraca zadnej wartości
*/
void dodajOsobe(Album** lista)
{
    char t;
    int rok;
    do{

     Album* nowa = (Album*)malloc(sizeof(Album));

     nowa->id=search_id(lista);
     printf("Podaj imie i nazwisko: ");
     while(getchar()!='\n');
     scanf("%[^\n]s", nowa->imie_nazwisko);
     printf("Podaj tytul: " );
     while(getchar()!='\n');
     scanf("%[^\n]s",nowa->tytul);

     printf("Podaj gatunek: " );
     while(getchar()!='\n');
     scanf("%[^\n]s",nowa->gatunek);

     printf("Podaj rok: " );
     scanf("%d",&rok);
     if ( rok > 0)
        nowa->rok = (int)rok;
     else
        puts("Podales niepoprwany rok!");

     printf("Stan(kupiony, do kupienia): " );
     while(getchar()!='\n');
     scanf("%[^\n]s",nowa->stan);

     printf("Przesluchany( Tak, Nie): " );
     while(getchar()!='\n');
     scanf("%[^\n]s",nowa->przesluchany);

     printf("\nCzy chcesz wpisac do bazy jeszcze jeden rekord? (t=tak)\n");

    dodaj(lista, nowa);
    t=getch();
    }while (t=='t');

    if(t!='t')
    {
        system("cls");
    }
}

/**Funkcja wypisujaca zawartosc listy na ekran
*@param *lista głowa listy
*@return funkcja nie zwraca żadnej wartości
*/
void wypisz_liste(Album* lista)
{
    Album* wsk = lista;

    if(lista == NULL)
    {
        printf("\nLISTA JEST PUSTA\n");
    }else
    {
        printf("\nLista zawiera %d elementow: \n", dlugosc_listy(lista) );
    }

    int i = 1;
    while( wsk != NULL)
    {
        printf("\nID:%d IMIE I NAZWISKO: %s TYTUL: %s GATUNEK: %s ROK: %d STAN: %s PRZESLUCHANY: %s \n",  wsk->id, wsk->imie_nazwisko, wsk->tytul, wsk->gatunek, wsk->rok, wsk->stan, wsk->przesluchany);
        wsk=wsk->next;
        i++;
     }
}

/**Funkcja usuwająca wybrany album
*@param **lista glowa listy
*@param ID wybrane id
*@return funkcja nie zwraca zadnej wartosci
*/
void usun(Album** lista, int ID)
{
    Album* poprzedni = NULL;
    Album* wsk = *lista;
    int i;
    for(i = 1; i < ID; i++)
    {
        poprzedni=wsk;
        wsk=wsk->next;
    }
    if(poprzedni==NULL)
    {
        (*lista)=(*lista)->next;
        free(wsk);
    }else
    {
        poprzedni->next=wsk->next;
        free(wsk);
    }
}

/**Funkcja usuwajaca osobę po indeksie
*@param **lista glowa listy
*@return funkcja nie zwraca zadnej wartosci
*/
void usun_osobe(Album** lista)
{
    Album* tmp;
    tmp = (*lista);
    if (*lista == NULL)
    {
        puts("\nLISTA JEST PUSTA");
        return;
    }
    int ID;
    wypisz_liste((*lista));
    puts("");
    puts("Aby wrocic do menu glowengo wpisz 0");
    puts("");
    printf("Podaj indeks osoby: " );
    scanf("%d", &ID);
    if (ID == 0)
    {
        system("cls");
        while(8)
            break;
    }
     if (tmp->id == ID)
     {
         if (tmp->next != NULL)
        {
            tmp = (*lista);
            (*lista)=tmp->next;
            free(tmp);
        }
        else
        {
            tmp = (*lista);
            (*lista)=tmp->next;
            free(tmp);
        }
     }


     while (tmp)
     {
        if (ID == tmp->id)
        {
            struct Album *p = (*lista);

            while(p->next != tmp)
                p = p->next;

            p->next = tmp->next;
            free(tmp);
        }
        else
        {
            tmp = tmp->next;
        }
     }
}


