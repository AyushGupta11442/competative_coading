// https://practice.geeksforgeeks.org/problems/palindrome-string0817/1



int isPalindrome(string S)
{
    int mid = S.size() / 2;
    int start = 0;
    int end = S.size() - 1;
    while (start < mid) {
        if (S[start] != S[end]) {
            return 0;
        }
        start++; 
        end--;
    }
    return 1;

}