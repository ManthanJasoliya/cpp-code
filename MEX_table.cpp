#include <iostream>
#include <algorithm>
using namespace std;
int mex_table(int n, int m) {
    return max(n, m) + 1;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        cout << mex_table(n, m) << endl;
    }
    return 0;
}
