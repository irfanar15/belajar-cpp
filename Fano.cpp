#include <iostream>
using namespace std;
int main(){
    int A;
    int S;
    int D;
    int F;
    int total;
    cout<<"A = ";
    cin>>A;
    cout<<"S = ";
    cin>>S;
    cout<<"D = ";
    cin>>D;
    cout<<"F = ";
    cin>>F;
    total=(A+S)*(D+F);
    if(total >= 50){
        cout<<"gandi eek\n";
    }else{
        cout<<"gandi bau\n";
    }
    cout<<"hasil sama dengan = "<<total<<"\n";
}