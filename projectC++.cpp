#include "projectC++.h"

void createList_1301213034(List &L){
    first(L) = nil;
}

adr newElement_1301213034(infotype x){
    adr p = new element;
    info(p) = x;
    next(p) = nil;
    return p;
}

void insertFirst_1301213034(List &L, adr p){
    if (first(L) != nil && last(L) != nil){
        next(p) = first(L);
        prev(first(L)) = p;
        first(L) = p;
    }else {
        first(L) = p;
        last(L) = p;
    }
}

void showall_1301213034(List L){
    if (first(L) != nil){
        adr p = first(L);
        while (p != nil){
            cout << endl;
            cout << "ID faktur : " << info(p).ID_faktur << endl;
            cout << "Merk sepeda : " << info(p).merk << endl;
            cout << "Jenis sepeda : " << info(p).jenis << endl;
            cout << "Harga sepeda : " << info(p).harga << endl;

            p = next(p);
        }
    }else {
        cout << "list kosong" << endl;
    }
    cout << endl;
}

void tampilIDGanjil_1301213034(List L){
    if (first(L) != nil){
        adr p = first(L);
        while (info(p).ID_faktur % 2 != 0){
            cout << "ID faktur ganjil : " << info(p).ID_faktur;
            p = next(p);
        }
    }else {
        cout << "tidak ada data";
    }
    cout << endl;
}

int selectMenu_1301213034(){
    cout << "===== MENU =====" << endl;
    cout << "1. Menambah N data baru" << endl;
    cout << "2. Menampilkan semua data" << endl;
    cout << "3. Menampilkan ID_faktur yang bernilai ganjil" << endl;
    cout << "0. Exit" << endl;
    cout << "Masukan menu : ";

    int input = 0;
    cin >> input;

    return input;
}
