#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>


using namespace std;

void solve() {
    int N, M;
    cin >> N >> M;
    
    queue<pair<int, int>> q;
    
    priority_queue<int> pq;
    
    for (int i = 0; i < N; i++) {
        int priority;
        cin >> priority;
        q.push({priority, i});
        pq.push(priority);
    }
    
    int count = 0;
    while (!q.empty()) {
        int current_val = q.front().first;
        int current_idx = q.front().second;
        q.pop();
        
        if (current_val == pq.top()) {
            count++;
            pq.pop();
            
            if (current_idx == M) {
                cout << count << "\n";
                break;
            }

        }
        else {
            // 3. 중요도가 더 높은 문제가 있으면 다시 보냄
            q.push({current_val, current_idx});
        }
    }
}

int main() {
        ios::sync_with_stdio(false);
        cin.tie(NULL);
        
    int testcase;
    cin >> testcase;
    for (int i = 0; i < testcase; i++) {
        solve();
    }
    return 0;
    
}


    
        
        

