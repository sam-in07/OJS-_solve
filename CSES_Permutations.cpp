#include<bits/stdc++.h>
using namespace std;
// ae shala tur saban slow ken0  
typedef long long ll;
#define ami                ios_base::sync_with_stdio(false);
#define life                cin.tie(__null);
#define boye                  cout.tie(__null) ;
#define sv(v)                    v.begin(), v.end()
#define svr(v)                    v.rbegin(), v.rend()
#define ma                      map<ll,ll> 
#define pa                    pair<ll,ll>
#define sa                  set<ll>
#define yesss                     cout << "YES\n";
#define noooo                   cout << "NO\n";
#define se                    ' '
#define testcase                ll tt  ;  cin>> tt  ;  while (tt --)
#define fn(a,b,i)                for (ll i = a; i < b; i++)
#define ffn(a,b,i)                for (ll i = a; i <=b; i++)
#define back(a,b,i)                 for(ll i = a ; i>=b ; i-- )
#define nina_fortner            freopen("input.txt", "r", stdin);  freopen("output.txt", "w", stdout);
//former ex "wing commmander" 3rd divison BAFA   wing commander cha_man

bool has_one(const vector<int> &elements) {
    return find(elements.begin(), elements.end(), 1) != elements.end();
}

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}


void her_husband() {
    ll i , n  ;
    cin >> n ;
   
    if(n==3  or n == 2 ) {
         cout << "NO SOLUTION" << endl;
    }
    else if(n==4){
        cout << 2 << " " << 4 << " "  << 1 << " "  << 3 ;
    }
    else {
     vector<ll> v1, v2 ;
    ffn(1,n,i) {
       if(i%2==0) {
        v1.push_back(i);
       }
       else 
       v2.push_back(i);
    }
    sort(v1.rbegin(), v1.rend()) ;
    sort(v2.rbegin(), v2.rend());
    ll m = v1.size();
    ll k = v2.size();
    fn(0,m,i) {
        cout << v1[i] << " " ;
    }
    fn(0,k,i) {
        cout << v2[i] << " " ;
    }
    
  cout << endl;
   }
}

int main() {
 
 ami life boye
 

    #ifndef  ONLINE_JUDGE
     nina_fortner
    #endif 

   {
      
       
       her_husband();
     
      
       
      
  
 
      }
 
 
 
return 0;
   
 
 
 
   }   



















