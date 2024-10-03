#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int a , sum = 0;
    float b;
    cin >> a;

    int v[a];

    for(int i = 0 ; i < a ; i ++ ){
        cin>>v[i];

    }

    for (int i = 0; i < a - 1; i++) {
        for (int j = 0; j < a - 1 - i; j++) {
            if (v[j] > v[j + 1]) {
                swap(v[j], v[j + 1]);
            }
        }
    }

    cout << " Vectorul ordonAT : " << endl;
     for(int i = 0 ; i < a ; i ++ ){

        cout << v[i] << " ";
    }
    return 0 ;
}
