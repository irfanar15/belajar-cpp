#include <iostream>
using namespace std;
int main(){
    A:
    int Pilih;
    cout<<"===MenuRumah===\n";
    cout<<"1 = Lemari\n";
    cout<<"2 = Meja Laptop\n";
    cout<<"Any Keys = Exit\n";
    cin>>Pilih;
    switch(Pilih){
        case 1:
            cout<<"===Lemari===\n";
            cout<<"1 = Lemari 1\n";
            cout<<"2 = Lemari 2\n";
            cout<<"3 = Lemari 3\n";
            cout<<"4 = Lemari 4\n";
            cout<<"5 = Lemari 5\n";
            cin>>Pilih;
            switch(Pilih){
                case 1:
                    cout<<"Sempak,Topi\n";
                break;

                case 2:
                    cout<<"Sempak,Topi,BH\n";
                break;

                case 3:
                    cout<<"Masker,BH\n";
                break;

                case 4:
                    cout<<"Sempak,Handuk Kecil\n";
                break;

                case 5:
                    cout<<"Sarung Tangan\n";
                break;
            }
        break;

        case 2:
            cout<<"===MejaLaptop===\n";
            cout<<"1 = Lemari Meja\n";
            cout<<"2 = Meja Bawah\n";
            cin>>Pilih;
            switch(Pilih){
                case 1:
                    cout<<"Buku,Fresh Case,Foto\n";
                break;

                case 2:
                    cout<<"Kosong\n";
                break;
            }
        break;
    }
    cout<<"\nBack = 1 / Any Keys = Exit\n";
    cin>>Pilih;
    switch(Pilih){
        case 1:
            goto A;
        break;
    }   
}