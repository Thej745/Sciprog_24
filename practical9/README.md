## Exercises

### Magic-Square Problem
A magic square is defined as a square matrix with integer elements where every row, column, and main diagonal have the same sum.

1. Implement a function `isMagicSquare` in the file `magic_square.h` or `magic_square.fh` to check whether a given matrix is magic. 
   - The function should take the matrix as input and verify whether every row, column, and the main diagonals all sum to the same value `M`.

2. Also, implement the `main` function in the file `main.c` or `main.f90` to receive the matrix.

3. Read the matrix from a file named `magic_square.txt` or `not_magic_square.txt`. 
   - Note that you will need to read in the size `n` of the matrix first, before reading the matrix elements.
   - Arrange the input in the file however you like, as long as it is read correctly by the program.

4. After reading the matrix, check if it is a magic square.

## Code Instructions

### Compile and Run `main_stub.c` 
Use the following commands to compile and execute the code.

```{bash}
gcc main_stub.c -o out
./out
```

```
Enter file name: magic_square.txt
No. lines, 3
This is magic

Enter file name: not_magic_square.txt
No. lines, 3
This is not Magic
```