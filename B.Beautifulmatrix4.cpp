
#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;


int main()
{
    int arr[5][5];
    int nowr,nowc;
    int row,column;
    int countmove = 0;

    for(int row=0;row<5;row++)
    {
        for(int column=0;column<5;column++)
        {
            cin>>arr[row][column];
        }
    }
    for(int row=0;row<5;row++)
    {
        for(int column=0;column<5;column++)
        {
            if(arr[row][column] == 1)
            {
                nowr = row;
                nowc =  column;
            }
        }
    }
    countmove = countmove + abs(nowr-2)+abs(nowc-2);
    cout<<countmove;



    return 0;
}
