```cpp
#include <iostream>

int main() {
  int x = 10;
  int *ptr = &x; 
  *ptr = 20; // Modify the value pointed to by ptr
  std::cout << x << std::endl; // Output: 20

  //Corrected code: Do not delete ptr as it points to a stack variable

  return 0;
}
```