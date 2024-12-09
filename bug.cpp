```cpp
#include <iostream>

int main() {
  int x = 10;
  int *ptr = &x; 
  *ptr = 20; // Modify the value pointed to by ptr
  std::cout << x << std::endl; // Output: 20 

  delete ptr; // ERROR: Double free or corruption (out of bounds)

  return 0;
}
```