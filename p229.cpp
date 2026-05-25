#include<bits/stdc++.h>
using namespace std;

int main(){
    int N, L;
    cin >> N;
    while(N--){
        cin >> L;
        vector<int> a(L);
        for(int i = 0; i < L; i++){
            cin >> a[i];
        }

        // --- 這裡開始處理「換」的地方 ---
        int ans = 0; // 用來記錄交換次數
        
        // 泡沫排序法 (Bubble Sort)
        for(int i = 0; i < L - 1; i++){
            for(int j = 0; j < L - 1 - i; j++){
                // 如果前面的比後面大，就交換
                if(a[j] > a[j+1]){
                    swap(a[j], a[j+1]);
                    ans++; // 交換次數加 1
                }
            }
        }
        
        // 按照題目要求的格式輸出
        cout << "Optimal train swapping takes " << ans << " swaps." << endl;
        // ---------------------------------
    }

    return 0;
}