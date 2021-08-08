#include <iostream>
using namespace std;
int main(){
    int Pilih,A,B; 
    k:
    cout<<"===Menu===\n";
    cout<<"1 = Calculator\n";
    cout<<"2 = KucingMenu\n";
    cout<<"any keys = Exit\n";
    cin>>Pilih;
    switch(Pilih){
        case 1:
            cout<<"===Calculator===\n";
            cout<<"1 = Pertambahan\n";
            cout<<"2 = Perkalian\n";
            cout<<"3 = Pengurangan\n";
            cout<<"4 = Pembagian\n";
            cout<<"5 = Exit\n";
            cin>>Pilih;
            switch(Pilih){
                case 1:
                    cout<<"===Pertambahan===\nAngka 1 = ";
                    cin>>A;
                    cout<<"\nAngka 2 = ";
                    cin>>B;
                    cout<<A+B;
                break;

                case 2:
                    cout<<"===Perkalian===\nAngka 1 = ";
                    cin>>A;
                    cout<<"\nAngka 2 = ";
                    cin>>B;
                    cout<<A*B;
                break;

                case 3:
                    cout<<"===Pengurangan===\nAngka 1 = ";
                    cin>>A;
                    cout<<"\nAngka 2 = ";
                    cin>>B;
                    cout<<A-B;
                break;

                case 4:
                    cout<<"===Pembagian===\nAngka 1 = ";
                    cin>>A;
                    cout<<"\nAngka 2 = ";
                    cin>>B;
                    cout<<A/B;
                break;
                
                default:
                    cout<<"LOL";
                    break;
                
            }
        break;
        
        case 2:
            cout<<"===Menu===\n";
            cout<<"1 = Ucil\n";
            cout<<"2 = Ucup\n";
            cout<<"3 = Tom\n";
            cin>>Pilih;
            switch(Pilih){
                case 1:
                cout<<"===Ucil===\n";
                cout<<"1 = Mata\n";
                cout<<"2 = Warna Bulu\n";
                cin>>Pilih;
                switch(Pilih){
                    case 1:
                    cout<<"Biru\n";
                    break;
                    case 2:
                    cout<<"Abu-Abu Putih\n";
                    break;
                    default:
                    cout<<"LOL";
                    break;
                }
                break;

                case 2:
                cout<<"===Ucup===\n";
                cout<<"1 = Mata\n";
                cout<<"2 = Warna Bulu\n";
                cin>>Pilih;
                switch(Pilih){
                    case 1:
                    cout<<"Biru\n";
                    break;
                    case 2:
                    cout<<"Abu-Abu Putih\n";
                    break;
                    default:
                    cout<<"LOL";
                    break;
                }
                break;

                case 3:
                cout<<"===Tom===\n";
                cout<<"1 = Mata\n";
                cout<<"2 = Warna Bulu\n";
                cin>>Pilih;
                switch(Pilih){
                    case 1:
                    cout<<"Emas\n";
                    break;
                    case 2:
                    cout<<"Kuning\n";
                    break;
                }
                
                default:
                    cout<<"LOL\n";
                    break;

                }   
            }
            cout<<"\nBack = 1 \n";
            cin>>Pilih;
            switch(Pilih){
                case 1:
                goto k;
                break;
            }

        }
