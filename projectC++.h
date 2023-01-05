#ifndef TPMOD6_H_INCLUDED
#define TPMOD6_H_INCLUDED

#include <iostream>

using namespace std;

#define info(P) (P)->info
#define next(P) (P)->next
#define prev(P) (P)->prev

#define first(L) ((L).first)
#define last(L) ((L).last)
#define nil NULL


typedef struct element *adr;


struct datasepeda {
    int ID_faktur;
    string merk;
    string jenis;
    int harga;
};

typedef datasepeda infotype;

struct element {
    infotype info;
    adr next;
    adr prev;
};

struct List {
    adr first;
    adr last;
};


void createList_1301213034(List &L);
adr newElement_1301213034(infotype x);
void insertFirst_1301213034(List &L, adr p);
void showall_1301213034(List L);

void tampilIDGanjil_1301213034(List L);
int selectMenu_1301213034();
#endif // TPMOD6_H_INCLUDED
