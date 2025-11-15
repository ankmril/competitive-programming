#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* addBinary(char* a, char* b) {
    int i = strlen(a) - 1;
    int j = strlen(b) - 1;
    int carry = 0;

    // worst case: max(len(a), len(b)) + 1 + null
    int maxLen = (i > j ? i : j) + 3;
    char* res = (char*)malloc(maxLen);
    int k = 0;

    while (i >= 0 || j >= 0 || carry) {
        int bitA = (i >= 0) ? a[i] - '0' : 0;
        int bitB = (j >= 0) ? b[j] - '0' : 0;

        int sum = bitA + bitB + carry;

        res[k++] = (sum % 2) + '0';
        carry = sum / 2;

        i--;
        j--;
    }

    res[k] = '\0';

    // reverse the result string
    for (int left = 0, right = k - 1; left < right; left++, right--) {
        char temp = res[left];
        res[left] = res[right];
        res[right] = temp;
    }

    return res;
}