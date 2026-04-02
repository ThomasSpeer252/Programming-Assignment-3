Thomas Speer | UFID: 80978847
--
Paulina Gonzalez-Brito | UFID: 14734443
--
##Programming Assignment: Highest Value Longest Common Sequence
--
#Problem Statement
You are given two strings A and B over a fixed alphabet. Each character in the alphabet has
a nonnegative integer value. Your task is to compute a common subsequence of A and B that
maximizes the total value, and to output both this maximum value and the corresponding
subsequence itself.
If a sequence C = c1c2 . . . ck is chosen, then its value is
Val(C) =
kX
i=1
v(ci),
where v(ci) is the value assigned to character ci. Your program must output both Val(C)
and one optimal subsequence C.
Input Format
The input is given in the following format:
K
x1 v1
x2 v2
...
xK vK
A
B
• K is the number of characters in the alphabet.
1
• Each of the next K lines contains a character and its value.
• A is the first string.
• B is the second string.
Output
Print: (a) a single integer: the maximum value of a common subsequence of A and B.
(b) On the next line, one optimal common subsequence that achieves this value. If multiple
optimal subsequences exist, you may output any one of them.
Worked Example
Consider the following input:
3
a 2
b 4
c 5
aacb
caab
Output:
6
aab
Verification:
Val(aab) = 2 + 2 + 4 = 6.
This example illustrates both how the optimal value is computed and how one optimal
subsequence is reconstructed.
Requirements
Your program must:
1. Read the alphabet values and the two strings.
2. Compute the maximum value of a common subsequence.
3. Reconstruct one optimal subsequence.
4. Output both the value and the subsequence.
2
Question 1: Empirical Comparison
Use at least 10 nontrivial input files (i.e., contain strings of length at least 25). Graph the
runtime of the 10 files.
Question 2: Recurrence Equation
Give a recurrence that is the basis of a dynamic programming algorithm to compute the
HVLCS of strings A and B. You must provide the appropriate base cases, and explain why
your recurrence is correct.
Question 3: Big-Oh
Give pseudocode of an algorithm to compute the length of the HVLCS of given strings A
and B. What is the runtime of your algorithm?
Submission and Deliverables (GitHub)
As previously done, you will submit your work as a GitHub repository on Canvas. Only
one of the partners should submit if you are doing the assignment in partners. Your repository
must include:
1. All Source code needed to compile and run your method.
2. Example inputs and outputs:
• At least one example input file (e.g., example.in) and the corresponding expected
output file(s) (e.g., example.out).
• Your README must point to these files and explain how to reproduce the output.
3. README.md (required) containing:
• Student(s) names and UFID(s) (numbers).
• Instructions to compile/build your code (if applicable).
• Instructions to run the code that runs each of the eviction policies, including
example commands.
• Any assumptions (input/output format, dependencies, etc.).
• Your solution to the written component, i.e., Questions 1, 2, and 3.
4. Organized repository structure:
• Use a clean layout (e.g., src/, data/, tests/).
• Meaningful filenames; do not submit an unstructured dump of files.
5. Reproducibility:
3
• A grader must be able to git clone the repository and follow the README to
compile (if needed) and run your programs without additional steps.
