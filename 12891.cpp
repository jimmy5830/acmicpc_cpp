#include <iostream>
#include <queue>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    queue<int> Q;
    int N;
    
    if (!(cin >> N)) return 0;
    
    for (int i = 1; i <= N; i++) {
        Q.push(i);
    }
    
    while (Q.size() > 1) {
        Q.pop();
        Q.push(Q.front());
        Q.pop();
    }
    
    if (!Q.empty()) {
        cout << Q.front();
    }
    
    return 0;
}