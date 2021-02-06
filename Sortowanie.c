#include"Sortowanie.h"
/**Funkcja odpowiadajaca za sortowanie rosnaco
*@param **head glowa listy
*@param *new_node glowa nowej listy w której rekordy sa dolaczane posortowane
*@param wybor wybor po jakim polu chcemy sortowac
*@return funkcja nie zwraca zadnej wartosci*/
void insert_sorted_ascending(Album **head, Album *new_node, int wybor)
{
    Album *tmp_node = NULL;

    if(wybor==1)
    {
        if(*head == NULL || new_node->id < (*head)->id)
        {
            new_node->next = *head;
            *head = new_node;
            return;
        }

        tmp_node = *head;

        while(tmp_node->next && new_node->id > tmp_node->next->id)
        {
            tmp_node = tmp_node->next;
        }
    }
    if(wybor==2)
    {
        if(*head == NULL || strcmp(new_node->imie_nazwisko, (*head)->imie_nazwisko)<0)
        {
            new_node->next = *head;
            *head = new_node;
            return;
        }

        tmp_node = *head;

        while(tmp_node->next && strcmp(new_node->imie_nazwisko, tmp_node->next->imie_nazwisko)>0)
        {
            tmp_node = tmp_node->next;
        }
    }
    if(wybor==3)
    {
        if(*head == NULL || strcmp(new_node->tytul, (*head)->tytul)<0)
        {
            new_node->next = *head;
            *head = new_node;
            return;
        }

        tmp_node = *head;

        while(tmp_node->next && strcmp(new_node->tytul, tmp_node->next->tytul)>0)
        {
            tmp_node = tmp_node->next;
        }
    }
    if(wybor==4)
    {
        if(*head == NULL || strcmp(new_node->gatunek, (*head)->gatunek)<0)
        {
            new_node->next = *head;
            *head = new_node;
            return;
        }

        tmp_node = *head;

        while(tmp_node->next && strcmp(new_node->gatunek, tmp_node->next->gatunek)>0)
        {
            tmp_node = tmp_node->next;
        }
    }

    if(wybor==5)
    {
        if(*head == NULL || new_node->rok < (*head)->rok)
        {
            new_node->next = *head;
            *head = new_node;
            return;
        }

        tmp_node = *head;

        while(tmp_node->next && new_node->rok > tmp_node->next->rok)
        {
            tmp_node = tmp_node->next;
        }
    }

     if(wybor==6)
    {
        if(*head == NULL || strcmp(new_node->stan, (*head)->stan)<0)
        {
            new_node->next = *head;
            *head = new_node;
            return;
        }

        tmp_node = *head;

        while(tmp_node->next && strcmp(new_node->stan, tmp_node->next->stan)>0)
        {
            tmp_node = tmp_node->next;
        }
    }

     if(wybor==7)
    {
        if(*head == NULL || strcmp(new_node->przesluchany, (*head)->przesluchany)<0)
        {
            new_node->next = *head;
            *head = new_node;
            return;
        }

        tmp_node = *head;

        while(tmp_node->next && strcmp(new_node->przesluchany, tmp_node->next->przesluchany)>0)
        {
            tmp_node = tmp_node->next;
        }
    }

    new_node->next = tmp_node->next;
    tmp_node->next = new_node;
}
/**Funkcja odpowiadajaca za sortowanie malejaco
*@param **head glowa listy
*@param *new_node glowa nowej listy w ktorej rekordy sa dolaczane posortowane
*@param wybor wybor po jakim polu chcemy sortowac
*@return funkcja nie zwraca zadnej wartosci*/
void insert_sorted_descending(Album **head, Album *new_node, int wybor)
{
    Album *tmp_node = NULL;

    if(wybor==1)
    {
        if(*head == NULL || new_node->id > (*head)->id)
        {
            new_node->next = *head;
            *head = new_node;
            return;
        }

        tmp_node = *head;

        while(tmp_node->next && new_node->id < tmp_node->next->id)
        {
            tmp_node = tmp_node->next;
        }
    }
    if(wybor==2)
    {
        if(*head == NULL || strcmp(new_node->imie_nazwisko, (*head)->imie_nazwisko)>0)
        {
            new_node->next = *head;
            *head = new_node;
            return;
        }

        tmp_node = *head;

        while(tmp_node->next && strcmp(new_node->imie_nazwisko, tmp_node->next->imie_nazwisko)<0)
        {
            tmp_node = tmp_node->next;
        }
    }
    if(wybor==3)
    {
        if(*head == NULL || strcmp(new_node->tytul, (*head)->tytul)>0)
        {
            new_node->next = *head;
            *head = new_node;
            return;
        }

        tmp_node = *head;

        while(tmp_node->next && strcmp(new_node->tytul, tmp_node->next->tytul)<0)
        {
            tmp_node = tmp_node->next;
        }
    }
    if(wybor==4)
    {
        if(*head == NULL || strcmp(new_node->gatunek, (*head)->gatunek)>0)
        {
            new_node->next = *head;
            *head = new_node;
            return;
        }

        tmp_node = *head;

        while(tmp_node->next && strcmp(new_node->gatunek, tmp_node->next->gatunek)<0)
        {
            tmp_node = tmp_node->next;
        }
    }

    if(wybor==5)
    {
        if(*head == NULL || new_node->rok > (*head)->rok)
        {
            new_node->next = *head;
            *head = new_node;
            return;
        }

        tmp_node = *head;

        while(tmp_node->next && new_node->rok < tmp_node->next->rok)
        {
            tmp_node = tmp_node->next;
        }
    }

     if(wybor==6)
    {
        if(*head == NULL || strcmp(new_node->stan, (*head)->stan)>0)
        {
            new_node->next = *head;
            *head = new_node;
            return;
        }

        tmp_node = *head;

        while(tmp_node->next && strcmp(new_node->stan, tmp_node->next->stan)<0)
        {
            tmp_node = tmp_node->next;
        }
    }

     if(wybor==7)
    {
        if(*head == NULL || strcmp(new_node->przesluchany, (*head)->przesluchany)>0)
        {
            new_node->next = *head;
            *head = new_node;
            return;
        }

        tmp_node = *head;

        while(tmp_node->next && strcmp(new_node->przesluchany, tmp_node->next->przesluchany)<0)
        {
            tmp_node = tmp_node->next;
        }
    }

    new_node->next = tmp_node->next;
    tmp_node->next = new_node;
}
/**Funkcja menu do sortowania
*@param **head glowa listy
*@return funkcja nie zwraca zadnej wartosci*/
void sort_list(Album **head)
{
    if(*head==NULL)
    {
        puts("\nLISTA JEST PUSTA");
        return;
    }

        int choice=0;
    do{
        puts("Wybiersz sposób sortowania.");
        puts("1 - Rosnaco");
        puts("2 - Malejaco");
        puts("Wprowadz wartosc: ");
        scanf("%d", &choice);
    if(choice<1 || choice>2)
    {
        system("cls");
        puts("\nPodano zla wartosc!!!");
        puts("");
    }
    }while(choice<1 || choice>2);

    int wybor=0;

    do{
    puts("Po ktorym polu chcesz posortowac dane?");
    puts("1 - ID");
    puts("2 - Imie i Nazwisko");
    puts("3 - Tytul");
    puts("4 - Gatunek");
    puts("5 - Rok");
    puts("6 - Stan");
    puts("7 - Przesluchany");

    puts("Podaj wybor:");
    scanf("%d", &wybor);
    if(wybor<1 || wybor>8)
    {
        puts("\nPodano zla wartosc!!!");
        puts("");
        system("cls");
    }

    }while(wybor<1 || wybor>8);

    Album *new_head = NULL;
    Album *tmp = *head;
    Album *tmp1 = NULL;

    while(tmp)
    {
        tmp1 = tmp;
        tmp = tmp->next;
        if(choice==1)
        {
            insert_sorted_ascending(&new_head, tmp1, wybor);
        }
        if(choice==2)
        {
            insert_sorted_descending(&new_head, tmp1, wybor);
        }

    }

    *head = new_head;
}
