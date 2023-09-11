/*
Implement the following steps using C programming language.

1. Declare an integer array to store 10 numbers.

2. Write separate functions outside main() to perform following operations;
  i. To display the elements in the array.
  ii. Calculate the number of the elements in the array and then return 
      the number of the elements.
  iii. Calculate the sum of the elements in the array and then return the 
      sum.
  iv. Calculate the average of the elements in the array and then return 
      the average.
  v. Find the minimum value among the elements in the array and then 
     return the minimum value.
  vi. Find the maximum value among the elements in the array and then 
     return the maximum value.
     
3. Assign some random values between 0-100 to the array inside the main 
method.
HINT: following function will return a random number between 0-100.

  int random() {
      srand(time(NULL)+rand());
      return (rand() % 100) + 1;
  }

Note: rand() and time() functions are in stdlib.h and time.h header files.

4. Call the above defined methods within the main method to display the 
results as in the following example. Note that these values are just 
random numbers and your program also should generate some random 
numbers each time it runs.

    Elements of the array:
    57    58    30    22    29    6    77    47    71    96
    No of Elements: 10
    Total: 493
    Average: 49.00
    Min Number: 6
    Max Number: 96
    
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int display(int arr[]){
	int j;
	for(j=0;j<10;j++){
		printf("%d    ",arr[j]);
	}
}

int numbers(int arr[]){
	int l, count = 0;
	for(l = 0; l < 100; l++){
		if(arr[l] != 0){
			count++;
		}
	}	
	return count;
}

int summation(int arr[]){
	int k, sum = 0;
	for(k=0; k<10; k++){
		sum = sum + arr[k];
	}
	return sum;
}

float average(float sum){
	float avg = sum / 10.0;
	return avg;
}

int findMin(int arr[]){
    int d,min=arr[0];
    for(d=1;d<10;d++){
        if(arr[d]<min){
            min=arr[d];
        }
    }
    return min;
}

int findMax(int arr[]){
    int e,max=arr[0];
    for(e=1;e<10;e++){
        if(arr[e]>max){
            max=arr[e];
        }
    }
    return max;
}

long int random(void) {
	srand(time(NULL)+rand());
	return (rand() % 100) + 1;
}

int main(){
	int arr[10],i,m,n;
	
	for(i=0; i<10;i++){
	printf("Input a number : ");
	scanf("%d",&arr[i]);
	}
	printf("\n");
	
	printf("Elements of the array is : ");
	display(arr);
	printf("\nNumber of elements are : %d", numbers(arr));

	int sumofElements = summation(arr);
	float summ = summation(arr);

	printf("\nSum of the elements is : %d", sumofElements);

	int numm = numbers(arr);
	float averagee = average(summ);
	printf("\nAverage of the elements is : %.2f\n", averagee);
	
    printf("Min Number : %d\n",findMin(arr));
    
    printf("Max Number : %d\n",findMax(arr));
	
	for(m=0; m<10; m++){
		arr[m] = random();
	}
	printf("Randomly generated numbers are : ");
	for(n=0; n<10; n++){
		printf("%d    ",arr[n]);
	}
	return 0;
}
