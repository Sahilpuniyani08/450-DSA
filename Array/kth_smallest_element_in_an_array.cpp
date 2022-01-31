
/*
#include <bits/stdc++.h>
using namespace std;
void kthSmallest(int arr[], int l, int r, int k)
{
    int n = r + 1;
    sort(arr, arr + n);

    cout << " the kth smallest element in an array is " << arr[k - 1];
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int k;
        cin >> k;
        //  kthSmallest(arr,0,n,k);

        priority_queue<int, vector<int>, greater<int>> p;

        for (int i = 0; i < n; i++)
        {
            p.push(a[i]);
        }

        int ans, i = 1;
        while (!p.empty())
        {
            if (i == k)
            {
                ans = p.top();
                break;
            }
            i++;
            p.pop();
        }
        cout << ans << endl;
    }
    return 0;
}
*/





/*
// max heap and min heap 
#include<bits/stdc++.h>
using namespace std;
int main(){

//  here i make a priority queue by default max heap cereated in c++.  
//  In max heap queue all the elements that i push in a queue take its position in a decreasing order max element at the top in  this priority queue 

// priority_queue<int> p;

//  In min heap queue all the elements that i push in a queue take its position in a increasing order min element  at the top in  this priority queue 
priority_queue <int,vector<int>,greater<int>> p;

p.push(10);
p.push(5);
p.push(20);
p.push(30);
p.push(50);

cout<<p.top()<<" ";
int i=0;

while(!p.empty()){
    cout<<p.top()<<" ";
    p.pop();

}
 return 0;
}

*/









