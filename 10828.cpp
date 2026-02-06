#include <iostream>
#include <stack>


using namespace std;

stack <int> s;

void command(string cmd) {
    if (cmd == "push") {
        int n;
        cin >> n;
        s.push(n);
    }
    
    else if (cmd == "pop") {
        if (s.empty()) {
            cout << -1 << "\n";
        }
        else {
            cout << s.top();
            s.pop();
        }
    }
    
    else if (cmd == "empty") {
        cout << (s.empty() ? 1 : 0) << "\n";
    }
    
    else if (cmd == "size") {
        cout << s.size() << endl;
    }
    
    else if (cmd == "top") {
        if (s.empty()) {
            cout << -1 << endl;
        }
        else { cout << s.top() << endl; }
    }
}
    

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        string cmd;
        cin >> cmd;
        command(cmd);
    }
    
    return 0;
}
        

