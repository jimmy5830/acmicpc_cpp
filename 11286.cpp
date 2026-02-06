#include <iostream>
#include <queue>

using namespace std;

struct compare {
    bool operator()(int o1, int o2) {
        int first_abs = abs(o1);
        int second_abs = abs(o2);
        if (first_abs == second_abs) {
            return o1 > o2;
        }
        else {
            return first_abs > second_abs;
        }
    }
};

int main() {
    // 입출력 최적화
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    priority_queue<int, vector<int>, compare> Q;

    int T;
    cin >> T;
    while (T--) {
        int request;
        cin >> request;
        
        if (request == 0) {
            if (Q.empty()) {
                cout << "0\n";
            }
            else {
                cout << Q.top() << endl;
                Q.pop();
            }
        }
        
        else {
            Q.push(request);
        }
        
    }
    return 0;
}
