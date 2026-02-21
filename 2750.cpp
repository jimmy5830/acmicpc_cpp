#include <iostream>
#include <queue>

using namespace std;

int main() {
    // 입출력 최적화
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    cin >> N;
    int array[100];
    
    for (int i = 0; i < N; i++) {
        cin >> array[i];
    }
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            if (i < j) {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    for (int i = 0; i < N; i++) {
        cout << array[i] << endl;
    }
    
    return 0;
}
