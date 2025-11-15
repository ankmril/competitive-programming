int searchInsert(int* nums, int numsSize, int target) {
  int i, j, tempVar;
  int final;
  final = numsSize + 1;

  // make a temp array of size +1
  int arr[final];

  // copy original nums to arr
  for (i = 0; i < numsSize; i++)
    arr[i] = nums[i];

  // insert target at the end safely
  arr[numsSize] = target;

  // bubble sort arr (size = final)
  for (i = 0; i < final - 1; i++) {
    for (j = 0; j < final - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        tempVar = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = tempVar;
      }
    }
  }

  // find position of target in sorted array
  for (i = 0; i < final; i++) {
    if (arr[i] == target)
      return i;
  }

  return 0;   // won't reach here
}