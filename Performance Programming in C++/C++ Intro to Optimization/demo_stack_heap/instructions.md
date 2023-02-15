## Stack vs Heap

This demo shows how memory is allocated on the stack versus on the heap. To run the demo, open a new terminal window and type the following commands:

cd /home/workspace/demo_stack_heap
g++ main.cpp
./a.out

The demo code creates five integer variables on the stack and five integer variables on the heap. The program then prints out their adddresses in memory. You'll see the results in hexadecimal as well as in binary format. Notice that the stack first assigns a higher number address and then works backwards. Each integer takes up 4 bytes of memory.

The heap, on the other hand, starts with lower number addresses and increases. Exactly what addresses get assigned will vary from system to system when the program executes. 