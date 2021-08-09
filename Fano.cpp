#include <iostream>
using namespace std;
int main(){
    Z:
    int Pilih,Pilihan;
    int A,B;
        cout<<"===Menu===\n";
        cout<<"1 = Calculator\n";
        cout<<"2 = laptop\n";
        cout<<"Any Keys = Exit\n";
        cin>>Pilih;
    switch(Pilih){
        case 1:
            cout<<"===Calculator===\n";
            cout<<"1 = Pertambahan\n";
            cout<<"2 = Pengurangan\n";
            cout<<"3 = Perkalian\n";
            cout<<"4 = Pembagian\n";
            cin>>Pilihan;
        switch(Pilihan){
            case 1:
                    cout<<"===Pertambahan===\n = ";
                    cin>>A;
                    cout<<"\nAngka 2 = ";
                    cin>>B;
                    cout<<A+B;
            break;

            case 2:
                    cout<<"===Pengurangan===\n = ";
                    cin>>A;
                    cout<<"\nAngka 2 = ";
                    cin>>B;
                    cout<<A-B;
            break;

            case 3:
                    cout<<"===Perkalian===\n = ";
                    cin>>A;
                    cout<<"\nAngka 2 = ";
                    cin>>B;
                    cout<<A*B;
            break;

            case 4:
                cout<<"===Pembagian===\n = ";
                cin>>A;
                cout<<"\nAngka 2 = ";
                cin>>B;
                cout<<A/B;
            break;
        }
        break;
        case 2:
                cout<<"===Laptop===\n";
                cout<<"1 = Laptop Raihan\n";
                cout<<"2 = Laptop Irfan\n";
                cin>>Pilih;
            switch(Pilih){
                case 1:
                    cout<<"===LaptopRaihan===\n";
                    cout<<"1 = Ram\n";
                    cout<<"2 = Rom\n";
                    cin>>Pilih;
                switch(Pilih){
                    case 1:
                        cout<<"4gb\n";
                    break;

                    case 2:
                        cout<<"256gb\n";
                    break;
                }
                break;

                case 2:
                    cout<<"===LaptopIrfan===\n";
                    cout<<"1 = Ram\n";
                    cout<<"2 = Rom\n";
                    cin>>Pilih;
                    switch(Pilih){
                        case 1:
                            cout<<"2gb\n";
                        break;

                        case 2:
                            cout<<"512gb\n";
                        break;
                    }
                break;
            }
    break;

    }
        cout<<"\nBack = 1 / Any Keys = End Browse \n";
        cin>>Pilih;
        switch(Pilih){
            case 1:
            goto Z;
            break;
        }
}