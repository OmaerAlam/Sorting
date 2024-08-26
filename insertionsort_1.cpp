#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main()
{
    optimize();

    vector<int> v = { 3, 2, 1, 2, 1, 3 };
    int n = v.size();

    for ( int step = 1; step < n; step++ ) {
        int key = v[step];
        int i = step-1;

        while ( i >= 0 && v[i] > key ) {
            v[i+1] = v[i];
            i--;
        }

        v[i+1] = key;

        cout << "step : " << step << " -> ";
        for ( auto u : v ) cout << u << " ";
        cout << endl;
    }


    for ( auto u : v ) cout << u << " ";
    cout << endl

return 0;
}

