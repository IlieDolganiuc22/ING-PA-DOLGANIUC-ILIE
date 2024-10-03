#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a, b, c, d, x1, x2;

	cout << " Introduceti variabilele a , b, c : " << endl;
	cin >> a >> b >> c;

	d = pow(b,2) - 4*a*c;

    cout << " Delta este : " << d << endl;
	if(d < 0) {
		cout << " Nu exista solutie " << endl;
		return 0;
	}

    if(d == 0) {
        cout << " Solutia este : " << (-b)/2*a << endl;
        return 1;
    }
    else{
	x1 = (-b - sqrt(d))/(2*a);
	x2 =  (-b + sqrt(d))/(2*a);
    }
	cout << " Rezultatele sunt : " << x1 << " si " << x2 << endl;

}
