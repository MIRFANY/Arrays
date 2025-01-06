#include <iostream>
#include<climits>
using namespace std;

int main() {
    // your code here
    int arr[5]={2,4,5,6,7};
    int n=5;
    int max=INT_MIN;
    for(int i=0;i< n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }

    cout<<"The maximum element in the array is:"<<max;

    
    
    
    return 0;
}






// #include<iostream>
// #include<queue>
// #include<map>

// using namespace std;
// int main(){
//     map<int,string> m;
//     m[1]="Irfan";
//     m[2]="Yousuf";
//     m[3]="Mirfany";


//     m.insert( {5,"babbar"});
    
//     for(auto i:m){
//         cout<<i.first<<" "<<i.second<<endl;

//     }

//     cout<<"finding 13 ->" <<m.count(13)<<endl;

//     m.erase(3);
//     for(auto i:m){
//         cout<<i.first<<" "<<i.second<<endl;

//     }
// }
//     //max heap
//     priority_queue<int> maxi;

//     //min - heap

//     priority_queue<int,vector<int>, greater<int> > mini;

//     maxi.push(1);
//     maxi.push(3);
//     maxi.push(2);
//     maxi.push(0);

//     cout<<"size->"<<maxi.size()<<endl;

//     int n=maxi.size();
//     for(int i=0;i<n;i++){
//         cout<<maxi.top()<<" ";
//         maxi.pop();

//     }
//     cout<<endl;



// }










// #include <iostream>
// using namespace std;

// int main() {
//     // your code here
//     int n;
//     cin>>n;
//     int divisors=0;
//     for(int i=1;i<=n;i++){
//         if(n%i==0){
//             divisors++;
//         }
//     }
//     if(divisors==2){
//         cout<<"The number is a prime number.";
//     }
//     else
//     cout<<"The number is not a prime number!.";
    
    
//     return 0;
// }













// #include <iostream>
// using namespace std;

// int main() {
//     // your code here
//     int a,b;
//     cout<<"Enter the two numbers: in ascending order."<<endl;
//     cin>>a>>b;
//     int gcd=0;
//     for(int i=1;i<a;i++){
//         if(a%i==0 && b%i==0){
//             gcd=i;
//         }
//     }
//     cout<<"The gcd of the two is:"<<gcd;
    
    
    
//     return 0;
// }









// #include <iostream>
// using namespace std;

// int main() {
//     // your code here
//     int n;
//     cin>>n;
//     int dup=n;
//     int rev=0;
//     int ld=0;
//     while(n>0){
//         ld=n%10;
//         rev+=(ld*ld*ld);
//         n/=10;
//     }
//     if(rev==dup){
//         cout<<"It is an armstrong number.";
//     }
//     else
//     cout<<"Not!";

    
//     // cout<<"The reverse of the number is:"<<rev<<endl;
//     // if(rev==dup){
//     //     cout<<"It is a pallindrome.";
//     // }
//     // else
//     // cout<<"It's not a pallindrome.";
//     // return 0;
// }






// #include <iostream>
// using namespace std;

// int main() {
//     // your code here
//     int n;
//     cout<<"Enter the number:";
//     cin>>n;
//     int count=0;
//     while(n>0){
//         n=n/10;
//         count++;
//     }
//     cout<<"The number of digits in the number are:"<<count;
//     return 0;
// }



















// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     // your code here
//     int arr[5]={1,1,3,3,4};
//     int n=5;
//     set<int> st;
//     for(int i=0;i<n;i++){
//         st.insert(arr[i]);
//     }
    
    
    
//     return 0;
// }