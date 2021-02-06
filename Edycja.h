#ifndef EDYCJA
#define EDYCJA

#include"Operacje_lista.h"

void find_lines(Album **top,char *data,int choice,int number,int *tab_id);
int count_elements(struct Album *lista,int *tab_wsk);
void print_line(struct Album *top);
int *which(struct Album *top,int id);
void find_menu(Album *lista);
void edit_menu(Album *top,int *tab_wsk);
void edit_album(Album **lista,int wybor);





#endif // EDYCJA
