#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
    int N, K;
    cin >> N >> K;
 
    if (N < 3) {
        cout << 0;
        return 0;
    }
 
    int groupsOf5 = N / 5;
    int leftover = N % 5;
    int tasks1 = 9 * groupsOf5 + 5 * (leftover / 3);
    int tasks2 = 0;
 
    if (groupsOf5 > 0) {
        tasks2 = 9 * (groupsOf5 - 1) + 5 * ((leftover + 5) / 3);
    }
 
    int maxTasks = max(tasks1, tasks2);
    int days = (K + maxTasks - 1) / maxTasks;
 
    cout << days;
    return 0;
}