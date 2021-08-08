#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < n; i++)
#define mod 1000000007
#define pb push_back
#define ff first
#define ss second
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<ii>
#define ll long long 
#define INF 1e18
#define nl '\n'
const double PI = 3.141592653589793238460;
typedef std::complex<double> Complex;
typedef std::valarray<Complex> CArray;
using namespace std;

//Stars and bars technique used for 
//a+b+c+d+e=N type equations

//We just partition the given constraint and use sticks to separate them
//For non negative solutions
// solution is nCr(n+k-1,k-1)

// for lower bound solutions
//solution is nCr(n-lb,k-1) 


ll nCr(ll n , ll k){
    if (k>n-k)
        k=n-k;
    ll ans=1;
    for(int i=1;i<=k;i++){
        ans*=(n-i+1);
    }
    for(int i=1;i<=k;i++)
        ans/=i;
    return ans;

}
void solve(){    
    ll n,k;
    cin>>n>>k;
    cout<<nCr(n-1,k-1)<<nl;  
}   
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);    
    cout<<fixed<<setprecision(10);
    int T=1;
    cin>>T;
    while(T--)
    solve();
}       
