// https://leetcode.com/problems/roman-to-integer/



#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;


// int romanToInt(string s) {
//         int value = 0;
//         int i = 0;
//         for (i ; i <= s.length() ; i++)
//         {
//             if(i != s.length())
//             {
//                 if (s[i] == 'I' && s[i+1] == 'V')
//                 {
//                   value += 4;
//                   i++;
//                 }
//                 else if (s[i] == 'I' && s[i+1] == 'X')
//                 {
//                     value += 9;
//                   i++;
//                 }
//                 else if (s[i] == 'X' && s[i+1] == 'L')
//                 {
//                   value += 40;
//                   i++;
//                 }
//                 else if (s[i] == 'X' && s[i+1] == 'C')
//                 {
//                     value += 90;
//                   i++;
//                 }
//                 else if (s[i] == 'C' && s[i+1] == 'D')
//                 {
//                   value +=400;
//                   i++;
//                 }
//                 else if (s[i] == 'C' && s[i+1] == 'M')
//                 {
//                     value += 900;
//                   i++;
//                 }
//                 else{
//                     if (s[i] == 'I')
//                     {
//                         value +=1;
//                     }
//                     else if (s[i] == 'V')
//                     {
//                         value +=5;
//                     }
//                     else if (s[i] == 'X')
//                     {
//                         value +=10;
//                     }
//                     else if (s[i] == 'L')
//                     {
//                         value +=50;
//                     }
//                     else if (s[i] == 'C')
//                     {
//                         value +=100;
//                     }
//                     else if (s[i] == 'D')
//                     {
//                         value += 500;
//                     }
//                     else if (s[i] == 'M')
//                     {
//                         value +=1000;
//                     }
//                 }
//             } else{
//                     if (s[i] == 'I')
//                     {
//                         value +=1;
//                     }
//                     else if (s[i] == 'V')
//                     {
//                         value +=5;
//                     }
//                     else if (s[i] == 'X')
//                     {
//                         value +=10;
//                     }
//                     else if (s[i] == 'L')
//                     {
//                         value +=50;
//                     }
//                     else if (s[i] == 'C')
//                     {
//                         value +=100;
//                     }
//                     else if (s[i] == 'D')
//                     {
//                         value += 500;
//                     }
//                     else if (s[i] == 'M')
//                     {
//                         value +=1000;
//                     }
//                 }
//         }
//         return value;
//     }

int romanToInt(string s) {
    unordered_map<char,int> mp{
        {'I',1},
        {'V',5},
        {'X',10},
        {'L',50},
        {'C',100},
        {'D',500},
        {'M',1000},
    };
    int ans =0;
    for(int i=0;i<s.size();i++){
        if(mp[s[i]]<mp[s[i+1]])
            ans-=mp[s[i]];
        else
            ans+=mp[s[i]];
    }
    return ans;
    
}

int main() {
    std::cout << romanToInt("MMMXLV");
}
