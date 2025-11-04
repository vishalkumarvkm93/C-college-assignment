1. What do you mean by arrays? Give one example of array and how you can declare an array.

Array ek data structure hota hai jisme hum same type ke multiple values ek hi variable name se store kar sakte hain.
For example agar hume 5 students ke marks store karne hain, to hum 5 alag variables banane ke bajaye ek array bana sakte hain.

#include <stdio.h>
int main() {
    int marks[5] = {85, 90, 78, 92, 88};  // Declaration and initialization of array
    printf("First student's marks = %d", marks[0]);
    return 0;
}


Yahan marks ek integer array hai jisme 5 elements store hain.

2. What do you mean by functions? Write the types of functions and give one example in code of each type.

Function ek block of code hota hai jo ek specific task perform karta hai.
Functions code ko reusable aur easy to manage banate hain.

Types of functions in C:

Library Functions (like printf(), scanf())

User-defined Functions (functions made by the programmer)

Example of Library Function:

#include <stdio.h>
int main() {
    printf("Hello World");  // printf is a library function
    return 0;
}


Example of User-defined Function:

#include <stdio.h>

void greet() {   // function definition
    printf("Welcome to C Programming!");
}

int main() {
    greet();     // function call
    return 0;
}

3. What do you mean by Pointers? Write a code how you can initialise the pointer.

Pointer ek variable hota hai jo kisi aur variable ka address store karta hai.
Pointer ke through hum directly memory location ko access kar sakte hain.

#include <stdio.h>
int main() {
    int num = 10;
    int *ptr;      // pointer declaration
    ptr = &num;    // initialization with address of num

    printf("Value of num = %d\n", num);
    printf("Address of num = %p\n", ptr);
    printf("Value using pointer = %d", *ptr);
    return 0;
}


Yahan ptr ek pointer hai jo num ka address store karta hai, aur *ptr se hum uska value access kar rahe hain.

4. What are the types of array? Write in a code 1D & 2D included.

Array mainly do types ke hote hain:

One Dimensional Array (1D) — simple list type data store karta hai.

Two Dimensional Array (2D) — table ya matrix form me data store karta hai.

Example of 1D Array:

#include <stdio.h>
int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    for(int i=0; i<5; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}


Example of 2D Array:

#include <stdio.h>
int main() {
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
    for(int i=0; i<2; i++) {
        for(int j=0; j<3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}

5. Explain the types of Operators in code.

Operators wo symbols hote hain jo values ke upar operations perform karte hain.
C language me main operators ye hote hain:

Arithmetic Operators → +, -, *, /, %

Relational Operators → ==, !=, >, <, >=, <=

Logical Operators → &&, ||, !

Assignment Operators → =, +=, -=, *=

Increment/Decrement Operators → ++, --

#include <stdio.h>
int main() {
    int a = 10, b = 5;

    // Arithmetic
    printf("Sum = %d\n", a + b);

    // Relational
    printf("Is a > b? %d\n", a > b);

    // Logical
    printf("Logical AND = %d\n", (a > 5 && b < 10));

    // Assignment
    a += 5;  // same as a = a + 5
    printf("After += operator, a = %d\n", a);

    // Increment
    a++;
    printf("After increment, a = %d\n", a);

    return 0;
}
