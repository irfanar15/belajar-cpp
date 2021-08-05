#include <iostream>
using namespace std;
int main(){
    int Pilihan;
    a:
    cout<<"===Menu===\n";
    cout<<"1 = Tom\n";
    cout<<"2 = Exit\n";
    cin>>Pilihan;
    if(Pilihan == 1){
        cout<<"Bau\n";
    }
    else{
        cout<<"Exit\n";
    }
        cout<<"Exit = 1:Yes/2:No\n";
        cin>>Pilihan;
        if(Pilihan ==1){
            goto a;
        }

}
