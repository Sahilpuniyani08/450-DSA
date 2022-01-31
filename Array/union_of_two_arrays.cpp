// first method
//   by loop.
/*
#include<bits/stdc++.h>
using namespace std;
            
    void union_array( int a[],int n, int b[],int m) {
       sort(a,a+n);
       sort(b,b+m);
       
       int i=0;
       int j=0;
       int count=0;
       
       while (i<n && j<m){
        if(a[i]>b[j]){
            j++;
        }
        else if(b[j]>a[i]){
            i++;
        }
        else{
            i++;
            j++;
        }
        count++;
        }
        
        while(i<n){
            // count+=n-i;
            count++;
            i++;
           
        }
       
         while (j<m){
            //  count+=n-i;
             count++;
             j++;
           
        }

   cout<<count<<endl;
 }
 
 int main(){

     int a[5]={2,6,3,8,1};
     int b[4]={2,1,4,5};
     union_array(a,5,b,4);
 }
 */




//    by set 

#include<bits/stdc++.h>
using namespace std;
int main(){

int n,m;
cin>>n>>m;
int a[n];
 int b[m];
 
for( int i=0;i<n;i++){
    cin>>a[i];
}
for( int j=0;j<m;j++){
    cin>>b[j];
}


 set<int> s;
 for( int i=0;i<n;i++){
    s.insert(a[i]);
}
 for( int j=0;j<m;j++){
    s.insert(b[j]);
}
   cout<< s.size()<<" ";
  



 
return 0;
}



