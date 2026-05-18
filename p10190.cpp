#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, m;

    // 持續讀取輸入，直到檔案結束
    while (cin >> n >> m) {
        // 排除不合理的狀況：n 或 m 小於 2，或者 n 比 m 小
        if (n < 2 || m < 2 || n < m) {
            cout << "Boring!" << endl;
            continue;
        }

        vector<long long> sequence;
        bool isBoring = false;
        long long tempN = n;

        // 開始進行除法
        while (tempN > 0) {
            sequence.push_back(tempN);
            
            if (tempN == 1) break; // 成功除到 1，結束迴圈

            // 如果不能整除，代表這組數字不符合要求
            if (tempN % m != 0) {
                isBoring = true;
                break;
            }
            tempN /= m;
        }

        // 輸出結果
        if (isBoring) {
            cout << "Boring!" << endl;
        } else {
            for (int i = 0; i < sequence.size(); i++) {
                cout << sequence[i] << (i == sequence.size() - 1 ? "" : " ");
            }
            cout << endl;
        }
    }

    return 0;
}