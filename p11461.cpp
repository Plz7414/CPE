#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, sum;
    while(cin >> a >> b && a!=0 && b!=0){
        sum = 0;
        for(int i=int(sqrt(a)); i<=sqrt(b); i++){   // 用sqrt可以省時間
            if(i*i>=a){
                sum++;
            }
        }
        cout << sum << endl;
    }
    return 0;
}