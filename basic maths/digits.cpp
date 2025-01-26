// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     int count=0 ;
//     cout <<"enter the digit";
//     cin >> n;
//     while(n>0){
//         int lastDigit=n%10;
//        cout << "Last digit is: " << lastDigit << endl;
//         count++;
//         n=n/10;
//     }
//     cout<<"total number is "<<count;
//     return 0;
// }

#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;


    int cnt = (int)(log10(n) + 1);
    cout << "The number of digits is: " << cnt << endl;

    return 0;
}
