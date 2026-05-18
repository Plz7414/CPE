#include <bits/stdc++.h>

using namespace std;

int main(){

int I;

while(cin >> I && I != 0){

string b = bitset<32>(I).to_string(); // 轉成 32 位元字串
b.erase(0, b.find_first_not_of('0')); // 撇除開頭多餘的 0
if (b.empty()) b = "0";

int c = count(b.begin(),b.end(),'1');

cout << "The parity of " << b << " is " << c << " (mod 2)." << endl;

}

return 0;
}