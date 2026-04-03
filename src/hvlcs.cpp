#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;

/*
Problem Statement: 
You are given two strings A and B over a fixed alphabet. Each character in the alphabet has
a nonnegative integer value. Your task is to compute a common subsequence of A and B that
maximizes the total value, and to output both this maximum value and the corresponding
subsequence itself.

If a sequence C = c1c2 . . . ck is chosen, then its value is Val(C) where v(ci) is the value assigned to 
character ci. Your program must output both Val(C) and one optimal subsequence C.
*/

int main() 
{
    int K;
    cin >> K;

    unordered_map<char, int> Val;

    for (int i = 0; i < K; i++) 
    {
        char c;
        int v;
        cin >> c >> v;
        Val[c] = v;
    }

    string A, B;
    cin >> A >> B;

    int m = A.size();
    int n = B.size();

    // Stores values of common subsequence of A and B that maximizes the total value
    vector<vector<int>> M(m + 1, vector<int>(n + 1, 0));

    // Build 2D list for max weighted common subsequence
    for (int i = 1; i <= m; i++) 
    {
        // We visit every value of each sequence here
        for (int j = 1; j <= n; j++) 
        {

            if (A[i - 1] == B[j - 1]) 
            {
                M[i][j] = max({
                    M[i - 1][j],
                    M[i][j - 1],
                    M[i - 1][j - 1] + Val[A[i - 1]]
                });
            } 
            else 
                M[i][j] = max(M[i - 1][j], M[i][j - 1]);
            
        }
    }

    string finalAnswer = "";
    int i = m, j = n;

    while (i > 0 && j > 0) 
    {
        if (A[i - 1] == B[j - 1]) 
        {
            int match = M[i - 1][j - 1] + Val[A[i - 1]];

            // If current value came from matching A[i-1] and B[j-1], we use it
            if (M[i][j] == match) 
            {
                finalAnswer.push_back(A[i - 1]);
                i--;
                j--;
            } 

            // Otherwise we skip A and B
            else if (M[i - 1][j] >= M[i][j - 1]) 
                i--;
             
            else 
                j--;
            
        } 
        
        // Sequence chars do not match so either skip A or B
        else 
        {
            if (M[i - 1][j] >= M[i][j - 1]) 
            
                i--;
            else 
                j--;   
        }
    }

    reverse(finalAnswer.begin(), finalAnswer.end());

    cout << M[m][n] << "\n";
    cout << finalAnswer << "\n";

    return 0;
}