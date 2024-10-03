#include<iostream>
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

    for(int i = 0; i < a; i++) {
        sum += v[i];
    }

   b = static_cast<float>(sum) / a;

    cout << " Media este : " << b << " iar suma listei este : " << sum << endl;
    return 0;
}
