#include <bits/stdc++.h>
using namespace std;
using ll = long long;
struct P { ll x, y; };

ll sqdist(const P &a, const P &b) {
    ll dx = a.x - b.x, dy = a.y - b.y;
    return dx*dx + dy*dy;
}
ll dot(const P &a, const P &b) {
    return a.x*b.x + a.y*b.y;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    if(!(cin >> t)) return 0;
    while(t--){
        int l,r,d,u;
        cin >> l >> r >> d >> u;
        vector<P> pts = { P{-l, 0}, P{r, 0}, P{0, -d}, P{0, u} };

        vector<int> perm = {0,1,2,3};
        bool ok = false;
        do {
            // build ordered polygon q = pts[perm[0..3]]
            P q0 = pts[perm[0]];
            P q1 = pts[perm[1]];
            P q2 = pts[perm[2]];
            P q3 = pts[perm[3]];

            // compute edge vectors
            P v0{q1.x - q0.x, q1.y - q0.y};
            P v1{q2.x - q1.x, q2.y - q1.y};
            P v2{q3.x - q2.x, q3.y - q2.y};
            P v3{q0.x - q3.x, q0.y - q3.y};

            // squared lengths
            ll s0 = sqdist(q0, q1);
            ll s1 = sqdist(q1, q2);
            ll s2 = sqdist(q2, q3);
            ll s3 = sqdist(q3, q0);

            if (s0 == 0 || s1 == 0 || s2 == 0 || s3 == 0) continue; // degenerate

            if (s0 == s1 && s1 == s2 && s2 == s3) {
                // check right angles: dot(vi, v_{i+1}) == 0
                if (dot(v0, v1) == 0 && dot(v1, v2) == 0 &&
                    dot(v2, v3) == 0 && dot(v3, v0) == 0) {
                    ok = true;
                    break;
                }
            }
        } while(next_permutation(perm.begin(), perm.end()));

        cout << (ok ? "Yes\n" : "No\n");
    }
    return 0;
}
