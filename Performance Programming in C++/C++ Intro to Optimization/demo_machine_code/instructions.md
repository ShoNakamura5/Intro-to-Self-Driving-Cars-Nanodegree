### C++ versus Machine Code

C++ is a high level language that makes it easier for us humans to write computer programs. But, a computer cannot understand C++ directly. Your compiler converts your C++ code into machine code, which is a language that the CPU (central processing unit) understands. Machine code is a series of zeros and ones, which is how your computer communicates.

You can actually see what machine code looks like. In the workspace below, open a terminal window and type the following three lines. Make sure to hit enter after typing each line:

```
cd demo_machine_code
g++ -c machine_code.cpp
xxd -b machine_code.o
```
The -c flag in g++ tells the compiler to output an object file, which is machine code. 

The xxd command ouputs the .o file in its binary representation. Looking at the output, the first column is just a row number written in [hexadecimal](https://simple.wikipedia.org/wiki/Hexadecimal_numeral_system). Then each of the following six columns contains one byte of information. And the last column shows you the text representation that is in the file.

You'll see there are over 1200 lines of machine code just to represent a program that assigns an integer value to a variable.