## Instructions

1. Double click on the demo_floats folder, and then double click on main.cpp

2. Study the code. This demo shows you how a computer's architecture limits the number of decimal places that can be stored. You will see that the float 97.148 has a very different binary representation than a longer decimal like 97.1485945. If you then add more decimal places, they won't be able to fit in a 32-bit float. The binary representation of 97.1485945 and 97.148594576678755667 are the same. C++ is truncating the longer decimal since a 32-bit float cannot hold all of the information.

3. To run the demo, open a new terminal (if one isn't open already) and use the following commands:
cd /home/workspace/demo_floats
g++ main.cpp
./a.out