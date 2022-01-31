// Find minimum and maximum element in an array
   #include<bits/stdc++.h>
   using namespace std;
  void max_and_min(int arr[], int n){
   int maxno=INT_MIN;
   int  minno= INT_MAX;
   
   for( int i=0;i<n;i++){
        
        maxno= max(maxno,arr[i]);
        minno= min(minno,arr[i]); 
   }
   cout<<minno<<" "<<maxno;
  }
   int main(){
          
          int arr[5]={2,4,5,1,9};
          max_and_min(arr,5);
   return 0;
   }
  
   
