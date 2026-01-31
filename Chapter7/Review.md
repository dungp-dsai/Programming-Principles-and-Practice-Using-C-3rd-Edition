<b>[1] What is the difference between a declaration and a definition?</b>
1. Memory allocation: declaration does not allocate memory for a name (variable or function) but definition does
2. Repeat: declaration can appear many times as long as consistent in the program while definition must appear once only

<b>[2] How do we syntactically distinguish between a function declaration and a function definition?</b> </br>
Function declaration does not need function body while definition does
eg:
```cpp
double add(double a, double b); // function declaration 

// function definition with function body is given
double add(double a, double b) {
    return a + b;
}
```

<b> [3] How do we syntactically distinguish between a variable declaration and a variable definition? </b> </br>
declaration: extern int x; 
definition: int x = 10;


