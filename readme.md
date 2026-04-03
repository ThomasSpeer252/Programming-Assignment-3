Thomas Speer | UFID: 80978847
--
Paulina Gonzalez-Brito | UFID: 14734443
--
Programming Assignment: Highest Value Longest Common Sequence
--
Problem Statement
You are given two strings A and B over a fixed alphabet. Each character in the alphabet has
a nonnegative integer value. Your task is to compute a common subsequence of A and B that
maximizes the total value, and to output both this maximum value and the corresponding
subsequence itself.

<strong>Question 1: Empirical Comparison</strong>
Use at least 10 nontrivial input files (i.e., contain strings of length at least 25). Graph the
runtime of the 10 files.</br>
![](https://github.com/ThomasSpeer252/Programming-Assignment-3/blob/main/plot.PNG)

<strong>Question 2: Recurrence Equation</strong>
Give a recurrence that is the basis of a dynamic programming algorithm to compute the
HVLCS of strings A and B. You must provide the appropriate base cases, and explain why
your recurrence is correct.
</br></br>
A[1...i] = first i items of A</br>
B[1...j] = first j items of B</br>
</br>
Base Case: i=0 or j=0</br>
->OPT(i,j) = 0</br>
</br>
Case 1: A[i] = B[j]</br>
->OPT(i,j) = max{OPT(i-1, j), OPT(i, j-1), OPT(i-1, j-1) + V(A[i])}</br>
</br>
Case 2: A[i] != B[j]</br>
->OPT(i,j) = max{OPT(i-1, j), OPT(i, j-1)}</br>
</br>
Therefore the Recurrence Equation is:</br>
          </br>
<pre>           | 0                                                            i=0 or j=0</br>
OPT(i,j) = | max{OPT(i-1, j), OPT(i, j-1), OPT(i-1, j-1) + v(A[i])}         A[i] = B[j]</br>
           | max{OPT(i-1, j), OPT(i, j-1)}                                  A[i] != B[j]</pre></br>
          
</br>
Question 3: Big-Oh
Give pseudocode of an algorithm to compute the length of the HVLCS of given strings A
and B. What is the runtime of your algorithm?

