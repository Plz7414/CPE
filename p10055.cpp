#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {

int H=0,E=0;

while(cin >> H >> E){

if(H - E > 0){
 cout << H - E << endl;
}else cout << E - H << endl;

}

return 0;

}