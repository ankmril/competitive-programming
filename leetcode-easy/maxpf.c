int maxProfit(int* prices, int pricesSize) {
  //find smallest element

  int checkNum, lowestNum, largestNum, tempVar, pos, pos2, i, j;
  i = 0;
  j = 0;
  pos = 0;
  pos2 = 0;
  tempVar = 0;
  checkNum = 0;
  lowestNum = 0;
  largestNum = 0;

  checkNum = prices[0];

  for(i = 1; i < pricesSize; i++) {
    if(prices[i] < checkNum) {
      lowestNum = prices[i];
      pos = i;
    }
  }

  //find largest after smallest element

  for(j = pos + 1; j < pricesSize; j++) {
    if(prices[j] > lowestNum) {
      largestNum = prices[j];
      pos2 = j + 1;
    }
  }

  if((pos + 1) == pricesSize) {
    return 0;
  }
  else {
    return pos2;
  }
}