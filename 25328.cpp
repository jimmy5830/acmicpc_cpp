#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a, b;
    cin >> a >> b;
    
    float def = (100 - b) / 100.0;
    float c = a * def;
    
    if (c >= 100.0) {
        cout << 0 << endl;
    } else {cout << 1 << endl;}
    
    
}
        

