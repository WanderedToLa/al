#include<stdio.h>

int func1(int N){
  int sum = 0;
  for (int i = 1; i <= N; i++) {
      if (i % 3 == 0 || i % 5 == 0) {
          sum += i;
      }
  }
  return sum;

}

int func2(int arr[], int N){
  for (int i = 0; i < N; i++) {
      for (int j = i + 1; j < N; j++) {
        if (arr[i] + arr[j] == 100) {
            return 1;
        }
      }
  }
  return 0;
}

int func3(int N){
  for (int i = 0; i * i <= N; i++) {
      if (i * i == N) return 1;
  }
  return 0;
}

int func4(int N){
  int value = 1;
  while (2*value <= N) value *= 2;
  return value;
}


int main(void)
{
    printf("Hello World");
    return 0;
}

//g++ -std=c++14 -Wall { FileName }.cpp -o test.out