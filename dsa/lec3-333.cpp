#include<iostream>
using namespace std;
int main(){
    int i,j,k,n;
    cin>>n;
    i=0;
    while(i<n){
        j=i;
        while(j<n){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i+=1;
    }
}