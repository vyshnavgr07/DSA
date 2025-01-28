// #include<bits/stdc++.h>
// using namespace std;

// void recur(int lim){
//         if(lim<=0){
//             return ;
//         }

//         cout<<lim <<" ";

//         recur(lim-1);
//     }
// int main(){
//     int n;
//     cin>> n;
//     recur(n);
// }

// #include<bits/stdc++.h>
// using namespace std;

// void recur(int i,int lim){
    
//         if(i>lim){
//             return ;
//         }

//         cout<<i <<" ";

//         recur(i+1,lim);
//     }
// int main(){
//     int n;
//     cin>> n;
//     recur(1,n);
// }


// #include<bits/stdc++.h>
// using namespace std;

// void recur(int i,int lim){
    
//         if(i<1){
//             return ;
//         }

//         cout<<i <<" ";

//         recur(i-1,lim);
//     }
// int main(){
//     int n;
//     cin>> n;
//     recur(n,n);
// }


//back tracking  1-5

// #include<bits/stdc++.h>
// using namespace std;

// void recur(int i,int lim){
    
//         if(i<1){
//             return ;
//         }
//      recur(i-1,lim);
     
//         cout<<i <<" ";
//     }
// int main(){
//     int n;
//     cin>> n;
//     recur(n,n);
// }


//back tracking  5-1

#include<bits/stdc++.h>
using namespace std;

void recur(int i,int lim){
    
        if(i<1){
            return ;
        }
     recur(i-1,lim);
     
        cout<<lim-i+1<<" ";
    }
int main(){
    int n;
    cin>> n;
    recur(n,n);
}