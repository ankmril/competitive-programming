int removeElement(int* nums, int numsSize, int val) {
  if(numsSize == 0) {
    return 0;
  }
  
  int duplicate[numsSize];
  int countDigits = 0;
  int i, j, k;

  for(i = 0; i < numsSize; i++) {
    if(nums[i] != val) {
      duplicate[countDigits] = nums[i];
      countDigits++;
    }
  }

  for(j = 0; j < countDigits; j++) {
    nums[j] = duplicate[j];
  }

  for(k = j; k < numsSize; k++) {
    nums[k] = 0;
  }

  return countDigits;
}