#include <bits/stdc++.h>
using namespace std;

int main() {
    int T; 
    cin >> T; // 讀取有幾組測試資料

    for (int i = 1; i <= T; i++) {
        long long b, c;
        cin >> b >> c;

        // 將 b 調整為最小奇數
        if (b % 2 == 0) b++;
        // 將 c 調整為最大奇數
        if (c % 2 == 0) c--;

        long long sum = 0;
        if (b <= c) {
            long long n = (c - b) / 2 + 1; // 計算項數
            sum = (b + c) * n / 2;         // 等差數列公式
        }

        cout << "Case " << i << ": " << sum << endl;
    }
    return 0;
}