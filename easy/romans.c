#define I 1
#define V 5
#define X 10
#define L 50
#define C 100
#define D 500
#define M 1000

#include <string.h>

int romanToInt(char* s) {
  int length;
  length = strlen(s);

  int sum = 0;

  for(int i = 0; i < length; i++) {
    switch(s[i]) {
      case 'M':
        sum += M;
        break;
      case 'D':
        sum += D;
        break;
      case 'C':
        if(s[i+1] != 'D' && s[i+1] != 'M') {
          sum += C;
        }
        if(s[i+1] == 'D') {
          sum += 400;
          i++;
        }
        if(s[i+1] == 'M') {
          sum += 900;
          i++;
        }
        break;
      case 'L':
        sum += L;
        break;
      case 'X':
        if(s[i+1] != 'L' && s[i+1] != 'C') {
          sum += X;
        }
        if(s[i+1] == 'L') {
          sum += 40;
          i++;
        }
        if(s[i+1] == 'C') {
          sum += 90;
          i++;
        }
        break;
      case 'V':
        sum += V;
        break;
      case 'I':
        if(s[i+1] != 'V' && s[i+1] != 'X') {
          sum += I;
        }
        if(s[i+1] == 'V') {
          sum += 4;
          i++;
        }
        if(s[i+1] == 'X') {
          sum += 9;
          i++;
        }
        break;
      default:
        printf("\nInvalid input.\n");
        break;
    }
  }

  return sum;
}