// Wave array

#include<iostream>
using namespace std;
int main(){

    int a[] = {2,4,7,8,9,10};
    int n = sizeof(a)/sizeof(int);

    
    for(int i=0;i<n;i+=2){

        
        if(i>0 && a[i-1]>a[i]){
            swap(a[i],a[i-1]);
        }
       
        if(i<=n-2 && a[i+1]>a[i]){
            swap(a[i],a[i+1]);
        }

    }
    
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

return 0;
}
