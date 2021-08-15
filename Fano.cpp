#include <iostream>
using namespace std;
int main(){
    A:
    int Pilih;
    int B;
    int C;
    cout<<"===Menu===\n";
    cout<<"1 = Ucil\n";
    cout<<"2 = Ucup\n";
    cout<<"3 = Tom\n";
    cout<<"4 = perulangan(For)\n";
    cin>>Pilih;
    switch(Pilih){
        case 1:
            cout<<"===Ucil===\n";
            cout<<"1 = Mata\n";
            cout<<"2 = Berat\n";
            cout<<"3 = Sikap\n";
            cin>>Pilih;
            switch(Pilih){
                case 1:
                    cout<<"Biru\n";
                break;

                case 2:
                    cout<<"5kg\n";
                break;

                case 3:
                    cout<<"bacot,gelut,berpetualang\n";
                break;
            }
        break;

        case 2:
            cout<<"===Ucup===\n";
            cout<<"1 = Mata\n";
            cout<<"2 = Berat\n";
            cout<<"3 = Sikap\n";
            cin>>Pilih;
            switch(Pilih){
                case 1:
                    cout<<"Biru\n";
                break;

                case 2:
                    cout<<"4.5kg\n";
                break;

                case 3:
                    cout<<"bacot ngeselin\n";
                break;
            }
        break;

        case 3:
            cout<<"===Tom===\n";
            cout<<"1 = Mata\n";
            cout<<"2 = Berat\n";
            cout<<"3 = Sikap\n";
            cin>>Pilih;
            switch(Pilih){
                case 1:
                    cout<<"Emas\n";
                break;

                case 2:
                    cout<<"3.5\n";
                break;

                case 3:
                    cout<<"diam,sering hadap ke tembok\n";
                break;
            }
        break;

        case 4:
                cout<<"dari?\n";
                cin>>B;
                cout<<"Sampai?\n";
                cin>>C;
                for(int ok = B; ok < C; ok++){
                    cout<<ok<<"hehe\n";
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