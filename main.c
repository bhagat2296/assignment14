#include <stdio.h>
#include <stdlib.h>

/*void sum(int[]);                                                                 //Question 1
int main()
{
    int a[10];
    printf("enter 10 number in array\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    sum(a);
    return 0;
}

void sum(int b[])
{
    int n=0;
    for(int i=0;i<10;i++)
    {
        n=n+b[i];
    }

    printf("sum of array numbers is %d",n);

}*/



/*void avg(int[]);                                                                 //Question 2
int main()
{
    int a[10];
    printf("enter 10 number in array\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    avg(a);
    return 0;
}

void avg(int b[])
{
    float n=0;
    for(int i=0;i<10;i++)
    {
        n=n+b[i];
    }
    printf("Average of array numbers is %f",(n/10));

}*/

/*void sum(int[]);                                                                 //Question 3
int main()
{
    int a[10];
    printf("enter 10 number in array\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    sum(a);
    return 0;
}

void sum(int b[])
{
    int n=0,m=0;
    for(int i=0;i<10;i++)
    {
        if(b[i]%2==0)
        n=n+b[i];
    else
        m=m+b[i];
    }

    printf("sum of even numbers in the array is %d\n",n);
    printf("sum of odd numbers in the array is %d\n",m);
}*/


/*void sum(int[]);                                                                 //Question 4
int main()
{
    int a[10];
    printf("enter 10 number in array\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    sum(a);
    return 0;
}

void sum(int b[])
{
    for(int i=0;i<10;i++)
    {
        if(b[0]<b[i])
            b[0]=b[i];

    }

    printf("greatest number in the array is %d\n",b[0]);
}*/


/*void sum(int[]);                                                                 //Question 5
int main()
{
    int a[10];
    printf("enter 10 number in array\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    sum(a);
    return 0;
}

void sum(int b[])
{
    for(int i=0;i<10;i++)
    {
        if(b[0]>b[i])
            b[0]=b[i];

    }

    printf("smallest number in the array is %d\n",b[0]);
}*/


/*void sort(int[]);                                                                 //Question 6
int main()
{
    int a[10];
    printf("enter 10 number in array\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a);
    return 0;
}
void sort(int b[])
{
    int temp;
    for(int i=0;i<10;i++)
    for(int j=i;j<10;j++)
    {
        temp=0;
        if(b[i]>b[j])
        {
            temp=b[j];
            b[j]=b[i];
            b[i]=temp;
        }
    }
for(int k=0;k<10;k++)
    printf("sorted number of the array is %d\n",b[k]);
}*/



/*void sort(int[]);                                                                 //Question 8
int main()
{
    int a[10];
    printf("enter 10 number in array\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a);
    return 0;
}
void sort(int b[])
{
    int temp;
    for(int i=0;i<10;i++)
    for(int j=i;j<10;j++)
    {
        temp=0;
        if(b[i]>b[j])
        {
            temp=b[j];
            b[j]=b[i];
            b[i]=temp;
        }
    }

    printf("second smallest number of the array is %d\n",b[1]);
}*/



/*void sort(int[],int);                                                                 //Question 9
int main()
{
    int n;
    printf("enter size of an array\n");
    scanf("%d",&n);
    int a[n];

    printf("enter value in array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,n);
    return 0;
}
void sort(int b[],int n)
{
    for(int i=n-1;i>0;i--)
    printf("%d\n",b[i]);
}*/



/*int main()                                                                                //Question 10
{
    int n;
    printf("enter size of an array\n");
    scanf("%d",&n);
    int a[n];
    int b[n];

    printf("enter value in array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("values of a array\n\n");
    for(int i=0;i<n;i++)
        printf("%d\n",a[i]);

        for(int i=0;i<n;i++)
            b[i]=a[i];

             printf("values of b array\n\n");

             for(int i=0;i<n;i++)
                printf("%d\n",b[i]);
}*/
