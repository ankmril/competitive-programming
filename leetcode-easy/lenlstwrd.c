#include <string.h>

int lengthOfLastWord(char* s) {
  int length, count = 0;
  length = strlen(s);

  for(int i = length - 1; i >= 0; i--) {
    if(count == 0 && s[i] == ' ') {
      continue;
    }
    else if(count != 0 && s[i] == ' ') {
      break;
    }
    else {
      count++;
    }
  }
  return count;
}