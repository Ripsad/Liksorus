#include <iostream>
using namespace std;
void rec(int n) {
    if (n <= 0) { return; }
    int val; cin >> val; 
    rec(n - 1); 
    cout << val << " ";
}

int main() {
    int n; cin >> n; 
    rec(n);
}
