//best time to buy and sell a stock
#include <iostream>
using namespace std;

int main() {
    int price[10];
    int profit[9];
    int n;
    cout<<"enter the number of days:\n";
    cin>>n;
    cout<<"enter price of stock day wise:\n";
    for(int i=0;i<n;i++)
    {
       cin>>price[i];
    }
    
    for(int i=0;i<n;i++){
        if(i==0)
        profit[0]=0;
        else
        profit[i]=price[i]-price[i-1];
    }
    cout<<"profit for respective days are:\n";
    for(int i=0;i<n;i++){
        cout<<"day "<<i<<": "<<profit[i]<<"\n";
    }
    int temp[9];
    for(int i=0;i<n;i++){
        temp[i]=profit[i];
    }
    for(int i=0; i<n;i++)
    {
       for(int j=i+1;j<n;j++)
       {
          if(temp[j]<temp[i])
          {
             int temp1=temp[j];
             temp[j]=temp[i];
             temp[i]=temp1;
          }
       }
    }
    cout<<"profit in decreasing order\n";
    for (int i = 0; i < n; i++)
    {
        cout<<temp[i]<<"\n";
    }
    
    for(int i=0;i<n-1;i++){
        if(temp[n-1]==profit[i])
        {
            cout<<"Buy stock on "<<i<<" day and sell on "<<i+1<<" day";
        }
    }
}