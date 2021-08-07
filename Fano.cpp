#include <iostream>
using namespace std;
int main(){
    B:
    int Pilih;
    int D,F;
    cout<<"===Calculator===\n";
    cout<<"1 = pertambahan\n";
    cout<<"2 = Pengurangan\n";
    cout<<"3 = Perkalian\n";
    cout<<"4 = Pembagian\n";
    cout<<"5 = Exit\n";
    cin>>Pilih;
    int A = 1;
    switch (Pilih){
        case 1:
            cout<<"===Pertambahan===\n";
            cin>>D;
            cout<<"angka ke 2\n";
            cin>>F;
            cout<<D+F;
            break;
        case 2:
            cout<<"===Pengurangan===\n";
            cin>>D;
            cout<<"angka ke 2\n";
            cin>>F;
            cout<<D-F;
            break;
        case 3:
            cout<<"===Perkalian===\n";
            cin>>D;
            cout<<"angka ke 2\n";
            cin>>F;
            cout<<D*F;
            break;
        case 4:
            cout<<"===Pembagian===\n";
            cin>>D;
            cout<<"angka ke 2\n";
            cin>>F;
            cout<<D/F;
            break;
        default:
            cout<<"Exit\n";
        break;
    }
        cout<<"\nBack = 1:Y / 2:N = ";
        cin>>Pilih;
        switch(Pilih){
            case 1:
            goto B;
            break;

            default:
            break;
        }

}