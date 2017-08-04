#include <stdio.h>
#include<conio.h>
#include <stdlib.h>
void data(void);
void prime(void);
void eva(void);
void fact(void);
void cir(void);
void circum(void);
void divi(void);
void per(void);
void ptof(void);
int main()
{
   int choose,a,b,c;
   while(1)
   {
    printf("\t\t\t\tCalculator+Extra \n\a");
    printf("Press  1  for Add (+)\n");
    printf("Press  2  for sub (-)\n");
    printf("Press  3  for Mul (x)\n");
    printf("Press  4  for Div (/)\n");
    printf("Press  5  for Square (x*x)\n");
    printf("Press  6  for Cube (x*x*x)\n");
    printf("Press  7  for Data Memory converter\n");
    printf("Press  8  for Find Factor\n");
    printf("Press  9  for Check Prime numbers\n");
    printf("Press  10 for Check Evan and Odd\n");
    printf("Press  11 for Area Of Circle\n");
    printf("Press  12 for Circumfrence of Circle\n");
    printf("Press  13 for Check Divibility Of Number\n");
    printf("Press  14 for Check Percentage\n");
    printf("Press  15 for Convert Percentage to fraction\n");
    printf("Press  16 for Exit (bye-bye)\n");
    scanf("%d",&choose);

   // All Cases

    switch(choose)
    {
case 1:
      printf("\n\t\t\tyou choose Addtion\n");
      printf("Enter First Number\t");
      scanf("%d",&a);
      printf("Enter second Number\t");
      scanf("%d",&b);
      c=a+b;
      printf("your Answer = %d\n",c);
      getch();
    system("cls");
        break;
case 2:
      printf("\n\t\t\tyou choose Substract\n");
      printf("Enter First Number\t");
      scanf("%d",&a);
      printf("Enter second Number\t");
      scanf("%d",&b);
      c=a-b;
      printf("your Answer = %d\n",c);
      getch();
    system("cls");
      break;
case 3:
      printf("\n\t\t\tyou choose Multiply\n");
      printf("Enter First Number\t");
      scanf("%d",&a);
      printf("Enter second Number\t");
      scanf("%d",&b);
      c=a*b;
      printf("your Answer = %d\n",c);
      getch();
    system("cls");
      break;
case 4:
      printf("\n\t\t\tyou choose Divide\n");
      printf("Enter First Number\t");
      scanf("%d",&a);
      printf("Enter second Number\t");
      scanf("%d",&b);
      c=a%b;
      printf("your Answer = %d\n",c);
      getch();
    system("cls");
      break;
      case 5:
      printf("\n\t\t\tyou choose Square\n");
      printf("Enter 1 Number\t");
      scanf("%d",&a);
      c=a*a;
       printf("your Answer = %d\n",c);
       getch();
    system("cls");
      break;
      case 6:
      printf("\n\t\t\tyou choose Cube\n");
      printf("Enter 1 Number\t");
      scanf("%d",&a);
      c=a*a*a;
       printf("your Answer = %d\n",c);
       getch();
    system("cls");
      break;
      case 7:
      printf("\n\t\tyou choose Data Memory converter\n");
    data();
   getch();
    system("cls");
      break;
      case 8:
       printf("\t\t\tYou Choose Factor\n");
        fact();
                getch();
               system("cls");
               break;
      case 9:
        printf("\t\t\tYou Choose Check Prime Number\n");
                prime();
                getch();
               system("cls");
               break;
      case 10:
          printf("\t\tYou Choose Check Evan and Odd Number\n");
                eva();
                getch();
               system("cls");
               break;
      case 11:
                printf("\t\t\tYou Choose Area of Circle\n");
          cir();
          getch();
               system("cls");
               break;
          case 12:
           printf("\t\t\tYou Choose Circumfrence of Circle\n");
         circum();
          getch();
               system("cls");
               break;
               case 13:
                printf("\t\t\tYou Choose Divisibility\n");
         divi();
          getch();
               system("cls");
               break;
               case 14:
                printf("\t\t\tYou Choose check Percentage\n");
         per();
          getch();
               system("cls");
               break;
               case 15:
                printf("\t\tYou Choose Convert Percentage to fraction \n");
         ptof();
          getch();
               system("cls");
               break;
       case 16:
            exit(0);
           break;
          default:
  printf("Invalid Choice");
  getch();
    system("cls");
    }
   }
}


// All Functions


void data()
{
  int choose;
  float a;
  while(1)
  {
  printf("\n\t\t\tMemory Convertor\n");
  printf("Press 1   for Bit  into  Byte.\n");
  printf("Press 2   for byte into  Bit.\n");
  printf("Press 3   for byte into  kb.\n");
  printf("Press 4   for kb   into  Byte.\n");
  printf("Press 5   for kb   into  Mb.\n");
  printf("Press 6   for Mb   into  Kb.\n");
  printf("Press 7   for Mb   into  Gb.\n");
  printf("Press 8   for Gb   into  Mb.\n");
  printf("Press 9   for Gb   into  Tb.\n");
  printf("Press 10  for Tb   into  Gb.\n");
  printf("Press 11  for Exit.\n");
  scanf("%d",&choose);
  switch(choose)
  {
  case 1:
    printf("\t\t\tYou Choose Bits To Bytes\n");
    printf("Enter Bits");
    scanf("%f",&a);
    printf("%.0f Bits = %.2f bytes\n",a,a/8);
    getch();
    system("cls");
    break;
  case 2:
    printf("\t\t\tYou Choose Bytes To Bits\n");
    printf("Enter bytes");
    scanf("%f",&a);
    printf("%.0f bytes = %.2f bits\n",a,a*8);
    getch();
    system("cls");
    break;
    case 3:
    printf("\t\t\tYou Choose Bytes To kbs\n");
    printf("Enter Bytes");
    scanf("%f",&a);
    printf("%.0f Bytes = %.2f Kbs\n",a,a/1024);
    getch();
    system("cls");
    break;
  case 4:
    printf("\t\t\tYou Choose Kbs To Bytes\n");
    printf("Enter Kbs");
    scanf("%f",&a);
    printf("%.0f Kbs = %.2f Bytes\n",a,a*1024);
    getch();
    system("cls");
    break;
    case 5:
    printf("\t\t\tYou Choose Kbs To Mbs\n");
    printf("Enter Kbs");
    scanf("%f",&a);
    printf("%.0f Kbs = %.2f Mbs\n",a,a/1024);
    getch();
    system("cls");
    break;
  case 6:
    printf("\t\t\tYou Choose Mbs To Kbs\n");
    printf("Enter Mbs");
    scanf("%f",&a);
    printf("%.0f Mbs = %.2f Kbs\n",a,a*1024);
    getch();
    system("cls");
    break;
  case 7:
    printf("\t\t\tYou Choose Mbs To Gbs\n");
    printf("Enter Mbs");
    scanf("%f",&a);
    printf("%.0f Mbs = %.2f Gbs\n",a,a/1024);
    getch();
    system("cls");
    break;
  case 8:
    printf("\t\t\tYou Choose Gbs To Mbs\n");
    printf("Enter Gbs");
    scanf("%f",&a);
    printf("%.0f Gbs = %.2f Mbs\n",a,a*1024);
    getch();
    system("cls");
    break;
    case 9:
    printf("\t\t\tYou Choose Gbs To Tbs\n");
    printf("Enter Gbs");
    scanf("%f",&a);
    printf("%.0f Gbs = %.2f Tbs\n",a,a/1024);
    getch();
    system("cls");
    break;
  case 10:
    printf("\t\t\tYou Choose Tbs To Gbs\n");
    printf("Enter Tbs");
    scanf("%f",&a);
    printf("%.0f Tbs = %.2f Gbs\n",a,a*1024);
    getch();
    system("cls");
    break;
  case 11:
    exit(0);
    break;
    getch();
    system("cls");
  default:
                printf("Invalid Choice\n");
                getch();
                 system("cls");
  }
  }
}
void fact()
{
                int n,a;
                 printf("Enter a Number");
                 scanf("%d",&n);
                 printf("Factor of %d:-\t",n);
                  for(a=1;a<=n;++a)
                  {
                                  if(n%a == 0)
                                  {
                                                  printf(" %d ",a);
                                  }
                  }
                    getch();
                 system("cls");
}
void prime()
{

               int n, i, c = 0;
      printf("Enter any number");
      scanf("%d", &n);
      for (i = 1; i <= n; i++) {
          if (n % i == 0) {
             c++;
          }
      }
      if (c == 2) {
      	printf("%d is a Prime number",n);
      }
      else {
     	 printf("%d is not a Prime number",n);
      }
      getch();
}
void eva()
{
              int o;
             printf("Enter a Number:");
             scanf("%d",&o);
             if(o % 2 == 0)
             {
                 printf("%d Is  Evan Number\n",o);
             }
             else
             {
                printf("%d Is Odd Number\n",o);
             }
             getch();
}
void cir()
{
                float r,pie=3.14159,ci;
                printf("Enter Radius of circle:");
                scanf("%f",&r);
                ci=pie*r*r;
                printf("Area of circle =%f",ci);
                getch();
}
void circum()
{
               float r,pie=3.14159,ci;
                printf("\t\t\tYou Choose Circumfrence of Circle\n");
                printf("Enter Radius of circle:");
                scanf("%f",&r);
                ci=2*pie*r;
                printf("Circumfrence of Circle=%f",ci);
                getch();
}
void divi()
{
   int a,cho;
   while(1)
   {
  printf("\t\t\tChoose Divisibility\n");
  printf("Press 1  for Check Divisibility Of 2\n");
  printf("Press 2  for Check Divisibility Of 3\n");
  printf("Press 3  for Check Divisibility Of 4\n");
  printf("Press 4  for Check Divisibility Of 5\n");
  printf("Press 5  for Check Divisibility Of 6\n");
  printf("Press 6  for Check Divisibility Of 7\n");
  printf("Press 7  for Check Divisibility Of 8\n");
  printf("Press 8  for Check Divisibility Of 9\n");
  printf("Press 9  for Check Divisibility Of 10\n");
  printf("Press 10 for Exit\n\n");
   printf("Enter Your Choice");
  scanf("%d",&cho);
  switch(cho)
  {
  case 1:
   printf("\t\tyou choose Divisibility Of 2\n");
   printf("Enter A number");
   scanf("%d",&a);
   if(a % 2==0)
   printf("%d Is Divisilbe By 2\n",a);
   else
    printf("%d Is not Divisilbe By 2\n",a);
   getch();
   system("cls");
   break;
    case 2:
   printf("\t\tyou choose Divisibility Of 3\n");
   printf("Enter A number");
   scanf("%d",&a);
   if(a % 3==0)
   printf("%d Is Divisilbe By 3\n",a);
   else
    printf("%d Is not Divisilbe By 3\n",a);
   getch();
   system("cls");
   break;
    case 3:
   printf("\t\tyou choose Divisibility Of 4\n");
   printf("Enter A number");
   scanf("%d",&a);
   if(a % 4==0)
   printf("%d Is Divisilbe By 4\n",a);
   else
    printf("%d Is not Divisilbe By 4\n",a);
   getch();
   system("cls");
   break;
    case 4:
   printf("\t\tyou choose Divisibility Of 5\n");
   printf("Enter A number");
   scanf("%d",&a);
   if(a % 5==0)
   printf("%d Is Divisilbe By 5\n",a);
   else
    printf("%d Is not Divisilbe By 5\n",a);
   getch();
   system("cls");
   break;
   case 5:
   printf("\t\tyou choose Divisibility Of 6\n");
   printf("Enter A number");
   scanf("%d",&a);
   if(a % 6==0)
   printf("%d Is Divisilbe By 6\n",a);
   else
    printf("%d Is not Divisilbe By 6\n",a);
   getch();
   system("cls");
   break;
    case 6:
   printf("\t\tyou choose Divisibility Of 7\n");
   printf("Enter A number");
   scanf("%d",&a);
   if(a % 7==0)
   printf("%d Is Divisilbe By 7\n",a);
   else
    printf("%d Is not Divisilbe By 7\n",a);
   getch();
   system("cls");
   break;
    case 7:
   printf("\t\tyou choose Divisibility Of 8\n");
   printf("Enter A number");
   scanf("%d",&a);
   if(a % 8==0)
   printf("%d Is Divisilbe By 8\n",a);
   else
    printf("%d Is not Divisilbe By 8\n",a);
   getch();
   system("cls");
   break;
    case 8:
   printf("\t\tyou choose Divisibility Of 9\n");
   printf("Enter A number");
   scanf("%d",&a);
   if(a % 9==0)
   printf("%d Is Divisilbe By 9\n",a);
   else
    printf("%d Is not Divisilbe By 9\n",a);
   getch();
   system("cls");
   break;
   case 9:
   printf("\t\tyou choose Divisibility Of 10\n");
   printf("Enter A number");
   scanf("%d",&a);
   if(a % 10==0)
   printf("%d Is Divisilbe By 10\n",a);
   else
    printf("%d Is not Divisilbe By 10\n",a);
   getch();
   system("cls");
   break;
   case 10:
      exit(0);
      system("cls");
   break;
  default:
   printf("Invalid Choice\n");
   getch();
   system("cls");
   }
  }
 }

 void  per()
 {
   int a,b;
   float c;
   printf("Enter a number");
    scanf("%d",&a);
   printf("Enter a Total number");
    scanf("%d",&b);
   c = (float)a / b * 100.0;
   printf("%.2f%%  of  %d/%d",c,a,b);
   }
void ptof()
{
 int a,c;
 printf("Enter Percentage");
 scanf("%d",&a);
}
