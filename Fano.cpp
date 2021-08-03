#include <iostream>
using namespace std;
int main(){
    int Pilihan;
    cout<<"===KucingMenu===\n";
    cout<<"1 = Ucup\n";
    cout<<"2 = Ucil\n";
    cout<<"3 = Tom\n";
    cout<<"4 = exit\n";
    cin>>Pilihan;
    if(Pilihan == 1){
        cout<<"===Ucup===\n";
        cout<<"1 = Warna Mata\n";
        cout<<"2 = Warna Bulu\n";
        cout<<"3 = Ekor\n";
        cout<<"4 = Exit\n";
        cin>>Pilihan;
        if(Pilihan == 1){
            cout<<"Biru\n";
        }else if(Pilihan == 2){
            cout<<"Putih Abu Abu\n";
        }else if(Pilihan == 3){
            cout<<"Kecil Sekali Seperti Pacman\n";
        }else{
            cout<<"Exit\n";
            }
    }

    else if(Pilihan == 2){
        cout<<"===Ucil===\n";
        cout<<"1 = Warna Mata\n";
        cout<<"2 = Warna Bulu\n";
        cout<<"3 = Ekor\n";
        cout<<"4 = Exit\n";
        cin>>Pilihan;
        if(Pilihan == 1){
            cout<<"Biru\n";
        }else if(Pilihan == 2){
            cout<<"Putih Abu Abu\n";
        }else if(Pilihan == 3){
            cout<<"Panjang sering berdiri";
        }else{
            cout<<"Exit\n";
            }
    }
    else if(Pilihan == 3){
        cout<<"===Tom===\n";
        cout<<"1 = Warna Mata\n";
        cout<<"2 = Warna Bulu\n";
        cout<<"3 = Ekor\n";
        cout<<"4 = Exit\n";
        cin>>Pilihan;
        if(Pilihan == 1){
            cout<<"Emas\n";
        }else if(Pilihan == 2){
            cout<<"Kuning agak oren\n";
        }else if(Pilihan == 3){
            cout<<"panjang agak tebel\n";
        }else{
            cout<<"Exit\n";
            }
    }
}
