// #include<bits/stdc++.h>
// using namespace std;


// void fact(int i,int f){
//     if(i<=0){
//         cout<<f;
//         return;
//     }
//     fact(i-1,f*i);
// }
// int main(){
// int n;
// cin >>n;
// fact(n,1);
// }


#include<bits/stdc++.h>
using namespace std;


int fact(int i){
    if(i==0){
     return 1;
    }
    return i*fact(i-1);
}
int main(){
int n;
cin >>n;
cout <<fact(n);
}