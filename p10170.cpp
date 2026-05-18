#include<bits/stdc++.h>
using namespace std;

int main(){

long long int S,D;

while(cin >> S >> D){
long long int d=1;

if(S>=1 && S<=10000 && D>=1 && D<=1000000000000000){

while(d <= D ){
for(int i=0; i<S;i++){
d++;
}
S++;
}

cout << S-1 << endl;

}else break;
}

return 0;
}