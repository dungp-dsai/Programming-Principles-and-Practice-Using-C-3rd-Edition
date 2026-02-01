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
void print_value(int a) {
    cout << a ;
}
```
- Global scope
```
int global_var = 10;

int f() {};

double g() {};
```
- Module Scope
```
ModuleA.cpp
int a = 10;

ModuleB.cpp
int a = 20;
```
- Namespace Scope
```
namespace ABC {
    int a = 10;
}

namespace BCD {
    int a = 20;
}
```
- Statement Scope: 
```
for(int a=0; i<10; ++i) {}
```


<b>[12] What is the difference between a class scope and local scope?</b></br>
class scope are text inside a class, local scope is what between {} or inside argument list.

<b>[13] Why should a programmer minimize the number of global variables?</b> </br>
Because its hard to know which parts in our program change the value. If any bugs occur, its hard to find/debug. In addition, if we use global variable in different unit, it can cause problem of does not know which parts are loaded first that it can be unavailable at the running time. 

<b>[14] What is the difference between pass-by-value and pass-by-reference?</b> </br>
- pass by value the function copy the arguments and pass into the functions
- pass-by-reference, the function arguemnts only refer to the address, there is no copy happen. 

<b>[15] What is the difference between pass-by-reference and pass-by-const-reference? </b> </br>
- pass-by-reference: we can read and write the value at the given address
- pass-by-const-reference: read only.

<b>[16] What is a swap()?</b> </br>
its a function that exchnages the value of 2 variables. 

<b>[17] Would you ever define a function with a vector<double> as a by-value parameter? </b> </br>
no.. we should only use pass by value for small number such as an int, double or so. 

<b>[18] Give an example of undefined order of evaluation. Why can undefined order of evaluation be a problem?</b> </br>
because we can use a name before its defined, its gonna throw undefined error. 


<b>[19] What do x&&y and x||y, respectively, mean? </b> </br>
- x&&y is x AND y: y is only evaluated only if x is true
- x||y is x OR y: y is only evaluated only if x is false

<b>[20] Which of the following is standard-conforming C++: functions within functions, functions within classes, classes within classes, classes within functions? </b> </br>
functions within functions is not standard-conforming C++
- functions within classes: this is called member function
- classes within classes: this is called member class
- classes within function: this is called local class 

<b>[21] What goes into an activation record? </b> </br>
- local variables
- parameter list
- implentation stuff: function needs this to know where to return and handle stuff with caller. 

<b>[22] What is a call stack and why do we need one? </b> </br>
call stack is a stack to store the activation records when we call functions. 
why we need call stack? we need it to keep track function calls, manage things like local variables, order to execute

<b>[23] What is the purpose of a namespace? </b></br
The purpose of namespace is to organize functions and classes, we need a unit to organize that kind of things. The purpose of the grouping is to avoid conflicts in name use in different parts of a program. 

<b>[24] How does a namespace differ from a class? </b> </br>
class is in global scope, if 2 modules define a same class name --> cannot. But its fine to use the same name in different namespace

eg: 

```
// A.h
class A {};
class B {}
```

```
// B.h
class A {};
class B {}
```

```
#include "A.h"
#include "B.h"

A t; // which A?? from A.h or B.h?
B k; // which B?? from A.h or B.h?
```

<b>[25] What is a using declaration? </b> </br>
in using namespace, if we dont want to repeat typing full qualifed name such as std::str --> we just use using declaration such as using std:str. From now on we just need to use str, it means str inside the str namespace

<b>[26] Why should you avoid using directives in a header? </b> </br>
Because if we overuse it, we can face the problem of duplication of names which is supposed to be solved by using namespace. 

<b>[27] What is namespace std? </b> </br>
the namepsace of the standard std library.

