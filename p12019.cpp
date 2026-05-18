#include <bits/stdc++.h>

using namespace std;

int main() {
    int T, M, D;
    
    vector<string> Day = {
        "Saturday", "Sunday", "Monday", "Tuesday", 
        "Wednesday", "Thursday", "Friday"
    };

    // 直接算個月份的全體總天數
    int monthOffset[] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};

    if (!(cin >> T)) return 0;

    while (T--) {
        cin >> M >> D;
        
        // 計算總共過了幾天
        // 總天數 = 該月之前的累積天數 + (D - 1)
        int totalDays = monthOffset[M - 1] + (D - 1);
        
        // 對 7 取餘數即為 Day 陣列的索引
        cout << Day[totalDays % 7] << endl;
    }

    return 0;
}