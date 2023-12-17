// https://leetcode.com/problems/merge-strings-alternately/description/?envType=study-plan-v2&envId=leetcode-75

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string toreturn;
        int wp1 = 0;
        int wp2 = 0;
        while (wp1 != word1.size() || wp2 != word2.size()){
            if(wp1 != word1.size()){
                toreturn += word1[wp1];
                wp1++;
            }
            if(wp2 != word2.size()){
                toreturn += word2[wp2];
                wp2++;
            }
        }
        return toreturn;
    }
};