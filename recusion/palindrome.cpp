#include<bits/stdc++.h>
using namespace std;

bool pal(int i,string &s){
if(i>=s.size()/2)return true;
if(s[i]!=s[s.size()-i-1])return false;

return pal(i+1,s);
}


int main(){
string str="madsam";
cout << pal(0,str);
}
