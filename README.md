# C++ Dangling Pointer and Double Free Example

This repository demonstrates a common C++ error involving dangling pointers and double free or corruption.  The `bug.cpp` file shows the erroneous code, while `bugSolution.cpp` provides a corrected version. 

The core issue is attempting to use `delete` on a pointer that wasn't allocated using `new`. This leads to undefined behavior and potential crashes.