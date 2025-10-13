#include <stdio.h>

int main() {

    // We have been given an array 'nums' and an integer value 'target' in the question.
    // We are supposed to print the positions of the elements of the array which add up to 'target'.
    // We can assume that each input will have one solution and it's never going to fail or be incorrect.
    // The answer can be returned in any order. It doesn't have to be chronological.

    int n,i,j,target;

    printf("Enter the size of array:\n");
    scanf("%d",&n);

    printf("Enter the elements of array:\n");
    int nums[n];
    for(i=0;i<n;i++)
        scanf("%d",&nums[i]);
    
    printf("Enter the target value:\n");
    scanf("%d",&target);

    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if(i!=j) {
                if((nums[i]+nums[j])==target)
                    printf("Positions of the elements: %d, %d\n",i,j);
            }
        }
    }
    return 0;
}