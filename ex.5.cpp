#include<iostream>

using namespace std;
int main(){

   int n;

   cout << " Introduceti dimensiunea vectorului : " << endl;
   cin >> n;

   int v[n] , x;

   cout << " Introduceti elementele vectorului : " << endl;
   for ( int i = 0 ; i < n ; i++){
    cin >> v[i];
   }

   for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (v[j] > v[j + 1]) {
               x = v[j];
               v[j] = v[j+1];
               v[j+1]=x;
            }
        }
    }
   cout << endl;

   cout << " Vectorul sortat este : " << endl;
    for ( int i = 0 ; i < n ; i++){
cout << v[i] << " ";
}

    return 1;
}
