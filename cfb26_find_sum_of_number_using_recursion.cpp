#include<iostream>
using namespace std;

int add(int num);

int main(){
    int n;
    cout << "Enter a positive number: ";
    cin >> n;
    
    cout << "Sum = " << add(n);

    return 0;
}

int add(int num){
    if(num != 0)
        return num + add(num-1);
    return 0;
}