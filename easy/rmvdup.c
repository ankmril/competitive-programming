int removeDuplicates(int* nums, int numsSize) {
  // going through the array and storing it into another skipping the duplicates
  // whilst storing current element into a temporary digit variable
  
  int dup[numsSize], digitTemp, j = 0;

  for(int i = 0; i < numsSize; i++) {
    if(i == 0) {
      digitTemp = nums[i];
      dup[j] = nums[i];
      j++;
    }
    if(i != 0) {
      if(digitTemp == nums[i]) {
        continue;
      }
      else {
        digitTemp = nums[i];
        dup[j] = nums[i];
        j++;
      }
    }
  }

  for(int k = 0; k < j; k++) {
    nums[k] = dup[k];
  }

  for(int l = j; l < numsSize; l++) {
    nums[l] = 0;
  }

  return j;
}