#include<stdio.h>
#define PI 3.14
int x;
int add(int *ptr1,int *ptr2,int *ptr3,int *ptr4,float *ptr5);
void functon1();
void function2();
void __attribute__((constructor)) function1();
void __attribute__((destructor)) function2();
void main()
{
    int i=1,total,choice,a=0,l=0,b=0,h=0;
    float r=0.0;
    void *p1;
    total=calloc(10,sizeof(int)); 
    do
    {
        printf("\nPress 1 to find area of cricle: ");
        printf("\nPress 2 to find area of square: ");
        printf("\nPress 3 to find area of rectangle: ");
        printf("\nPress 4 to area of tringle: ");
        printf("\nPress 5 to exit");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
        if(choice==1)
        {
            printf("Enter radius of cricle: ");
            scanf("%f",&r);
        }
        else if(choice==2)
        {
            printf("Enter length of square: ");
            scanf("%d",&a);
        }
        else if(choice==3)
        {
            printf("Enter length of rectangle: ");
            scanf("%d",&l);
            printf("Enter breath of rectangle: ");
            scanf("%d",&b);
        }
        else if(choice==4)
        {
            printf("Enter base of tringle: ");
            scanf("%d",&b);
            printf("Enter height of tringle: ");
            scanf("%d",&h);
        }
        switch(choice)
        {
            case 1:
                x=1;
                total=add(&a,&l,&b,&h,&r);
                printf("Area of cricle is: %d",total);
                break;
            case 2:
                x=2;
                total=add(&a,&l,&b,&h,&r);
                printf("Area of square is: %d",total);
                break;
            case 3:
                x=3;
                total=add(&a,&l,&b,&h,&r);
                printf("Area of rectangle is: %d",total);
                break;
            case 4:
                x=4;
                total=add(&a,&l,&b,&h,&r);
                printf("Area of tringle is: %d",total);
                break;
            case 5:
                i=3;
                break;
            default:
                printf("Enter a valid choice");
        }
    }while(i==1);
}
int add(int *ptr1,int *ptr2,int *ptr3,int *ptr4,float *ptr5) // a,l,b,h,r
{
    int sum;
    if(x==1)
    {
        sum= PI* *ptr5 * *ptr5;
    }
    if(x==2)
    {
        sum= *ptr1 * *ptr1;
    }
    if(x==3)
    {
        sum= *ptr2 * *ptr3;
    }
    if(x==4)
    {
        sum= 0.5* *ptr3 * *ptr4;
    }
    return sum;
}
void function1()
{
    printf("Welcome \nThis program is written to calculate the are of cricle, square, rectangle and tringle.");
}
void function2()
{
    printf("You have pressed 5 and so program has been terminated. \nBye! have a nice day");
}

