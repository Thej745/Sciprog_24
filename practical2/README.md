# Exercise Instructions

## Part 1: Floating Point and Integer Presentation

1. Compile and run the program `Conversion.c` (for C) or `Conversion.f90` (for Fortran).
2. Notice that, as explained in the lectures, floating point and integer representations do not always give correct results.
3. Analyze:
   - How many binary digits are there in the number?
   - How many binary digits can a float/real represent?
4. Construct an expression in the code to check the number of binary digits.
   - For C: Use the function `logf` from the math library.
   - For FORTRAN: Use the intrinsic function `log`.

## Part 2: Summation

1. Use the program `Sum.c` (for C) or `Sum.f90` (for Fortran).
2. Complete the code to calculate the sum: \
1 + 1/2 + 1/3 + 1/4 + ... + 1/1000
3. Print out the difference between two computed sums (`sum1` and `sum2`).
4. Analyze:
   - Is there a difference between `sum1` and `sum2`?
   - Are the two sums mathematically equivalent?

---

## Code Instructions for Both Programs

### Compile and Run `Conversion.c` and `Sum.c`
Use the following commands to compile and execute the codes.

```bash
# For Conversion.c
gcc Conversion.c -o conversion 
./conversion
```

```
The number of digits is 25
inum=33554431,  fnum=33554432.000000, inum in binary=1111111111111111111111111
```
```bash
# For Sum.c
gcc Sum.c -o Sum
./Sum
```

```
 Sum1=7.485478
 Sum2=7.485472
 Difference between the two is 0.000007
```