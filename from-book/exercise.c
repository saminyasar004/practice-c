#include <stdio.h>
#include <math.h>

void sum_of_serial_nums() {
  int sum, n;
  input:
  printf("Enter the vlaue of n: ");
  scanf("%d", &n);
  if(n < 0) {
    goto input;
  } else if(n == 0) {
    sum = 0;
    printf("The summation from %d to %d is: %d", n, n, sum);
    printf("\n");
  } else {
    for(int i = 1; i <= n; i++) {
      sum += i;
    }
    printf("The summation from %d to %d is: %d", 1, n, sum);
    printf("\n");
  }
}

void sum_of_cubic_nums() {
  int sum, n;
  input:
  printf("Enter the vlaue of n: ");
  scanf("%d", &n);
  if(n < 0) {
    goto input;
  } else if(n == 0) {
    sum = 0;
    printf("The summation from %d^3 to %d^3 is: %d", n, n, sum);
    printf("\n");
  } else {
    for(int i = 1; i <= n; i++) {
      sum += (i * i * i);
    }
    printf("The summation from %d^3 to %d^3 is: %d", 1, n, sum);
    printf("\n");
  }
}

void sum_of_pos_neg() {
  int n, sum;
  input:
  printf("Enter a positive number: ");
  scanf("%d", &n);
  if(n < 0) {
    goto input;
  } else if(n == 0) {
    sum = 0;
    printf("The summation from %d to %d is: %d", n, n, sum);
    printf("\n");
  } else {
    for(int i = 1; i <= n; i++) {
      if(i % 2 == 0) {
        // even --> negative
        sum += -i;
      } else {
        // odd --> positive
        sum += i;
      }
    }
    if(n % 2 == 0) {
      // even --> negative
      n = -n;
    }
    printf("The summation from %d to %d is: %d", 1, n, sum);
    printf("\n");
  }
}

void sum_of_pos_neg_square() {
  int n, sum;
  input:
  printf("Enter a positive number: ");
  scanf("%d", &n);
  if(n < 0) {
    goto input;
  } else if(n == 0) {
    sum = 0;
    printf("The summation from %d to %d is: %d", n, n, sum);
    printf("\n");
  } else {
    for(int i = 1; i <= n; i++) {
      if(i % 2 == 0) {
        // even --> negative
        sum += (-i * -i);
      } else {
        // odd --> positive
        sum += (i * i);
      }
    }
    if(n % 2 == 0) {
      // even --> negative
      n = -n;
    }
    printf("The summation from %d to %d is: %d", 1, n, sum);
    printf("\n");
  }
}

void sum_of_factorial() {
  int factorial(int num) {
    int factorial_sum = 1;
    if(num == 0) {
      return 0;
    } else {
      for(int i = num; i >= 1; i--) {
        factorial_sum *= i;
      }
      return factorial_sum;
    }
  }
  
  int n;
  float sum;
  input:
  printf("Enter your number: ");
  scanf("%d", &n);
  if(n < 0) {
    goto input;
  } else if(n == 0) {
    sum = 0;
    printf("The summation from %d/%d! to %d/%d! is: %f", n, n, n, n, sum);
    printf("\n");
  } else {
    sum = 0.00;
    for(float i = 1; i <= n; i++) {
      sum += (i / factorial(i));
    }
    
    printf("The summation from %d/%d! to %d/%d! is: %.2f", 1, 1, n, n, sum);
    printf("\n");
  }
}

void big_num_3() {
  int x, y, z;
  input:
  printf("Enter your first number: ");
  scanf("%d", &x);
  printf("Enter your second number: ");
  scanf("%d", &y);
  printf("Enter your third number: ");
  scanf("%d", &z);
  if(x < 0 || y < 0 || z < 0) {
    goto input;
  } else {
    if(x >= y) {
      if(x >= z) {
        printf("%d, %d, %d. The bigger is: %d\n", x, y, z, x);
      } else if(z >= x) {
        if(z >= y) {
          printf("%d, %d, %d. The bigger is: %d\n", x, y, z, z);
        }
      }
    } else if(y >= x) {
      if(y >= z) {
        printf("%d, %d, %d. The bigger is: %d\n", x, y, z, y);
      } else if(z >= y) {
        if(z >= x) {
          printf("%d, %d, %d. The bigger is: %d\n", x, y, z, z);
        }
      }
    }
  }
}

char pattern_1() {
  int n;
  printf("Enter your range (positive number): ");
  scanf("%d", &n);
  input:
  if(n <= 0) {
    goto input;
  } else {
    for(int i = 1; i <= n; i++) {
      for(int j = 1; j <= i; j++) {
        printf("%d ", j);
      }
      printf("\n");
    }
  }
}

void pattern_2() {
  int n;
  input:
  printf("Enter your range (positive number): ");
  scanf("%d", &n);
  if(n <= 0) {
    goto input;
  } else {
    for(int i = 0; i < n; i++) {
      for(int j = n; j >= 1; j--) {
        if(j > i) {
          printf("%d ", j);
        }
      }
      printf("\n");
    }
  }
}

void pattern_3() {
  int n;
  input:
  printf("Enter your range (positive number): ");
  scanf("%d", &n);
  if(n <= 0) {
    goto input;
  } else {
    for(int i = n; i >= 1; i--) {
      for(int j = i; j >= 1; j--) {
        printf("%d ", j);
      }
      printf("\n");
    }
  }
}

void pattern_4() {
  int n;
  input:
  printf("Enter your range (positive number): ");
  scanf("%d", &n);
  if(n <= 0) {
    goto input;
  } else {
    int isIncreement = 1;
    int i = 1;
    while(i <= n && i > 0) {
      for(int j = 1; j <= i; j++) {
        printf("%d ", j);
      }
      printf("\n");
      if(i == n) {
        isIncreement = 0;
      }
      if(isIncreement == 1) {
        i++;
      } else {
        i--;
      }
    }
  }
}

void main() {
  printf("Run any function...!\n");
}
