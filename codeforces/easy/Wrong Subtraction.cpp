#include<iostream>

using namespace std;

int main() {
    int a , k ;
    cin>> a >> k;
    while (k && (a >=0) ){
        if(a % 10 == 0){
            a /= 10 ;
        }
        else{
            a -= 1;
        }
        k--;
    }
    cout<<a;
}