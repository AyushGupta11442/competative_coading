// https://www.geeksforgeeks.org/problems/parenthesis-checker2744/1

#include<iostream>

#include<string>
#include<stack>
using namespace std;


class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        if(x.size() == 1 ) return false;
        stack<char> stack ;
        for(char b : x){
            if (b == '('){
                stack.push(b);
            }else if( b == '{'){
                stack.push(b);
            }else if(b == '['){
                stack.push(b);
            }else if(b == ')' && !stack.empty() && stack.top() == '('){
                stack.pop();
            }else if(b == '}' &&!stack.empty() && stack.top() == '{'){
                stack.pop();
            }
            else if(b == ']' && !stack.empty() &&stack.top() == '['){
                stack.pop();
            }else{
                return false;
            }
        }
        if (stack.empty()){
            return true;
        }else
        {
            return false;
        }
    }

};