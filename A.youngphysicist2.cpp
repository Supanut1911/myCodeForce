#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n <= 0)return 0;
    int xi,yi,zi;
    int sumx=0,sumy=0,sumz=0;

    for(int i=0;i<n;i++)
    {
            cin>>xi>>yi>>zi;
            sumx = sumx + xi;
            sumy = sumy + yi;
            sumz = sumz + zi;
    }
    if(sumx == 0 && sumy == 0 && sumz==0)cout<<"YES";
    else cout<<"NO";


    return 0;
}
