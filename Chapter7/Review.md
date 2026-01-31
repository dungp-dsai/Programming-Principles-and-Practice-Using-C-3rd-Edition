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

<b>[4] Why can’t you use the functions in the calculator program from Chapter 5 without declaring one or more of them first? </b> </br>
Because the program does not know what it means at that point

<b>[5] Is int a; a definition or just a declaration?</b> </br>
its definition, because this statement allocates memory for the variable a

<b>[6] Why is it a good idea to initialize variables as they are declared?</b> </br>
To avoid unpredictable outcomes/behaviours of the program. Sometimes the compiler won't throw error or warn against some unsafe cases.

<b>[7] What can a function declaration consist of?</b> </br>
- Types: return type and type of arguments
- Function name

<b>[8] What is the suffix return type notation, and why might you use it?</b> </br>
Its an alternative way to define a function. 
eg: 
```cpp
auto function_name(int a ) -> Token {};

Me might use it to improve readability of program.
```

<b>[9] What good does indentation do?</b> </br>
It improve readability of nesting.

<b>[10] What is the scope of a declaration? </b> </br>
The scope of a declaration is a region of text in which the declaration is valid. 

<b>[11] What kinds of scope are there? Give an example of each.</b> </br>
- Local scope
```
```
- Global scope
- Module Scope
- Namespace Scope
- Statement Scope:

