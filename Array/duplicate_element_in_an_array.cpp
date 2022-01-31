
 // first  method  with O(nlogn)+n complexity.

#include<bits/stdc++.h>
using namespace std;
int main(){
int n ;
cin>>n;
vector<int> p;  
 int arr[n];

 for (int i = 0; i < n; i++)
 {
     cin>>arr[i];

 }
 //first sort the whole array 
 sort(arr,arr+n);

 //compare each of the ith element with (i+1)th if both are equal that elemet is present twice in an array
 for (int i = 0; i < n-1; i++)
 {
    if(arr[i]==arr[i+1]){
        cout<<arr[i]<<endl;
    }                                                     
     else
     {
          cout<< " no duplicate element present in an array"<<endl;
     }

return 0;
}












//second method   with O(n) complixity 
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
int nums[5]={1,3,4,4,2};
        //  0 1 2 3 4
//   int n=arr.size();
         int arr[5];
        for( int i=0;i<5;i++){
               arr[i]=-1;
               cout<<arr[i];
        }
        // -1 0 -1  1 -1 
        // 0  1  2  3  4
        for( int i=0;i<5;i++){
            if(arr[nums[i]]>-1){
                cout<<"yes"<<" ";
                cout<<i<<endl;
            }
            
            arr[nums[i]]=i;
              cout<<arr[nums[i]]<<endl;
        }
        // cout<<"-1"<<endl;
      
        }
*/




