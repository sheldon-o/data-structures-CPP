//given an array find the index of first and last occurence of an element

#include<iostream>
using namespace std;

int firstocc(int arr[],int n,int i,int key){
    if (i==n){
        return -1;
    }
    if (arr[i]==key){
        return i;
    }
    return firstocc(arr,n,i+1,key);
}

int lastocc(int arr[],int n,int i, int key){
    if(i==n){
        return -1;
         }
    int restarray=lastocc(arr,n,i+1,key);
    if(restarray!=-1){
        return restarray;
    }
    if (arr[i]==key){
        return i;

    }
    return -1;
}

int main(){
    int arr[]={2,1,3,4,5,3,6,5,7,3,7,8};
    cout<<firstocc(arr,12,0,3)<<endl;
    cout<<lastocc(arr,12,0,3);


}

