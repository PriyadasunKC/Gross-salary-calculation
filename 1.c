# include <stdio.h>
int calculatGrossSalary();
int main(){

calculatGrossSalary();
}

int calculatGrossSalary(){
    
    double basicSalary = 0;
    double grossSalary = 0;

    printf("Enter Basic salary : ");
    scanf("%lf",&basicSalary);

    grossSalary = (basicSalary)+(basicSalary*0.4) - (basicSalary * 0.2);
    printf("Gross salary : Rs.%lf",grossSalary);
}
