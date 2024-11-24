## Exercises

- Calculate the values of `tan(x)` where `x` is in radians in the range [0, 60] degrees, every five degrees. Place the results in an array. Print the array. Make the array a global variable.

  1. Use the function (or subroutine) from the third lecture in Week 4 to convert degrees to radians.
  2. Construct `main`, and in `main` have a loop where the loop counter iterates through 0, 1, 2, ..., 12.
  3. Use the loop counter to generate the degree angles.
  4. Use the function to generate the radian values.
  5. Compute `tan(x)`, and store it in the array.

- Create a function/subroutine that calculates the area under the curve of `tan(x)` from `0` to `60` degrees using the Trapezoidal Rule (similar to what was done last week).

- When compiling with C, use `#include <math.h>` and compile with `-lm`. This will ensure that the `tan` function is available.
## Code Instructions

### Compile and Run `trap.c` 
Use the following commands to compile and execute the code.


```{bash}
gcc trap.c -o Trap
./Trap
```

```
TanArr[0] = 0.000000
TanArr[1] = 0.087489
TanArr[2] = 0.176327
TanArr[3] = 0.267949
TanArr[4] = 0.363970
TanArr[5] = 0.466308
TanArr[6] = 0.577350
TanArr[7] = 0.700208
TanArr[8] = 0.839100
TanArr[9] = 1.000000
TanArr[10] = 1.191754
TanArr[11] = 1.428148
Initial area (sum at x(0) and x(12 = 0.000000))
The value of the sum after the loops is: 14.197204

 Trapezoidal result is: 0.619470
Real result is: 0.693147
```