
//1st method to reverse the string

/*
#include<iostream>
using namespace std;
int main(){

string str="sahil";

int len= str.size();

string s ="";
for( int i=len-1; i>=0;i--){
     
     s+=str[i];

}
cout<<s;

return 0;
}
*/



// 2nd method to reverse the string 

/*
#include<iostream>
using namespace std;
int main(){

string str="sahil";

int n= str.size();


for( int i=1; i<=n/2;i++){
     
     swap(str[i-1],str[n-i]);

}
cout<<str;

return 0;
}
*/





// 3rd method 
/*
#include<iostream>
using namespace std;
int main(){

     string str="lakshaybansal";

     int n= str.size();
     
     int s=0;
     int e=n-1;

     while( s<=e){
     
     swap(str[s],str[e]);
     s++;
     e--;
     }
     cout<<str;

return 0;
}
*/



// 4th method



#include<iostream>
using namespace std;

 void  reversestring( string &str, int start , int end ){
     
          if(start>=end){
               return ;
          }
        swap( str[start] , str[end] );
        start++;
        end--;
        reversestring( str ,start ,end);    
}

int main(){
 string str = "sahil";
  int n=str.size();
  reversestring( str,0,n-1) ;
 cout<<str;

return 0;
}
