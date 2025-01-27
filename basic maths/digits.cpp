// extract number

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//      cout <<"enter the digit";
//     cin >> n;
//     while(n>0){
//         int lastDigit=n%10;
//        cout << "Last digit is: " << lastDigit << endl;
//        n=n/10;
//     }

//     return 0;
// }



//count of digits

// #include <iostream>
// #include <cmath> 
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;


//     int cnt = (int)(log10(n) + 1);
//     cout << "The number of digits is: " << cnt << endl;

//     return 0;
// }




//reverse of number ////////////

// #include <iostream>
// #include<cmath>
// using namespace std;
// int main(){
// int n;
// cout <<"enter the digits";
// cin >>n;
// int rev=0;
// while(n>0){
// int lastDigit=n%10; 
//  rev=(rev*10)+lastDigit;
// n=n/10;
// }

// cout<<rev;

// }


//palindrome


// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cout <<"enter a number";
// cin>>n;
// int dup=n;
// int rev=0;
// while(n>0){
//     int ld=n%10;
//     rev=(rev*10)+ld;
//     n=n/10;
// }
// if(dup==rev){
//    cout <<"palindrome";
// }else{
//      cout <<"not a palindrome";
// }
//     return 0;
// }



//amstrong

// #include <iostream>
// #include <cmath>
// using namespace std;
// int main(){
//     int n;
//     cout <<"enter a number";
//     cin>>n;
//     int dup=n;
//     int ams=0;
//     int count=(int)(log10(n)+1);
//     while(n>0){
//     int ld=n%10;
//      ams += pow(ld, count);
//     n=n/10;
//    }
//    if(ams==dup){
//     cout<<"amstrong";
//    }else{
//     cout<<"false";
//    }
// }





//find all the divisers 

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    vector<int> v;
    cin>>n;
    for(int i=1;i*i<=n;i++){
    if(n%i==0){
    v.push_back(i);
    if(n/i!=i){
        v.push_back(n/i);
    }
    }
    }

    sort(v.begin(),v.end());

    for(auto it:v)cout <<it <<" ";
}

