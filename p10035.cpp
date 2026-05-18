#include<bits/stdc++.h>

using namespace std;

int main() {
long long int n,m;
while(cin >> n >> m && n!=0 && m!=0){
long long int c=0,s=0; //c是進位幾次 s是進位後的1像是19+11=30個位數+完會進位十位數+1和原本的1->3
while(n > 0 || m > 0 || s > 0){
int t= n%10+m%10+s; //計和
if (t>=10) c++; //過10計一次
s=t/10; 
n/=10; //下一位
m/=10; //下一位
}
if(c==0) cout << "No carry operation." << endl;
else if (c==1) cout << c << " carry operation." << endl;
else cout << c << " carry operations." << endl;
}

return 0;
}