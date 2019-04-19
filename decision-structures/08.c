#include <stdio.h>

void credit_analysis(float salary, float installment) {
  if(installment / (salary / 100) > 20) {
    printf("Loan not granted\n");
  } else {
    printf("Loan granted\n");
  }
}

int main() {
  float salary;
  float installment;
  printf("Enter the salary:\n");
  scanf("%f", &salary);
  printf("Enter the amount of the installment:\n");
  scanf("%f", &installment);
  credit_analysis(salary, installment);
  
  return 0;
}
