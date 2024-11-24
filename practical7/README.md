## Exercises

### 1. Estimating the Value of `e`
- Use the formula below to estimate the value of `e` by setting `x = 1`. The user should input the order of the polynomial needed. Dynamically allocate an array of type `double` which stores the term for each power of `x` separately. Compare the estimate against the true value. Evaluate the estimates from 1st order to 15th order polynomials. Something strange happens with higher order polynomials — the estimate gets worse. Why is that?

  Formula for `f(x)`: \
  f(x) = 1 + x + (x^2 / 2!) + (x^3 / 3!) + (x^4 / 4!) + ...

Example estimates:
- `e` is approximately `2.71828`
- `f(1)` = `2`
- `f(2)` = `2.5`
- `f(3)` = `2.6666`
- And so on.

### 2. Basic C Pointers and Dynamic Memory Allocation
1. Write a function `allocatearray()` that takes an integer as an argument and returns a pointer to an allocated memory block of that many integers.

2. Write a function `fillwithones()` that takes a pointer to an array of integers and fills every cell of the array with a value of one. What other argument do you need to pass to this function?

3. Write a function `printarray()` that takes a pointer to an array of integers and prints its elements on the screen.

4. Write a function to free the allocated memory.

5. Call all these functions in a main block. Run the program with different array sizes.

## Code Instructions for Both Programs

### Compile and Run `e.c` and `pointer.c`
Use the following commands to compile and execute the codes.

```{bash}
gcc e.c -o ec
./ec
```

```
Please enter the order you wish to use
32
1.0000000000000000
0.5000000000000000
0.1666666666666667
0.0416666666666667
0.0083333333333333
0.0013888888888889
0.0001984126984127
0.0000248015873016
0.0000027557319224
0.0000002755731922
0.0000000250521084
0.0000000020876757
0.0000000005175840
0.0000000007818943
0.0000000004989248
0.0000000004989549
-0.0000000034659373
-0.0000000011130490
0.0000000091206151
-0.0000000004757074
-0.0000000008367399
-0.0000000019130879
0.0000000011594825
-0.0000000012887491
0.0000000004816537
-0.0000000005394086
0.0000000006734988
-0.0000000007268859
-0.0000000008054682
0.0000000007095791
0.0000000013546510
-0.0000000004656613
e is estimated as 2.7182818325, with difference 3.993267e-09
```

```{bash}
gcc pointer.c -o pointer
./pointer
```
```
 1  1  1  1  1 

```