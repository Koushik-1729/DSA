#include<bits/stdc++.h>
using namespace std;
// the max size we declare in side main is 10**6;
//if we declare greater then 10**6 it will throw segmentation error

int main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];

  }
  int hash[13]={0};
  for(int i=0;i<n;i++)
  {
    hash[arr[i]]+=1;
  }
  int q;
  cin>>q;
  while(q--)
  {
    int number;
    cin>>number;
    cout<<hash[number]<<endl;
  }
  return 0;

}