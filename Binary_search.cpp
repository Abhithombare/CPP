#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int low,high,mid,n,m,temp=0;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Which number you want to search ";
    cin>>m;
    sort(arr,arr+n);
    low=0;
    high=n-1;
    mid=(high+low)/2;
    while(low<=high){
        mid=(high+low)/2;
        if(arr[mid]==m){
            cout<<"Number "<<m<<" is found at index of "<<mid+1<<"\n";
            temp=1;
            break;
        }
        if (arr[mid] < m){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
        
    }
    if(temp==0){
        cout<<"Number is not found\n";
    }

}

/*
Output-
5
10 20 30 40 50
Which number you want to search 20
Number 20 is found at index of 2
*/