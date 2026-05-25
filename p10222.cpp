#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    // 建立一個長度為 256 的查表陣列，初始化為 0
    char decode_table[256] = {0};

    // 1. 定義鍵盤順序字串
    string kb = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";

    // 2. 初始化查表陣列：將鍵盤字串中的每個字元與其「左移兩格」的字元做映射
    // 注意：從索引 2 開始，因為前兩個字元（` 和 1）沒有左移兩格的對象
    for (int i = 2; i < kb.length(); i++) {
        decode_table[(int)kb[i]] = kb[i - 2];
    }

    char c;
    // 3. 逐字讀取並直接查表輸出
    while (cin.get(c)) {
        char low_c = tolower(c);
        
        // 如果查表陣列中有對應值（不為 0），則輸出解碼後的字元
        if (decode_table[(int)low_c] != 0) {
            cout << decode_table[(int)low_c];
        } else {
            // 空格、換行或不在表內的字元直接原樣輸出
            cout << c;
        }
    }

    return 0;
}
