//header files
#include <stdio.h>
#include <string.h>
#include <math.h>
//Declare Data Structures
struct Fractions
{
    int num;
    int deno;
};
//Declare  Functions
int multiplyFunction(int a, int b, int c, int d);
int divideFunction(int a, int b, int c, int d);
int additionFunction(int a, int b, int c, int d);
int subtractionFunction(int a, int b, int c, int d);
int displayFunction(int a,int b,int c,int d);
// main function
int main(void)
{
    //declare int variable
    int responseContinue;
    //create an infinite loop
    for (;;)
    {
        //created the first fraction data structure instance that will input data from the user
    struct Fractions fraction1;
    printf("Enter the numerator of the first Fraction: ");
    scanf("%d", &fraction1.num);
    printf("Enter the denominator of the first Fraction: ");
    scanf("%d", &fraction1.deno);
    //created the first fraction data structure instance that will input data from the user
    struct Fractions fraction2;
    printf("Enter the numerator of the Second Fraction: ");
    scanf("%d", &fraction2.num);
    printf("Enter the denominator of the Second Fraction: ");
    scanf("%d", &fraction2.deno);
    
    //if function that checks whether the denominator is 0 and if yes it terminates the program and print an Error and no it continues 
    if (fraction1.deno != 0 && fraction2.deno != 0)
    {
        displayFunction( multiplyFunction(fraction1.num, fraction1.deno, fraction2.num, fraction2.deno),divideFunction(fraction1.num, fraction1.deno, fraction2.num, fraction2.deno), additionFunction(fraction1.num, fraction1.deno, fraction2.num, fraction2.deno),subtractionFunction(fraction1.num, fraction1.deno, fraction2.num, fraction2.deno));
    }
    else
    {
        printf("Math Error.Please change the Denominator.\n");
    }
    //Prompts the user if he/she would like to proceed to the another calculations of functions
    printf("Would like to do another calculation?(1/0)");
    scanf("%d",&responseContinue);
    if (responseContinue==0){
        break;
    }else if (responseContinue==1){
        continue;
    }
    }
    
    return 0;
}
//Multiplication Function 
int multiplyFunction(int a, int b, int c, int d)
{
    int numProduct = a * c;
    int denoProduct = b * d;
   
 
    printf("The Product is : %d/%d\n", numProduct, denoProduct);
    return 0;
}
//Division Function 
 int divideFunction(int a, int b, int c, int d)
 {
     int numDivision = a * d;
     int denoDivision = b * c;
     //if condition to check if the numerator is equal to the denominator then the result is 1
     if (numDivision == denoDivision)
     {
        printf("The Division is : %d/%d = %d\n", numDivision, denoDivision, 1);
     }
     else
     {
         printf("The Division is : %d/%d\n", numDivision, denoDivision);
     }
     return 0;
 }
 //Addition Function 
 int additionFunction(int a, int b, int c, int d)
 {
     int lcmDenominator;
     int k = 1;
     //Condition and loop to check for the lcm of the denominators
     lcmDenominator = (b > d) ? b : d;

     while (k)
     {
         if (lcmDenominator % b == 0 && lcmDenominator % d == 0)
         {
             int num1 = (lcmDenominator / b) * a;
             int num2 = (lcmDenominator / d) * c;
             int sumNum = num1 + num2;
             printf ("The Sum is : %d/%d\n", sumNum, lcmDenominator);
             break;
         }
         ++lcmDenominator;
     }
     return 0;
 }
 //Subtraction Function 
 int subtractionFunction(int a, int b, int c, int d)
 {
     int lcmDenominator = b * d;
     int k = 1;
     //Condition and loop to check for the lcm of the denominators
     lcmDenominator = (b > d) ? b : d;

     while (k)
     {
         if (lcmDenominator % b == 0 && lcmDenominator % d == 0)
         {
             int num1 = (lcmDenominator / b) * a;
             int num2 = (lcmDenominator / d) * c;
             int diffNum = num1 - num2;
             if (diffNum != 0)
             {
                printf ("The Difference is : %d/%d\n", diffNum, lcmDenominator);
             }
             else if (diffNum == 0)
             {
                printf ("The Difference is : %d\n", 0);
             }
             break;
         }
         ++lcmDenominator;
     }
  return 0;  
 }
//  //Display Function 
// int displayFunction(int a,int b,int c,int d){
//   printf("%d\n%d\n%d\n%d\n",a,b,c,d);
//   return 0;
// }