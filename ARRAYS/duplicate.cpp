#include <iostream>
using namespace std;

int main() {
    // your code here
    int arr[5]={2,4,2 ,4,2};
    int n=5;
    int uniq=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
        if(i!=j && arr[i]==arr[j]){
            uniq=1;
        }
        }
    }
    if(uniq==1){
        cout<<"uniq found";
    }
    else
    cout<<"uniq not found!";
    return 0;
}