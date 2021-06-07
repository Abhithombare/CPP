#include<iostream>
using namespace std;
int main(){
    int a,m,temp=0;
    cin>>a;
    int arr[100];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    cout<<"which number you want to search ";
    cin>>m;
    for(int i=0;i<a;i++){
        if(arr[i]==m){
            cout<<"Number "<<m<<" is found at index of "<<i+1<<"\n";
            temp=1;
            break;
        }
    }
    if(temp==0){
        cout<<"Number is not found";
    }
}

/*
Output :
5 
10 20 30 40 50
which number you want to search 40
Number 40 is found at index of 4
*/