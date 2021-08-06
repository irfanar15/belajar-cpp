#include <iostream>
using namespace std;
int main(){
    int Pilih;
    A:
    cout<<"===Menu===\n";
    cout<<"1 = Tong\n";
    cout<<"2 = Ucup\n";
    cout<<"3 = Ucil\n";
    cout<<"4 = Exit\n";
    cin>>Pilih;
    if(Pilih ==1){
        cout<<"===Tong===\n";
        cout<<"1 = Mata\n";
        cout<<"2 = Bulu\n";
        cout<<"3 = Sikap\n";
        cin>>Pilih;
        if(Pilih == 1){
            cout<<"Emas\n";
        }
        else if(Pilih == 2){
            cout<<"Kuning\n";
        }
        else if(Pilih == 3){
            cout<<"Malas\n";
        }
    }
    else if(Pilih == 2){
        cout<<"===Ucup===\n";
        cout<<"1 = Mata\n";
        cout<<"2 = Bulu\n";
        cout<<"3 = Sikap\n";
        cin>>Pilih;
        if(Pilih == 1){
            cout<<"Biru\n";
        }
        else if(Pilih == 2){
            cout<<"Abu-Abu Putih\n";
        }
        else if(Pilih == 3){
            cout<<"Bacot\n";
        }
    }
    else if(Pilih == 3){
        cout<<"===Ucil===\n";
        cout<<"1 = Mata\n";
        cout<<"2 = Bulu\n";
        cout<<"3 = Sikap\n";
        cin>>Pilih;
        if(Pilih == 1){
            cout<<"Biru\n";
        }
        else if(Pilih == 2){
            cout<<"Abu-Abu Putih\n";
        }
        else if(Pilih == 3){
            cout<<"Bacot,Adventure Time\n";
        }
    }
    else{
        cout<<"Exit\n";
    }
    cout<<"jika ingin balik gunakan = 1 / 2 untuk end\n";
    cin>>Pilih;
    if(Pilih == 1){
        goto A;
    }
}