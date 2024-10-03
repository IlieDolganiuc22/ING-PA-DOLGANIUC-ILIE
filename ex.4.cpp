#include<iostream>
using namespace std;
int main(){

    int a, b , m , n;

    cout << " Introdueti cele 2 numere : " << endl;
    cin >> a >> b;

    while(a!=b){

        if(a>b){
            a=a-b;
        }
        else
        b=b-a;
    }


cout << " Cel mai mare divizor comun este : " << a << endl;

return 0;
}
