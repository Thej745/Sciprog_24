## Exercises

- Computing the area under the curve of f(x) where x ∈ [a, b] can be done using the Trapezoidal rule:

  Integral from a to b of f(x) dx ≈ (b - a) / (2 * N) * [ f(x_0) + 2*f(x_1) + 2*f(x_2) + ... + 2*f(x_N-1) + f(x_N) ]

  where x_0 = a and x_N = b, with N - 1 equidistant points between a and b.

- The integral is changed into a sum, using the values of the function at certain points. Increasing the number of points increases the accuracy.

- Find the integral of f(x) = tan(x) from 0 to π/3. Compare with the actual result:

  Integral from 0 to π/3 of tan(x) dx = log(2)

  1. Set a = 0 and b = π/3.
  2. Get the first part of the sum: tan(0) + tan(π/3). For C, use the `tan` function which is part of the math library. You used the math library in the last practical for `Conversion.c`. `tan` is available in FORTRAN by default.
  3. Create a loop that generates 11 equidistant points between 0 and π/3. Thus, N = 12, x_0 = a = 0, and x_12 = b = π/3.
  4. Change the loop so that you are adding 2 * tan(x_i) for each of the 11 points.
  5. Add that sum to the values of the endpoints and multiply by (b - a) / (2 * N).
  6. Compare this result against log(2); you should not be too far off.
## Code Instructions for Both Programs

### Compile and Run `trap.c` and `useprintf.c`
Use the following commands to compile and execute the codes.

```{bash}
gcc trap.c -o Trap
./Trap
```
```
The final value of the sum is: 0.695045
The actual value is: 0.693147
abs_diff is: 0.001898, rel-diff is: 0.002738%   
```

```{bash}
gcc useprintf.c -o useprintf
./useprintf
```
```
I would like the value of i1, that value is 10
Two ints 10 200 and two floats 1.1100 2.2222
```






