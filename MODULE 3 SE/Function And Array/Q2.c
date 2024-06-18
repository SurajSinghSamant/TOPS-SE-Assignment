//WAP of Addition, Subtraction, Multiplication and Division using Switch case.(Must Be Menu Driven)

#include <stdio.h>
void addition();
void subtraction();
void multiplication();
void division();

int main()
{
    int choice;
    
    while (1)
    {
        printf("\nMenu:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                addition();
                break;
                
            case 2:
                subtraction();
                break;
                
            case 3:
                multiplication();
                break;
                
            case 4:
                division();
                break;
                
            case 5:
                printf("Exiting The Program.\n");
                return 0;
                
            default:
                printf("Enter Valid Values.\n");
        }
    }
    
    return 0;
}

void addition()
{
    float num1, num2, result;
    printf("Enter Two Numbers To Add : ");
    scanf("%f %f", &num1, &num2);
    result = num1 + num2;
    printf("The Result Is : %.2f\n", result);
}

void subtraction()
{
    float num1, num2, result;
    printf("Enter Two Numbers To Subtract : ");
    scanf("%f %f", &num1, &num2);
    result = num1 - num2;
    printf("The Result Is : %.2f\n", result);
}

void multiplication()
{
    float num1, num2, result;
    printf("Enter Two Numbers To Multiply : ");
    scanf("%f %f", &num1, &num2);
    result = num1 * num2;
    printf("The Result Is : %.2f\n", result);
}

void division()
{
    float num1, num2, result;
    printf("Enter Two Numbers To Divide : ");
    scanf("%f %f", &num1, &num2);
        result = num1 / num2;
        printf("The Result Is : %.2f\n", result);
}


