
/*
                        C++ Reverse Number in C++
    
     Logics of Reverse Number in C++.   
     
     Modulues (%) sign is used to find the reverse of the given number. The logic for a reverse
     number is as follows:
     
        1) Initialise a reverse number to 0.
        2) Multiply the reverse number by 10.
        3) Divide given number and find modulus.
        4) Add Modulus to the correpounding reverse number.
        5) Output step four.
        6) Divide the given number by 10 respectively.
        7) Repeat the step from 2 t0 6 until the output comes accordingly..
         

*/

     // Find Reverse Number in C++ Using While Loop

     #include<iostream>
     #include<vector>
     #include<list>
     #include<cstring>
     using namespace std;
     
     
     
     int main()
     {
     int i,remainder_number, number, reverse_number=0;
     cout<<"Enter a number to reverse value: ";
     cin>> number;
     
     for(i=number;i>0;)
     {
         reverse_number = reverse_number*10;
         remainder_number = i%10;
         reverse_number = reverse_number + remainder_number;
         i=i/10;
         
     }
     
     cout << "Reverse of entered number is: ";
     cout <<  reverse_number; //print reverse value
     
     return 0;
     }
     
     
     int reverse(int number)
     {
         static int reverse_number = 0;
         
         if(number==0)
         return 0;
         
         reverse_number = reverse_number*10;
         reverse_number = reverse_number + number%10;
         reverse(number/10);
         
         return reverse_number;
     }
     
     
    /*
            
         
         
    */

