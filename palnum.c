#include <math.h>
#include <stdbool.h>

bool isPalindrome(int x) {
  long int f, y = x, s = 0;

  while(x > 0) {
    f = x % 10;
    s = s * 10 + f;
    x /= 10;
  }

  if(y == s) {
    return true;
  }
  else {
    return false;
  }
}