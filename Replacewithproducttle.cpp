#include <iostream>
#include <vector>
using namespace std;

#define ll long long int

ll multiplier(ll a, ll b, vector<ll>& k) {
    ll p = 1;
    for (ll i = a; i <= b; i++) {
        p *= k[i];
    }
    return p; 
}

ll adder(ll a, ll b, vector<ll>& k) {
    ll p = 0;
    for (ll i = a; i <= b; i++) { 
        p += k[i];
    }
    return p; 
}

int main() {
    

          ll n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        ll l = 0;
        ll r = 0;
        ll sum = 0;

        for (ll i = 0; i < n; i++) {
            sum = sum + a[i];
        }

        ll max_change = 0; 

        for (ll i = 0; i < n; i++) {
            for (ll j = i; j < n; j++) {
                ll k = sum - adder(i, j, a) + multiplier(i, j, a);
                if (k > max_change) {
                    max_change = k;
                    l = i;
                    r = j;
                }
            }
        }

        cout << l + 1 << " " << r + 1 << endl; 
        return 0;
    }

    

