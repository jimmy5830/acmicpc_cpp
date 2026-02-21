#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    // 입출력 최적화
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, k;
    cin >> n >> k;
    
    int Max = 0;
    
    vector<long long> A(n);
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    sort(A.begin(), A.end());
    
    long long total_exp = 0;
    long long active_stones = 0;
    
    for (int i = 0; i < n; i++) {
        total_exp += active_stones * A[i];
        
        if (active_stones < k) {
            active_stones++;
        }
    }
    cout << total_exp << endl;
}
