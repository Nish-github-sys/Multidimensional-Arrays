# Multidimensional Arrays

Aim: To study and implement C++ 2D Array - Matrices.

Tools Used: VS Code or Programiz Online Compiler.

# Theory

Multidimensional arrays in C++ are arrays that contain other arrays, allowing data to be structured in multiple dimensions, such as 2D (matrices) or 3D (volumetric data). They are declared using nested brackets (e.g., int arr[3][4] for a 3x4 grid) and stored contiguously in row-major order, meaning the rightmost index changes fastest in memory. Accessing elements requires nested indexing (e.g., arr[i][j]), and initialization can be done inline using nested braces (e.g., {{1, 2}, {3, 4}}).

```

type array_name[size1][size2]...[sizeN];

```
-->Some features of Multi-dimensional Arrays are:
1. Fixed-size, contiguous memory blocks - Arrays store elements in adjacent memory locations with a predetermined size.
2. Zero-based indexing - Elements are accessed starting from index 0 up to size-1.
3. Homogeneous data type - All elements must be of the same type (e.g., all int or float)

# Program-1: 2-D Array Input from user & Display

This program demonstrates basic 2D array operations in C++, allowing users to input matrix dimensions and elements which are then stored and displayed. Using nested loops, it shows how to traverse a 2D array row-wise, with proper formatting using tabs and newlines. The example illustrates fundamental concepts of matrix declaration, initialization, and output in C++.

--> Algorithm:

1. Initialize a 3×3 integer matrix
2. Request user to input all matrix elements
3. Read elements using row-wise nested loops
4. Assign each value to its corresponding matrix index
5. Print the matrix with correct row-column alignment

# Program-2: Addition of two 2-D Arrays

This program demonstrates matrix addition in C++ by first accepting dimensions and elements for two matrices from the user. It checks if the matrices have compatible dimensions (same number of rows and columns) before performing element-wise addition. The result is displayed in proper matrix format, illustrating fundamental matrix operations, input validation, and 2D array manipulation in C++.

--> Algorithm:

1. Accept row and column sizes for two matrices as user input
2. Verify matrix dimensions match for addition compatibility
3. Declare separate 2D arrays to store both matrices
4. Populate matrix elements through row-column iteration
5. Print both matrices with proper formatting
6. Compute sum by adding corresponding elements position-wise
7. Output the resultant matrix with identical dimensions

# Program-3: Multiplication of two 2-D Arrays

This program demonstrates matrix multiplication in C++, where the user inputs two matrices of compatible dimensions (columns of first matrix must match rows of second matrix). The program validates dimension compatibility before performing multiplication using nested loops to calculate the dot product of rows and columns. The resulting product matrix is displayed, illustrating the fundamental matrix operation that combines row-column element pairs through multiplication and summation.

--> Algorithm:

1. Accept row and column dimensions for both matrices from user
2. Verify multiplication condition (Matrix-1 columns = Matrix-2 rows)
3. Declare and initialize matrices including result matrix (set to zero)
4. Read matrix elements through nested row-column loops
5. Compute product using triple nested loops (row-column dot product)
6. Print original matrices and final multiplication result

# Program-4: Addition of diagonal elements of a 2-D Array

This program calculates the sum of diagonal elements (main diagonal) of a square matrix. The user first inputs the matrix dimensions and elements, which are stored in a 2D array. The program verifies if the matrix is square (rows = columns) before computing the sum by adding elements where row and column indices are equal (mat[i][i]). Finally, it displays either the diagonal sum or an error message for non-square matrices.

--> Algorithm:

1. Input matrix dimensions (rows m and columns n)
2. Declare 2D array mat[m][n] and input elements
3. Display the entered matrix with proper formatting
4. Check if matrix is square (m == n):
  If true: Calculate sum of diagonal elements (mat[i][i])
  If false: Display "Diagonal sum not possible"
5. Output the diagonal sum result or error message

# Program-5: Transpose of 2-D Array

This program demonstrates matrix transposition in C++, where the rows and columns of a matrix are swapped. The user inputs an m×n matrix, which is then transposed into an n×m matrix by assigning each element mat[i][j] to mat_T[j][i]. The program displays both the original and transposed matrices, illustrating how matrix dimensions and element positions are inverted during transposition. This operation is fundamental in linear algebra and various computational applications.

--> Algorithm:

1. Accept row and column dimensions as user input
2. Initialize original and transposed matrix structures
3. Populate matrix elements through row-wise nested iteration
4. Print the input matrix with proper formatting
5. Generate transpose by interchanging indices (mat_T[j][i] = mat[i][j])
6. Output the transposed matrix with flipped dimensions

# Program-6: Comparing 2-D Array

This program compares two square matrices for equality by first checking if their dimensions match (m1 == n1 and m2 == n2). If the dimensions are equal, it compares each corresponding element of the matrices; if all elements are identical, it sets a flag indicating the matrices are equal. The program then outputs whether the matrices are equal or not based on the flag's value, demonstrating basic matrix comparison logic in C++.

--> Algorithm:

1. Input Matrix-1 Dimensions: Read rows (m1) and columns (n1).
2. Input Matrix-1 Elements: Store values in 2D array mat1[m1][n1].
3. Input Matrix-2 Dimensions: Read rows (m2) and columns (n2).
4. Input Matrix-2 Elements: Store values in 2D array mat2[m2][n2].
5. Display Both Matrices: Print mat1 and mat2 for verification.
6. Check Equality Conditions:
  -If dimensions mismatch (m1 != m2 or n1 != n2), output "Not equal".
  -If dimensions match, compare each element (mat1[i][j] == mat2[i][j]).
7. Set Flag:
  -flag = 1 if all elements match.
  -Else, keep flag = 0.
8. Output Result:
  -If flag == 1, print "Equal".
  -Else, print "Not equal".

# Conclusion

These C++ programs demonstrate core concepts of arrays and pointers through practical implementations. The matrix programs show how to input, display, and compare 2-D arrays, including an equality check for square matrices. The pointer examples illustrate type-dependent arithmetic and string manipulation through memory addresses. Together, they highlight efficient data handling and memory management in C++. These foundational concepts are essential for advancing to dynamic memory allocation and complex data structures.
