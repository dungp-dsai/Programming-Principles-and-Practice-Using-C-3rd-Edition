<b>[1] Why is I/O tricky for a programmer?</b>
because there are many kind of input and output. Each source and destination might require different formats, and managing them is tricky especially with the input.

<b>[2] What does the notation << hex do?</b>
its a manipulator to output intergers in hexadecimal numbers. 

<b>[3] What are hexadecimal numbers used for in computer science? Why?</b>
its used for hardware-related information such as memory address, etc. And its popular because 1 digit of hexadecimal number presents 4 bits and with 8 digits hexadecimal it can present 32 bits which is often the size of an integer.

<b>[4] Name some of the options you may want to implement for formatting integer output.</b>
- <<hex
- <<oct
- <<dec

<b>[5] What is a manipulator?</b>
its does not output anything, it changes the format of the output numbers

<b>[6] What is the default output format for floating-point values?</b>
its default-float which chooses fixed or scientific format to best precision display.

<b>[7] Explain what setprecision() and setw() do.</b>
- setprecision() specify the precision of the float numbers
- setw() sets width or space to display the output


<b>[8] Which of the following manipulators do not “stick”: hex, scientific, setprecision(), setw()?</b>
setw

<b>[9] In format(), how do you specify where an argument is placed on output?</b>
we use {} for example: 
```
format("This is the value: {}", value)
```

<b>[10] Give two examples where a stringstream can be useful.</b>
