#include <iostream>
using namespace std;
int main(){
    A:
    int Pilih;
    int AngkaA;
    int AngkaB;
    cout<<"===Menu===\n";
    cout<<"1 = laptop\n";
    cout<<"2 = Calculator\n";
    cout<<"Any Keys = Exit\n";
    cin>>Pilih;
    switch(Pilih){
        case 1:
            cout<<"===laptop===\n";
            cout<<"1 = Laptop Aru\n";
            cout<<"2 = laptop Raihan\n";
            cout<<"3 = Laptop Irfan\n";
            cout<<"4 = Laptop Ayah\n";
            cin>>Pilih;
            switch(Pilih){
                case 1:
                    cout<<"===Laptop Aru===\n";
                    cout<<"1 = Ram\n";
                    cout<<"2 = Rom\n";
                    cout<<"3 = cpu\n";
                    cin>>Pilih;
                    switch(Pilih){
                        case 1:
                            cout<<"4gb\n";
                        break;

                        case 2:
                            cout<<"??gb\n";
                        break;

                        case 3:
                            cout<<"Intel\n";
                        break;
                    }
                break;

                case 2:
                    cout<<"===Laptop Raihan===\n";
                    cout<<"1 = Ram\n";
                    cout<<"2 = Rom\n";
                    cout<<"3 = cpu\n";
                    cin>>Pilih;
                    switch(Pilih){
                        case 1:
                            cout<<"4gb\n";
                        break;

                        case 2:
                            cout<<"256gb\n";
                        break;

                        case 3:
                            cout<<"Intel\n";
                        break;
                    }
                break;

                case 3:
                    cout<<"===Laptop Irfan===\n";
                    cout<<"1 = Ram\n";
                    cout<<"2 = Rom\n";
                    cout<<"3 = cpu\n";
                    cin>>Pilih;
                    switch(Pilih){
                        case 1:
                            cout<<"2gb\n";
                        break;

                        case 2:
                            cout<<"512gb\n";
                        break;

                        case 3:
                            cout<<"Intel\n";
                        break;
                    }
                break;

                case 4:
                    cout<<"===Laptop Ayah===\n";
                    cout<<"1 = Ram\n";
                    cout<<"2 = Rom\n";
                    cout<<"3 = cpu\n";
                    cin>>Pilih;
                    switch(Pilih){
                        case 1:
                            cout<<"??gb\n";
                        break;

                        case 2:
                            cout<<"256gb\n";
                        break;

                        case 3:
                            cout<<"Intel Pentium\n";
                        break;
                    }
                break;


            }
        break;

        case 2:
            cout<<"===Calculator===\n";
            cout<<"1 = Pertambahan\n";
            cout<<"2 = Pengurangan\n";
            cout<<"3 = Perkalian\n";
            cout<<"4 = Pembagian\n";
            cin>>Pilih;
            switch(Pilih){
                case 1:
                    cout<<"===Pertambahan===\n";
                    cout<<"Angka 1 = \n";
                    cin>>AngkaA;
                    cout<<"Angka 2 = \n";
                    cin>>AngkaB;
                    cout<<AngkaA+AngkaB;
                break;

                case 2:
                    cout<<"===Pengurangan===\n";
                    cout<<"Angka 1 = \n";
                    cin>>AngkaA;
                    cout<<"Angka 2 = \n";
                    cin>>AngkaB;
                    cout<<AngkaA-AngkaB;
                break;

                case 3:
                    cout<<"===Perkalian===\n";
                    cout<<"Angka 1 = \n";
                    cin>>AngkaA;
                    cout<<"Angka 2 = \n";
                    cin>>AngkaB;
                    cout<<AngkaA*AngkaB;
                break;

                case 4:
                    cout<<"===Pembagian===\n";
                    cout<<"Angka 1 = \n";
                    cin>>AngkaA;
                    cout<<"Angka 2 = \n";
                    cin>>AngkaB;
                    cout<<AngkaA/AngkaB;
                break;
 
            }
        break;
    }
    cout<<"\nBack = 1 / Any Keys = Done/Exit\n";
    cin>>Pilih;
    switch(Pilih){
        case 1:
            goto A;
        break;
    }
}