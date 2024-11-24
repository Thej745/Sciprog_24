## Exercises

### 1. Matrix Multiplication Program
- Write a program to multiply two matrices, `C(n×q) = A(n×p) * B(p×q)`. The following steps will guide you through creating this program:

  1. Define the sizes of the matrices:
     - `n = 5`
     - `p = 3`
     - `q = 4`
  
  2. Declare three arrays `A`, `B`, and `C` of type `double` or `real`.
  
  3. Initialize matrix `C` to zero, and set:
     - `A[i][j] = i + j` 
     - `B[i][j] = i - j`
  
  4. Use a schematic representation to determine the elements of matrix `C` by performing matrix multiplication.
  
  5. Print out all three matrices (`A`, `B`, and `C`) with each row of the matrix on a separate line to the screen. Verify that you are generating the correct results.
  
  6. If you have time, create two separate files: one for `main` and one for the `matmult` function. The `matmult` function should return matrix `C` to `main`.
  
  7. Construct a Makefile that will compile the two files and generate an executable program.


## Code Instructions

### Compile and Run `trap.c` 
Use the following commands to compile and execute the code.

```{bash}
gcc main.c mm.c -o matmultC
./matmultC 
```
Matrix A: \
  0   1   2 \
  1   2   3 \
  2   3   4 \
  3   4   5 \
  4   5   6 \
Matrix B: \
  0  -1  -2  -3 \
  1   0  -1  -2 \
  2   1   0  -1 \
Matrix C: \
  5   2  -1  -4 \
  8   2  -4 -10 \
 11   2  -7 -16 \
 14   2 -10 -22 \
 17   2 -13 -28 
```
