#include <iostream>
#include <stack>

using namespace std;

stack <int> s;

void command(int n) {
    if (n == 1) {
        int X;
        cin >> X;
        s.push(X);
    }
    
    else if (n == 2) {
        if (!s.empty()) {
            int temp = s.top();
            s.pop();
            cout << temp;
        } else {cout << -1;}
    }
    
    else if (n == 3) {
        int len = 0;
        while (s.empty()) {
            s.pop();
            len++;
        } cout << len;
    }
    else if (n == 4) {
        if (!s.empty()) {
            cout << 0;
        } else {cout << 1;}
    }
    
    else if (n == 5) {
        if (!s.empty()) {
            cout << s.top();
        } else {cout << -1;}
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        int cmd;
        cin >> cmd;
        command(cmd);
    }
    return 0;
}
        

