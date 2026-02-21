#include <iostream>
#inlcude <vector>

// 백준 11724
using namespace std;

static vector<vector <int>> A; // 이중 벡터, 인접 리스트
static vector<bool> visited;
void DFS(int v);


int main() {
    
    // 입출력 최적화
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, M;
    cin >> N >> M;
    A.resize(N + 1);
    visited = vector<bool>(N + 1, false);
    
    for (int i = 0; i < M; i++) {
        int s, e;
        cin >> s >> e;
        A[s].push_back(e);
        A[e].push_back(s);
    }
    
    int count = 0;
    
    for (int i = 1; i < M; i++) {
        if (!visited[i]) {
            count++;
            DFS(i);
        }
    }
    cout << count << endl;
}

void DFS(int i) {
    if (visited[v]) {
        return;
    }
    
    visited[v] = true;
    
    for (int i : A[v]) {
        if (visited[i] == false) {
            DFS(i);
        }
    }
}


