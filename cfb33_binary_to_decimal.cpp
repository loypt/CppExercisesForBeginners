#include<iostream>
#include<cmath>

using namespace std;

int convert(long long);

int main(){
    long long n;
    cout << "Enter a binary number: ";
    cin >> n;

    cout << n << " in binary = " << convert(n) << " in decimal";
    return 0;
}

int convert(long long n) {
    int dec = 0, i = 0, remainder;

    while(n != 0){
        remainder = n % 10;
        dec = remainder*pow(2, i);
        n /= 10;
        i++;
    }

    return dec;
}