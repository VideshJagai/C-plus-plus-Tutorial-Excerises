
/*
      Lab Exercises...
     Sequence: 2,4,8,16,32
*/
 

#include <bits/stdc++.h>
#include<iomanip>
using namespace std;
    
     
     
     int main()
     {
         float prePrice, curPrice, Perc;
         
         
         cout<<"Enter the following previous prices: ";
         cin>> prePrice;
         cout<< endl;
         
         cout<<"Enter the current price:";
         cin>> curPrice;
         cout<< endl;
         
         if(curPrice>prePrice)
         {
             Perc = ((curPrice-prePrice)/prePrice) *100;
             cout<<"Increase/Profit Percentage:"<<Perc << endl;
         }
         else
            Perc=((prePrice-curPrice))/prePrice *100;
            cout<<"Decrease/Loss Percetage: "<< Perc << endl;
     
     
        return 0;
     }
     
    
     


