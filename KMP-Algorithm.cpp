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

//KMP algorithm 
//We basically check check each previous (perfect suffix
// and perfect prefix ) data

void solve(){    
    ll n;
    cin>>n;
    string s;
    cin>>s;
    vector<ll>pi(n);
    for(int i=1;i<n;i++){
        ll j=pi[i-1];
        while(j>0 and s[i]!=s[j]){
            j=pi[j-1];
        }
        if (s[i]==s[j])
            j++;
        pi[i]=j;
    }
    for(int i=0;i<pi.size();i++){
        cout<<pi[i]<<" ";
    }
    cout<<nl;
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
