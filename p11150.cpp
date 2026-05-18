#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    
    while (cin >> n) {
     int t = n; // t 代表總共喝掉的數量 (Total)
     int e = n; // e 代表目前的空瓶數量 (Empty bottles)

        
        for (int i = 0; e >= 3; i++) {
         int a = e / 3;    // a 是這次能換到的新可樂數量
         t += a;           // 把新換到的加進總喝掉數量
         e = a + (e % 3);  // 更新空瓶：新換的喝完後的空瓶 + 剩下的不足3個的空瓶
        }

        // 如果最後剩下 2 個空瓶，可以借 1 瓶
        if (e == 2) {
            t += 1;
        }

        cout << t << endl;
    }
    return 0;
}