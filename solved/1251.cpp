#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

// 백준 9095
using namespace std;

int main() {
    
    // 입출력 최적화
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string str;
    cin >> str;
    
    string result = "{";
    int n = str.length();
    
    for (int i = 1; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            
            string s1 = str.substr(0, i);
            string s2 = str.substr(i, j - i);
            string s3 = str.substr(j);
            
            reverse(s1.begin(), s1.end());
            reverse(s2.begin(), s2.end());
            reverse(s3.begin(), s3.end());
            
            string temp = s1 + s2 + s3;
            
            if (temp < result) {
                result = temp;
            }
            
        }
    }
    cout << result << endl;
    
    
    
    
    
    
    return 0;
}
