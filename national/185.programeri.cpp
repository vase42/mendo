#include <iostream>
#include <unordered_map>
using namespace std;
 
int main() {
    int N, K;
    cin >> N >> K;
     
    int M[N];
    for (int i = 0; i < N; i++) {
        cin >> M[i];
    }
     
    unordered_map<int, int> countMap;
    long long result = 0;
 
    if (K == 0) {
        for (int i = 0; i < N; i++) {
            countMap[M[i]]++;
        }
 
        for (auto& entry : countMap) {
            int count = entry.second;
            if (count > 1) {
                result += (long long)count * (count - 1) / 2;
            }
        }
    } else {
        for (int i = 0; i < N; i++) {
            if (countMap.find(M[i] + K) != countMap.end()) {
                result += countMap[M[i] + K];
            }
            if (countMap.find(M[i] - K) != countMap.end()) {
                result += countMap[M[i] - K];
            }
            countMap[M[i]]++;
        }
    }
     
    cout << result << endl;
     
    return 0;
}