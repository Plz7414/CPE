#include <bits/stdc++.h>
using namespace std;
int main(){
int n,m;
while(cin>>n>>m){
int b=0;
cout << n << " " << m;
if(n>m){
int t = n;
n=m;
m=t;
}
for(n;n<=m;n++){
int c=1;
int a=n;
while(a!=1){
if(a%2 != 0){
c++;
a=a*3+1;
}else {
c++;
a=a/2;
}
}
if(c>b){
b=c;
}
}
cout << " " << b << endl;
}
return 0;
}