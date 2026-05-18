#include<bits/stdc++.h>


using namespace std;
int N=0,M=0;
//數字除以M的餘數由小到大排
bool cs(int a,int b){
int moda = a%M;
int modb = b%M;
if(moda != modb){
return moda < modb;
}
//排序中比較的兩數為一奇一偶且兩數除以M 的餘數相等，則奇數要排在偶數前面
bool isAodd = (a%2 != 0);
bool isBodd = (b%2 != 0);
if(isAodd != isBodd){
return isAodd;
}
//若兩奇數除以M餘數大小相等，則原本數值較大的奇數排在前面。
//同樣的，若兩偶數除以M餘數大小相等，則較小的偶數排在前面
if(isAodd){
return a>b;
}else return a<b;
}

int main(){

while(cin >> N >> M){
if(N == 0 && M == 0){
cout << "0" << " " << "0" << endl;
break;
}
vector<int> a(N);

for(int i=0;i<N; i++){
cin >> a[i];
}

sort(a.begin(),a.end(),cs);

cout << N << " " << M << endl;

for(int A:a){
cout << A << endl;
}

}

return 0;

}