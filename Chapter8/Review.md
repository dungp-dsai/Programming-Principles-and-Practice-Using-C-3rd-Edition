<b>[1] What are the two parts of a class, as described in the chapter?</b>
they are data and operations 

<b>[2] What is the difference between the interface and the implementation in a class? </b>
interface is where we provide what use can access to an object. Implementation is where use can access thigns indrectly via the interface. 

<b>[3] What are the limitations and problems of the struct Date from §8.4.1? </b>
- Have to manual assign year, day, month which is error prone
- there is no checking if we pass a proper value for year, month and day. More broader, we cannot ensure the valid state for an object
- there is no block user to access representation directly which can be risky
- there is no operation that we can perform on the object data.

<b>[4] Why is a constructor used for the Date type instead of an init_day() function?</b>
Because we use constructor to make sure an object is initialized with value to avoid unpredictable output. If we use init_day, it could be the case we forget to call to init then lead to bad situation.

<b>[5] What is an invariant? Give examples.</b>
That is a rule to define whether an object is in a valid state. for examples for a Date, we know that its month must never <1 or >12. Or for a bank account object, invariant could be balance never <0.

<b>[6] When should functions be put in the class definition, and when should they be defined outside the class? Why? </b>
If its long function with more than 4-5 lines, put it outside the class. Becuase putting inside the class affects code readability, we need to scrool throughout the screen just to find a function in case the class has many functions putting inside it. However, in case the class has small function which we can write in-line, the function does not have complex calculation but its called many times, we can put it inside a class.

<b>[7] What is a default constructor and when do we need one? </b>
default constructor is a constructor that can be called without any arguments. we need default constructor when we want to create an object without specifing any arguments, but dont need to worry about unpredictable behaviours without initialization (because its taken care by the default constructor already)

<b>[8] What is a default member initializer?</b>
A default member initialzer is a data member of a class which provides values for a constructor if the constructor does not explicitly initialize that members.

<b>[9] When should operator overloading be used in a program? Give a list of operators that you might want to overload (each with a reason). Which ones can you define in C++? </b>


<b>[10] Why should the public interface to a class be as small as possible? </b>
- easy to learn and remember
- easy to debug: small number of functions that can change object reprentation save us time in debugging when we apply round up usual prospects.
- save time for implementers to provide useful things only.

<b>[11] What does adding const to a member function do?</b>

