#include <iostream>
using namespace std;
int main()
{      
    int n;
    cout<<"enter no";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=i;j>0;j--){
            cout<<j;
        }for(int j=2;j<=i;j++){
            cout<<j;

        }cout<<endl;
    }
}
/*enter no4
   1
  212
 32123
4321234*/