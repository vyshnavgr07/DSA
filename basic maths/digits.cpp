#include<iostream>
using namespace std;
int main(){
    int n;
    cout <<"enter the digit";
    cin >> n;
    while(n>0){
        int lastDigit=n%10;
       cout << "Last digit is: " << lastDigit << endl;
        n=n/10;
    }
    return 0;
}

