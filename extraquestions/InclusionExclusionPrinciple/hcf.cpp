#include<iostream>
using namespace std;
int gcd(int a,int b){
    while(b!=0){
        int rem =a%b;
        a=b;
        b=rem;
    }
    return a;
}
int main(){
    int n,m;
    cin>>n>>m;
    cout<<gcd(n,m);

}