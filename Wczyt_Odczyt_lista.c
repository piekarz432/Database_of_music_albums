#include"Wczyt_Odczyt_lista.h"

/**Funkcja wczytuj¹ca zawartoœæ pliku do listy
*@param **lista g³owa listy
*@return funkcja nie zwraca ¿adnej wartoœci*/
void do_programu(Album **lista)
{
    FILE *plik = fopen("album.txt","r++");
    while(!feof(plik))
    {
        Album*nowy =(Album *)malloc(sizeof(Album));

        char buf[300];
        fgets(buf, sizeof (buf), plik);

        sscanf(buf,"%d,%100[^,],%100[^,],%100[^,],%d,%100[^,],%100[^,]", &nowy->id, nowy->imie_nazwisko, nowy->tytul, nowy->gatunek, &nowy->rok, nowy->stan, nowy->przesluchany);


        nowy->next=(*lista);
        (*lista)=nowy;
    }
    (*lista)=(*lista)->next;
    fclose(plik);
}
/**Funkcja zapisujaca zawartosc listy do pliku
*@param **lista glowa listy
*@return funkcja nie zwraca zadnej wartosci*/
void do_pliku(Album *lista)
{
    FILE *plik = fopen("album.txt","w++");
    Album* wsk = lista;

    int i = 1;
    while( wsk != NULL)
    {
        fprintf(plik,"%d,%s,%s,%s,%d,%s,%s,\n",  wsk->id, wsk->imie_nazwisko, wsk->tytul, wsk->gatunek, wsk->rok, wsk->stan, wsk->przesluchany);
        wsk=wsk->next;
        i++;
     }
    fclose(plik);
}
