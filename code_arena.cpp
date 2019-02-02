#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
#include<utility>
#include<map>
#include<queue>
#include <cstdlib>
#include <climits>
#include<iostream>
#include <sstream>  // for string streams
#include <string>  // for string

#define ll long long
#define pb push_back
#define inf (int)1e9
#define f(n) for(ll i=0;i<n;i++)
#define fn(a,n) for(ll a=0; a<n; a++)
#define flr(a,l,r) for(ll a=l; a<=r;a++)
#define mp make_pair
//#define p(n) cout<<n<<"\n";
#define MOD 1000000007

using namespace std;

//custom functions

ll power(ll x, ll y, ll p = MOD)
{ 
    ll res = 1;      // Initialize result 
  
    x = x % p;  // Update x if it is more than or  
                // equal to p 
  
    while (y > 0) 
    { 
        // If y is odd, multiply x with result 
        if (y & 1) 
            res = (res*x) % p; 
  
        // y must be even now 
        y = y>>1; // y = y/2 
        x = (x*x) % p;   
    } 
    return res; 
} 

void printArr(ll a[], int n) {
    f(n)
        cout << a[i] << " ";
    cout << endl;
}

void printVector(std::vector<ll> v) {
    f(v.size())
        cout << v[i] << " ";
    cout << endl;
}

//custom functions end

int main() {

    //Using text files for input output
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    //FastIO
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    // start your code here
    cout << "Hello World";
    


    return 0;
}