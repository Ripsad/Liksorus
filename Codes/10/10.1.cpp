#include <iostream>
using namespace std;
int main(){
    double *m,**p;
    double n;
    cin >> n;
    m=&n;
	p=&m;
    cout << **p;
}
