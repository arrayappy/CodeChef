/*
 * Created : 2020-01-25 09:41:09
 * Author : Appala Naidu Gadu
 * Handle : arrayappy
 * Email : arrayappy@gmail.com
 * StopStalk : https://www.stopstalk.com/user/profile/arrayappy
 * Motto : Keep Calm and Code On.
 */
#include<bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
  int readTestCases;
  cin >> readTestCases;
  for (int i = 0; i < readTestCases; i++) {
    long long int num, a, b, c, distance = INT_MAX, friends, minDistance, final;
    cin >> num >> a >> b >> c;
    for (int j = 0; j < num; j++) {
      cin >> friends;
      minDistance = abs(friends - b) + abs(friends - a);
      if (distance > minDistance)
        distance = minDistance;
    }
    final = distance + c;
    cout << final <<"\n";
  }
  return 0;
}
