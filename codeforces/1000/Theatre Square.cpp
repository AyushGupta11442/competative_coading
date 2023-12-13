#include <iostream>

using namespace std;

int main(){
    int lr , br , ss;
    cin>>lr >> br>> ss;
    int nl = (lr % ss != 0)? lr/ss++ :lr/ss ;
    int nb = (br % ss != 0)? br/ss++ :br/ss ;
    cout<<nl*nb;
}