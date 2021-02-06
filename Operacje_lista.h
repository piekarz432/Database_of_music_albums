#ifndef OPERACJE_LISTA
#define OPERACJE_LISTA

#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include<conio.h>

/**
*Glowna struktura programu
*/
typedef struct Album
{
    int id;/**<zmienna przechowujaca id albumu*/
    int rok;/**<zmienna przechowujaca rok albumu*/
    char imie_nazwisko[100];/**<zmienna przechowujaca imie i nazwisko autora albumu*/
    char tytul[100]; /**<zmienna przechowujaca tytul albumu*/
    char gatunek[100]; /**<zmienna przechowujaca gatunek albumu*/
    char stan[100]; /**<zmienna przechowujaca stan albumu*/
    char przesluchany[100];/**< zmienna odpowiadajaca za to czy album jest przesluchany czy nie */
    struct Album* next;/**<wskaźnik na kolejny album*/
}Album;

int dlugosc_listy(Album* lista);
void dodaj(Album** lista, Album* nowa);
int search_id(struct Album **top);
void dodajOsobe(Album** lista);
void wypisz_liste(Album* lista);
void usun(Album** lista, int ID);
void usun_osobe(Album** lista);






#endif // OPERACJE_LISTA
