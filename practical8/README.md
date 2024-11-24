## Exercises

### Greatest Common Divisor (GCD) Function
- Write a function that returns the Greatest Common Divisor (GCD) of a pair of integers passed as arguments. 
  - The GCD of two or more non-zero integers is the largest positive integer that divides both numbers without a remainder.
  - For example, the GCD of 8 and 12 is 4.
  
- A convenient way to find the GCD of two integers is to use the Euclidean algorithm, described by the following pseudo code: \
    GCD(a, b): while b ≠ 0 do temp = b b = a mod b a = temp end while return a

Another way to express this algorithm recursively is:

    gcd(a, b) = { a, if b == 0 gcd(b, a mod b), if b ≠ 0 }


### Instructions:
1. Use the given pseudo code to construct an **iterative** function that finds the GCD.
2. Construct a **recursive** function to do the same, using the formula provided below the pseudo code.
## Code Instructions

### Compile and Run `gcd.c` 
Use the following commands to compile and execute the code.

```{bash}
gcc gcd.c -o gcd
./gcd
```

```
Enter the 2 non- zero integers
8 12
GCD calculation using iteration 4
GCD calculation using recursion 4
```

