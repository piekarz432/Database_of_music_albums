#include"Export_CSV.h"

/**Eksport do pliku csv, kolumny oddzielane przecinkami
*@param *filename nazwa pliku
*@param *lista glowa listy
*@return funkcja nie zwraca zadnej wartosci
*/
void Export_Csv(char *filename, Album *lista)
{

    Album* wsk=lista;
    FILE *fp;
    filename=strcat(filename,".csv");
    fp=fopen(filename,"w+");
    fprintf(fp,"ID, IMIE I NAZWISKO, TYTUL, GATUNEK, ROK, STAN, PRZESLUCHANY");
    fprintf(fp, "\n");
    int i = 1;
    while( wsk != NULL)
    {
        fprintf(fp,"%d,%s,%s,%s,%d,%s,%s\n",  wsk->id, wsk->imie_nazwisko, wsk->tytul, wsk->gatunek, wsk->rok, wsk->stan, wsk->przesluchany);
        wsk=wsk->next;
        i++;
     }

    fclose(fp);
    printf("\n Stworzono plik o nazwie %s\n",filename);
}
