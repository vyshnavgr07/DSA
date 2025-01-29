// #include<bits/stdc++.h>
// using namespace std;

// void recur(int i,int sum){
// if(i<=0){
//     cout<<sum;
//     return;
// }
// recur(i-1,sum+i);

// }

// int main(){
//     int n;
//     cin>>n;
//     recur(n,0);

// }


#include<bits/stdc++.h>
using namespace std;

int recur(int n){
if(n==0) return 0;
return n+recur(n-1);
}
int main(){
int n;
cin >>n;
cout <<recur(n);
}