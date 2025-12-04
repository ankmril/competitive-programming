#include <string.h>
#include <stdbool.h>

bool isPalindrome(char* s) { 
  int left = 0, right = strlen(s) - 1;
  
  while(left < right) {
    char l = s[left];
    char r = s[right];

    if(!((l >= 'A' && l <= 'Z') || (l >= 'a' && l <= 'z') || (l >= '0' && l <= '9'))) { // ignore alphanum from left
      left++;
      continue;
    }

    if(!((r >= 'A' && r<= 'Z') || (r >= 'a' && r <= 'z') || (r >= '0' && r <= '9'))) { // ignore alphanum from right
      right--;
      continue;
    }
 
    if(l >= 'A' && l <= 'Z') { // convert upper to lower for left side
      l += 32;
    }

    if(r >= 'A' && r <= 'Z') { // convert upper to lower for right side
      r += 32;
    }

    if(l != r) { // simulataneously if left not equal to right instantly end program to save time
      return false;
    }

    left++; // update position of checking next characters
    right--;
  }

  return true; // if it survives all checks then pallindrome string was input
}