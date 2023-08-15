#include<iostream>
using namespace std;
void linearSearch(int a[], int n){
    int temp = -1;
    for(int i=0; i<n; i++){
        if(a[i]==n){
            cout<<"Element found at location: "<<i+1<<endl;
            temp = 0;
        }
    }  
    if(temp == -1){
        cout<<"Element not found"<<endl;
    }         
}
int main(){
    int num;
    int arr[5] = {1,2,3,4,5};
    cout<<"Please enter an element to search";
    cin>>num;
    linearSearch(arr,num);
    
    return 0;
}