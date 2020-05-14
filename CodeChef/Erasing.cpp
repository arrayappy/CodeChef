/*
 * Created : 2020-02-12 09:41:09
 * Author : Appala Naidu Gadu
 * Handle : arrayappy
 * Email : arrayappy@gmail.com
 * StopStalk : https://www.stopstalk.com/user/profile/arrayappy
 * Motto : Keep Calm and Code On.
 */
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int readTestCases;
  cin >> readTestCases;
  while (readTestCases--) {
    ll n, S = 0;
    cin >> n;
    ll A[n], B[n];
    for (ll i = 0; i < n; i++) {
      cin >> A[i];
    }
    for (ll i = 0; i < n; i++) {
      cin >> B[i];
    }
    sort(A, A + n);
    sort(B, B + n);
    while (n--) {
      S += min(A[n], B[n]);
    }
    cout << S << endl;
  }
  return 0;
}
