#include <iostream>
using namespace std;
int main(){
    A:
    int Pilih;
    cout<<"===MenuRumah===\n";
    cout<<"1 = lemari\n";
    cout<<"2 = TV\n";
    cout<<"3 = Meja Kerja\n";
    cout<<"4 = Meja TV\n";
    cout<<"Any Keys = Exit\n";
    cin>>Pilih;
    switch(Pilih){
        case 1:
            cout<<"===lemari(Pakaian)===\n";
            cout<<"1 = Lemari 1\n";
            cout<<"2 = Lemari 2\n";
            cout<<"3 = Lemari 3\n";
            cout<<"4 = Lemari 4\n";
            cout<<"5 = Lemari 5\n";
            cin>>Pilih;
            switch(Pilih){
                case 1:
                    cout<<"Sempak\n";
                break;

                case 2:
                    cout<<"Celana\n";
                break;
                
                case 3:
                    cout<<"BH\n";
                break;

                case 4:
                    cout<<"kaos kaki\n";
                break;

                case 5:
                    cout<<"Kaos\n";
                break;
            }
        break;

        case 2:
            cout<<"===Tv===\n";
            cout<<"1 = Spec\n";
            cout<<"2 = Lebar\n";
            cout<<"3 = Tinggi\n";
            cin>>Pilih;
            switch(Pilih){
                case 1:
                    cout<<"2k/HDMI\n";
                break;
                
                case 2:
                    cout<<"1m\n";
                break;

                case 3:
                    cout<<"75mm\n";
                break;
            }
        break;

        case 3:
            cout<<"===MejaKerja===\n";
            cout<<"1 = Permukaan\n";
            cout<<"2 = Loker\n";
            cin>>Pilih;
            switch(Pilih){
                case 1:
                    cout<<"Laptop/Radio/kertas/Printer\n";
                break;

                case 2:
                    cout<<"Casing/Kertas\n";
                break;

            }
        break;

        case 4:
            cout<<"===MejaTV===\n";
            cout<<"1 = Permukaan(Meja)\n";
            cout<<"2 = Loker\n";
            cin>>Pilih;
            switch(Pilih){
                case 1:
                    cout<<"Sarung/Kucing/Lampu\n";
                break;

                case 2:
                    cout<<"===Loker(MejaTV)===\n";
                    cout<<"1 = Loker 1\n";
                    cout<<"2 = Loker 2\n";
                    cout<<"3 = Loker 3\n";
                    cout<<"4 = Loker 4\n";
                    cin>>Pilih;
                    switch(Pilih){
                        case 1:
                            cout<<"Charger/Camera\n";
                        break;

                        case 2:
                            cout<<"Tripod/Kardus\n";
                        break;

                        case 3:
                            cout<<"Tas/Tas punggung\n";
                        break;

                        case 4:
                            cout<<"Tas Laptop\n";
                        break;
                    }
                break;
            }
        break;
    }
    cout<<"\nBack = 1\n";
    cin>>Pilih;
    switch(Pilih){
        case 1:
            goto A;
        break;
    }
}