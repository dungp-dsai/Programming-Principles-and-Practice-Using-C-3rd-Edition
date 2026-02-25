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
- when we wanna split IO with processing: for example setup file stream to a file to load the input. Then setup stringstream for the processing or parsing data
- when we want to dynamic create a string as using format (format is new version of c++), then using the dynamic string to setup the file stream for writing the output.

<b>[11] When would you prefer line-oriented input to type-specific input?</b>
when we want to keep the full line to be able to parse the data correctly. Some applications need the structure to be able to parse the data.

<b>[12] What does isalnum(c) do?</b>
to check if the variable is a alphabet or number

<b>[13] When dealing with input and output, how is the variety of devices dealt with in most modern computers?</b>
abstract away the process of reading/writing data directly from/to the various devices with io libraries.

<b>[14] What, fundamentally, does an istream do?</b>
it composes objects from sequence of bytes from disk. 

<b>[15] What, fundamentally, does an ostream do?</b>
it converts objects in memory to a stream of bytes and write to disk.

<b>[16] What, fundamentally, is a file?</b>
its sequence of bytes and it has format to define what those bytes mean like types for objects.

<b>[17] What is a file format?</b>
file format is like the type for object, it defines what does bytes in a file mean.

<b>[18] Name four different types of devices that can require I/O for a program.</b>
- keyboard
- screen
- disk storage
- network devices

<b>[19] What are the four steps for reading a file?</b>
- step 1: identify the name a file
- step 2: open file for reading
- step 3: read the characters
- step 4: close

<b>[20] What are the four steps for writing a file?</b>
- step 1: name a file
- step 2: open the file for writing or create a new one
- step 3: write objects to file
- step 4: close the file

<b>[21] Name and define the four stream states.</b>
- good(): operations runs successfully
- bad(): something wrong with devices
- fail(): often with wrong format
- eof(): end of file

<b>[23] In what way is input usually harder than output?</b>
input is harder to control the format cause its error prone such as human error like typo, etc. 

<b>[24] In what way is output usually harder than input?</b>
its hard to align a single output format to fit all users. So we must custom to fit different users. 

<b>[25] Why do we (often) want to separate input and output from computation?</b>
because we might need to handle different languages for users in different countries. And especially we want to have the flexilbity to control the messages for input and output such as prompting users to input, etc. 

<b>[26] What are the two most common uses of the istream member function clear()?</b>
- when we want to get the istream back to good() state so that we can recover from fail() state for example
- clear with argument such as ios::failbit to set the istream to fail() state.

<b>[27] What are the usual function declarations for << and >> for a user-defined type X?</b>
- ostream& operator<<(ostream& os, X& x);
- istream& operator>>(istream& is, X&x);

<b>[28] How do you specify where an argument is inserted into a format string in format()?</b>
```
format("String to insert {}", inserted_string);
```

<b>[29] What is the notation for bases of decimal values in format()?</b>
```
format("{:d}", number);
```

<b>[30] How do you specify the precision of floating-point values in format()?</b>
```
format("precision: {:.8}", double_number);
```