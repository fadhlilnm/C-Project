#include "projectC++.h"

int main(){
    int pilihan, n;
    int i = 1;
    List L;
    infotype data;


    createList_1301213034(L);
    pilihan = selectMenu_1301213034();


    while (pilihan != 0 ){
        if (pilihan == 1){
            cout << "Jumlah data yang ditambahkan : ";
            cin >> n;
            cout << endl;
                while (i <= n){
                    cout << "ID faktur : ";
                    cin >> data.ID_faktur;
                    cout << "Merk sepeda : ";
                    cin >> data.merk;
                    cout << "Jenis sepeda : ";
                    cin >> data.jenis;
                    cout << "Harga sepeda : ";
                    cin >> data.harga;
                    cout << endl;
                    adr p = newElement_1301213034(data);
                    insertFirst_1301213034(L, p);
                    i++;
                }
        }else if (pilihan == 2){
            showall_1301213034(L);
            cout << endl;
        }else if (pilihan == 3){
            cout << "ID faktur yang bernilai ganjil : ";
            tampilIDGanjil_1301213034(L);
            cout << endl;
        }
        pilihan = selectMenu_1301213034();
    }
    cout << "ANDA TELAH KELUAR DARI PROGRAM" << endl;
    return 0;
}
