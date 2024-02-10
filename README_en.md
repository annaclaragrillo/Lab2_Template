# Algorithms and Abstract Data Types

## Lab 2 \| Exercises + Template

🇬🇧 [English version](README_en.md)

This repository was created from:

- <https://github.com/estsetubal-atad/CProgram_Template>

Consult the README if you have questions about its use.

------------------------------------------------------------------------

Goals:

- Implementation of search, selection and ordering;

- Doxygen Documentation.

- Debugging;

References:

- ATAD organization, documentation of the software used: <https://github.com/estsetubal-atad/Docs>

- TP slides, available on Moodle.

------------------------------------------------------------------------

💻 Clone this repository before moving forward.

### Level 1 (Estimated duration: &lt; 10min)

❗ The following functions must belong to a new module `arrays` .

1.  Define and implement function `arrayPrint` , which prints an array in `[a, b, c, d, <...>]` format to the console:

``` cpp
void printArray(int arr[], int arrLength) {
    printf("[ ");
    for(int i=0; i<arrLength; i++) {
        printf("%d%s", arr[i], (i < arrLength - 1 ? ", " : ""));
    }
    printf("]\n");
}
```

2.  Exemplify the use of this function in XYZ007, printing the array XYZ008; edit the makefile, compile and run the program.

### Level 2 (Estimated duration: ~25min)

3.  In the "arrays" module define and implement the `arrayFirstIndexOf` function:

    - Formal parameters: (i) `val` value to look for; (ii) a const array `arr` of integers; (iii) its size, and;

    - Return: integer - index in `arr` of the first occurrence of `val` ; `-1` if it does not exist.

4.  … define and implement the `arrayLastIndexOf` function - analogous to the previous function, but it returns the index of the last occurrence of `val` in the `arr` array.

5.  Test the result of these functions on the array `seq` instantiated in `main` .

    - Print the sequence `seq` ;

    - Ask the user - with function `readInteger` - the value to be searched;

    - Invoke the functions;

    - If the value does not exist, message `"Valor <val> não existe na sequência."` must be displayed to the user.

    - If it exists, it must present the indices (first and last) where the value occurs.

### Level 3 (Estimated duration: ~20min)

6.  In module `arrays` define and implement function `void arraySort(int arr[], int arrLength, bool ascending)` which aims to sort array `arr` . Note that:

    - If `ascending` is `true` , you must do an ascending sort; if `false` , you must do a descending sort.

    💡 You are free to use the algorithm you want (bubble or selection sort)

7.  Test the function on `main` and sort the `seq` array in both ways and display it.

### Level 4 (Estimated duration: ~20min)

❗ At this level we intend to apply/adapt the selection algorithm taught in TP to two-dimensional arrays (matrices).

💡 In the C language, the parameters that represent matrices must be represented in the form and order indicated below.

8.  In module "arrays" define and implement function `int matrixMaximumIndex(int m, int n, int mat[][n])` where:

    - `m` is the number of rows in the matrix;

    - `n` is the number of columns in the matrix;

    - `mat` is the two-dimensional array.

    - Returns the "index" where the highest value was found, as specified below; `-1` , in case `m` and `n` represent an empty matrix or one with invalid dimensions (eg, negative ones).

    Assuming you use a variable `i` for row traversing and `j` for columns, eg:

    ``` cpp
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            ...
    ```

    the index to be returned is calculated as follows:

    `computedIndex = (i * n + j)` ; update it only when in `mat[i][j]` it finds a "new maximum")

❓ What is the algorithmic complexity of the `matrixMaximumIndex` function you implemented?

9.  Test the function on `main` . The expected result for matrix `matrix` is `13` (thirteen).

### Level 5 (Estimated duration: ~15min)

10. Provide doxygen documentation for function `matrixMaximumIndex` .

    - Generate the doxygen documentation - you should get the `html` folder. Open the `index.html` file and check the generated documentation.

11. Put a breakpoint in function `matrixMaximumIndex` in order to be able to debug it.

    - During debugging, point out the sequence of values that `computedIndex` assumes during function execution.

------------------------------------------------------------------------

``` markdown
@bruno.silva
(EOF)
```

\[Disclaimer: This document was automatically translated, some original formatting may have been lost.\]
