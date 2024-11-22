#include <stdio.h>
#include <stdbool.h>
int main()
{
    char type; 
    double x;
    double y;
    double result;
    char retract;
    bool check_for_valid = false;
    printf("enter a operation type (+ - * /): ");
    scanf("%c" , &type);
    printf("enter num a and b");
    scanf("%lf %lf", &x,&y);
    
    switch(type)
    {
        case '+':
            result = x + y;
            printf("%.2lf",result);
            break;
        case '-':
            while (check_for_valid == false)
            {
            printf("do you want to retract from %.2lf or %.2lf?: ", x ,y);
            scanf("%d" , &retract);
            if(retract == x)
            {
                result = x - y;
                check_for_valid= true;
                break;
            }
            else if (retract == y)
            {
                result = y-x;
                check_for_valid = true;
                break;
            }
            else
            {
                printf("not a valid option!");
            }
            }
            printf("%.2lf",result);
            break;
        case '/':
            while (check_for_valid == false)
            {
            printf("do you want to divide from %.2lf or %.2lf?: ",x ,y);
            scanf("%d" , &retract);
            if(retract == x)
            {
                result = x / y;
                check_for_valid= true;
                break;
            }
            else if (retract == y)
            {
                result = y/x;
                check_for_valid = true;
                break;
            }
            else
            {
                printf("not a valid option!");
            }
            }
            printf("%.2lf",result);
            break;
        case '*':
            result = x *y;
            printf("%.2lf",result);
            break;

            
    }
    return 0;
}