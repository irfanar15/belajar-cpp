#include <iostream>
using namespace std;
int main(){
    int Pilihan;
    a:
    cout<<"===Menu===\n";
    cout<<"1 = Ucup\n";
    cout<<"2 = Ucil\n";
    cout<<"3 = Tom\n";
    cout<<"4 = Exit\n";
    cin>>Pilihan;
    if(Pilihan == 1){
        cout<<"===Ucup===\n";
        cout<<"1 = Ekor\n";
        cout<<"2 = Mata\n";
        cout<<"3 = Bulu\n";
        cout<<"4 = Berat\n";
        cin>>Pilihan;
        if(Pilihan == 1){
            cout<<"Kecil bentuk pacman\n";
        }else if(Pilihan == 2){
            cout<<"Biru\n";
        }else if(Pilihan == 3){
            cout<<"Putih Abu-Abu\n";
        }else {
            cout<<"4,5 kg\n";
        }
    }else if(Pilihan == 2){
        cout<<"===Ucil===\n";
        cout<<"1 = Ekor\n";
        cout<<"2 = Mata\n";
        cout<<"3 = Bulu\n";
        cout<<"4 = Berat\n";
        cin>>Pilihan;
        if(Pilihan == 1){
            cout<<"Panjang Tinggi\n";
        }else if(Pilihan == 2){
            cout<<"Biru\n";
        }else if(Pilihan == 3){
            cout<<"Putih Abu-Abu\n";
        }else{
            cout<<"4 kg\n";
        }
    }else if(Pilihan == 3){
        cout<<"===Tom===\n";
        cout<<"1 = Ekor\n";
        cout<<"2 = Mata\n";
        cout<<"3 = Bulu\n";
        cout<<"4 = Berat\n";
        cin>>Pilihan;
        if(Pilihan == 1){
            cout<<"Panjang Berbulu\n";
        }else if(Pilihan == 2){
            cout<<"Emas\n";
        }else if(Pilihan == 3){
            cout<<"Kuning agak oren\n";
        }else{
            cout<<"3,5 kg\n";
        }
    }else{
        cout<<"Keluar";
    }
    cout<<"\nmau balik atau tidak?";
    cin>>Pilihan;
    if(Pilihan == 1){
        goto a;
    }
}