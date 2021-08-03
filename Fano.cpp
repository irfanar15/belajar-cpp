#include <iostream>
using namespace std;
int main(){
    int Pilihan;
    int perhitungan;
    int perhitungan2;
    cout<<"===Perhitungan===\n";
    cout<<"1 = Perkalian\n";
    cout<<"2 = Pembagian\n";
    cout<<"3 = Pertambahan\n";
    cout<<"4 = Perkurangan\n";
    cout<<"5 = Keluar\n";
    cout<<"Pilih yang mana? (gunakan angka sebagai pemilihan)\n";
    cin>>Pilihan;
    if(Pilihan == 1){
        cout<<"Anda memilih Perkalian\n";
        cout<<"Tulis angka yang ingin kamu hitung = \n";
        cin>>perhitungan;
        cout<<"angka ke 2 = \n";
        cin>>perhitungan2;
        cout<<perhitungan*perhitungan2;
    }else if(Pilihan == 2){
        cout<<"Anda memilih Pembagian\n";
        cout<<"Tulis angka yang ingin kamu hitung = \n";
        cin>>perhitungan;
        cout<<"angka ke 2 = \n";
        cin>>perhitungan2;
        cout<<perhitungan/perhitungan2;
    }else if(Pilihan == 3){
        cout<<"Anda memilih Pertambahan\n";
        cout<<"Tulis angka yang ingin kamu hitung = \n";
        cin>>perhitungan;
        cout<<"angka ke 2 = \n";
        cin>>perhitungan2;
        cout<<perhitungan+perhitungan2;
    }else if(Pilihan == 4){
        cout<<"Anda memilih Pengurangan\n";
        cout<<"Tulis angka yang ingin kamu hitung = \n";
        cin>>perhitungan;
        cout<<"angka ke 2 = \n";
        cin>>perhitungan2;
        cout<<perhitungan-perhitungan2;
    }else{  
        cout<<"anda memilih keluar \n";
    }
}