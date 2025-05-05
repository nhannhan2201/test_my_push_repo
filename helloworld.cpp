#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;

  struct sinh_vien{
   int msv; 
   string ten;
   int ns;
   int gender;
   double dtb;
  };
  bool cmp1(sinh_vien a, sinh_vien b){
   return a.msv < b.msv;
  }
  bool cmp2(sinh_vien a, sinh_vien b){
   return a.dtb > b.dtb;
  }
int main() {
  int n; cin >> n;
  sinh_vien a[n];
  for (int i=0; i<n; i++){
   sinh_vien x;
    cin >> x.msv;
   cin.ignore();
   getline(cin, x.ten);
   cin >> x.ns >> x.gender >> x.dtb;
   a[i]=x;
  }
 sort(a, a+n, cmp1);
  for (auto x : a){
    cout << x.msv << " " << x.ten << " " << x.ns << " " << x.gender << " " << x.dtb << endl;
  }
  sort(a, a+n, cmp2);
  for (auto x : a){
    cout << x.msv << " " << x.ten << " " << x.ns << " " << x.gender << " " << x.dtb << endl;
  }
}