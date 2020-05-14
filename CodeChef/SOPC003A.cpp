/*
 * Created : 2020-01-01 09:41:09
 * Author : Appala Naidu Gadu
 * Handle : arrayappy
 * Email : arrayappy@gmail.com
 * StopStalk : https://www.stopstalk.com/user/profile/arrayappy
 * Motto : Keep Calm and Code On.
 */
#include<bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);    
  int x, num, c;
  float arr[num], b[num];
  cin >> x;
  for (int j = 0; j < x; j++) {
    c = 0;
    cin >> num;
    for (int p = 0; p < num; p++) {
      cin >> arr[p];
    }
    sort(arr, arr + num);
    for (int q = 0; q < num; q++) {
      for (int l = q + 1; l < num; l++) {
        if (arr[q] >= arr[l] / 2.0) {
          c++;
        }
      }
    }
    cout << c << endl;
  }
}