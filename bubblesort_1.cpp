#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main()
{
    optimize();

    vector<int> v = { 6, 3, 1, 5, 4, 2};
    int n = v.size();

    for ( int step = 0; step < n; step++ ) {
        bool isSorted = true;

        cout << "step : " << step << " -> ";
        for ( auto u : v ) cout << u << " ";
        cout << endl;

        for ( int i = 0; i < n-step-1; i++ ) {
            if ( v[i] > v[i+1] ) {
                swap ( v[i], v[i+1] );
                isSorted = false;
            }
        }

        if(isSorted) break;
    }

    for ( auto u : v ) cout << u << " ";
    cout << endl;



return 0;
}
