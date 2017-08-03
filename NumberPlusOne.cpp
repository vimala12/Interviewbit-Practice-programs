Program REquirement:
Given a non-negative number represented as an array of digits,

add 1 to the number ( increment the number represented by the digits ).

The digits are stored such that the most significant digit is at the head of the list.

Example:

If the vector has [1, 2, 3]

the returned vector should be [1, 2, 4]

as 123 + 1 = 124.

 NOTE: Certain things are intentionally left unclear in this question which you should practice asking the interviewer.
For example, for this problem, following are some good questions to ask :
Q : Can the input have 0’s before the most significant digit. Or in other words, is 0 1 2 3 a valid input?
A : For the purpose of this question, YES
Q : Can the output have 0’s before the most significant digit? Or in other words, is 0 1 2 4 a valid output?
A : For the purpose of this question, NO. Even if the input has zeroes before the most significant digit.

Solution: 



#include <iostream>
#include<vector>

int main()
{
vector<int> A;
int a;
int size;
cin>> size;
while(size--!=0)
{
cin >>a;
A.push_back(a);
}
A = plusOne(A);
for(a=0;a<A.size();a++)
{
cout<< A[i] << " "
}
return 0;
}

vector<int> Solution::plusOne(vector<int> &A) {
    
    int carry =1;
    reverse(A.begin(),A.end());
    int i = A.size()-1; 
    while(A[i] == 0 && i!=0)
    {
        A.pop_back();
        i--;
    }
    for( i = 0 ;i<A.size();i++)
    {
        if (carry == 1)
        {
            A[i]+=1;
            if(A[i]>9)
            {
                A[i] =0;
                carry = 1;
            }
            else 
            {
                carry =0;
                break;
            }
        }
        
    }
    if (carry == 1)
    {
        A.push_back(1);
    }
    reverse(A.begin(),A.end());
   
   return A;
}
