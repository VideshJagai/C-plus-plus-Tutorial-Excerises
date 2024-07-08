
/*
                        C++ String.
     Introduction to C++ String.
     
     A string is a library function in C++ that assists in execution all the string 
     related operations in the program .
     
     A 'string' data type is assigned to a variable contaning characters surrounded by 
     double quotations.
     
     Any continous characters assigned to variable are referred as String Variable.
     
         Syntax:
         
         Below is the syntax for the string data type:
         
                string(data type) trying (variable) = "Test" (Value assigned to the variable)
                
             

*/

     // let us see how we can change the character in the string given.
#include<iostream>
#include<vector>
#include<list>
using namespace std;


int main()
{
     string h = "Happy";
     cout <<"The output here is:"<< h <<endl;
     h[1]= 'A'; //constant char* 
     cout<< "The output here is:"<<h << endl;
     
     return 0;
}

