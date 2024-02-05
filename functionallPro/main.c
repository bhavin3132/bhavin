/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
// C program to calculate Area of Circle
float circle(){
    const float PI=3.14;
    float area,redius;
    printf("Enter the Redius circle:");
    scanf("%f",&redius);
    area= PI*redius*redius;
    return area;
}

// C program to calculate Area of Square
float square(){
    
    float area,side;
    printf("Enter the Redius square:");
    scanf("%f",&side);
    area=side*side ;
    return area;
}

// C program to calculate Area of Rectangle.
float rectangle(){
    
    float length,width,area;
    printf("Enter the length rectangle:");
    scanf("%f",&length);
    
    printf("Enter the width rectangle:");
    scanf("%f",&width);
    
    
    area=length*width ;
    return area;
}
// C program to calculate Area of Triangle.

float triangle(){
    
    float base,hight,area;
    printf("Enter the Base Triangle:");
    scanf("%f",&base);
    
    printf("Enter the Hight Triangle:");
    scanf("%f",&hight);
    
    
    area=(base*hight)/2 ;
    return area;
}

// C program to calculate simple intrest.

float intrest(){
    
    float principal,rate,time,intrest;
    printf("Enter the principal for intrest:");
    scanf("%f",&principal);
    
    printf("Enter the rate for intrest:");
    scanf("%f",&rate);
    
    printf("Enter the time for intrest:");
    scanf("%f",&time);
    
    
    intrest=(principal*rate*time)/100 ;
    return intrest;
}

//   Write program to given data.
//       Rate    qty    amt    dis5%  billamt  gst18%  NetBill
//         50     200   10000    500    9500      ?        ? 

void data(){
    int rate=50,qty=200,amt,dis5,billamt,gst18,netbill;
    printf("rate\tqty\tamt\tdis5\tbillamt\tgst18\tnetbill\n");
    
    printf("%d\t",rate);
    printf("%d\t",qty);
    amt=qty*rate;
    printf("%d\t",amt);
    dis5=(amt*5)/100;
    printf("%d\t",dis5);
    billamt=amt-dis5;
    printf("%d\t",billamt);
    gst18=(billamt*18)/100;
    printf("%d\t",gst18);
    netbill=(billamt+gst18);
    printf("%d\t",netbill);
    
  
}
// program swapping value without using third variable.
int value(){
    int a=10,b=20;
    printf("\nswap a=%d b=%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nAfter swaip a=%d b=%d",a,b);
    
}
// program swapping value using third variable.
int value1(){
    int a=10,b=20,c;
    printf("\nswap a=%d b=%d",a,b);
    c=a;
    a=b;
    b=c;
    printf("\nAfter swaip a=%d b=%d",a,b);
    
}
// Enter two value find smallest.
void smallest(){
    int a,b;
    printf("Enter any twe valur:");
    scanf("%d%d",&a,&b);
    
    
    
    if (a<b){
        printf("small A value");
    }
    else {
        printf("small B value");
    }
}

// Enter one value find its positive or negative.
void value3(){
    int a;
    printf("Enter number:");
    scanf("%d",&a);
    
    if(a>0){
        printf("%d is positive",a);
    }
    else{
        printf("%d is negative",a);
    }
}
// Enter one value find its divisible by 5 or not.
// Enter one valdiviue find its sible by 5 and 3 or not
void value4(){
    int a;
    printf("Enter number:");
    scanf("%d",&a);
    
    if(a%5==0){
        printf("%d is divisible by 5",a);
    }
    else if(a%3==0){
        printf("%d is divisible by 3",a);
    }
    else{
        printf("%d is not divisible by 5&3",a);
    }
}
// Enter Students marks wheather pass or not.
void value5(){
    int a;
    printf("Enter marks:");
    scanf("%d",&a);
    
    if(a>=35){
        printf("%d is pass",a);
    }
    else{
        printf("%d is not pass",a);
    }
}
// Enter year find its leap year or not.
void leapyear(){
    int year;
    printf("Enter year:");
    scanf("%d",&year);
    
    if(year%400==0){
        printf("%d is a leap year",year);
    }
    else if(year%100==0){
        printf("%d is not leap year",year);
    }
    else if(year%4==0){
        printf("%d is a leap year",year);
    }
    else{
        printf("%d is not leap year",year);
    }
    
}
// Enter a, b, c find largest among them.
void value6(){
    int a,b,c;
    printf("Enter the number A\tB\tC\n:");
    scanf("%d\t%d\t%d",&a,&b,&c);
    if(a>=b&&a>=c){
        printf("%d is a largest amount A.",a);
    }
    else if(b>=a&&b>=c){
        printf("%d is a largest amount B.",b);
    }
    else{
        printf("%dis a largest amount C.",c);
    }
}
// cheack wheather the given number positive, negative or zero.
void value7(){
    int a;
    printf("Enter number:");
    scanf("%d",&a);
    
    if(a>0){
        printf("%d is positive",a);
    }else if(a==0){
        printf("%d is zero",a);
    }
    else{
        printf("%d is negative",a);
    }
}
// print 10-1
void prin(){
    int i=1;
        while(i<=10)
        {
            printf("%d\n",i);
            i++;
        }
}    
void prin1(){
    
    int a;
    for(a=51;a<=99;a++)
    {
    printf("%d\n",a);
    }
}
void prin2(){
    
    int a,n;
    printf("Enter N Value:");
    scanf("%d",&n);
    
    for(a=1;a<=n;a++)
    {
    printf("%d\n",a);
    }
}
void prin3(){
    int a,n;
    printf("Enter N to 1 Value:");
    scanf("%d",&n);
    for(a=n;a>=1;a--)
    {
        printf("%d\n",a);
    }
}
// emter n print -n to n
void prin4(){
    int a,n,b;
    printf("Enter -N to N Value:");
    scanf("%d %d",&b,&n);
    for(a=b;a<=n;a++)
    {
        printf("%d\n",a);
    }
}
// print odd no. up to 50
void prin5(){
    int a;
    for(a=1;a<=50;a++)
    if(a % 2 != 0){
        printf("%d\n",a);
    }
}
// print even no. up to 50
void prin6(){
    int a;
    for(a=1;a<=50;a++)
    if(a % 2==0){
        printf("%d\n",a);
    }
}
// print A - Z
void prin7(){
    char ch= 'A';
    while(ch<='Z'){
        printf("%c \n", ch);
         
        ch++; 
    }
}
// print A-65.... Z-90
void prin8(){
    char ch='A';
    while(ch<='Z'){
        printf("%c-",ch);
        printf("%d\n",ch);
        ch++;
    }
}
// print A-a .... Z-z
void prin9(){
    char ch='A';
    while(ch<='Z'){
        printf("%c-%c\n", ch,ch+32);
        // printf("%d\n",ch);
        ch++;
    }
}
// total 1,2,....10 = 55
void prin10(){
    int i=1,c=0;
//     for(i=1;i<=10;i++){
//         printf("%d\n",i);
//         c=c+i;
//     }
//     printf("%d",c);
    while(i<=10){
        printf("%d\n",i);
            c=c+i;
            
            i++;
        }
        printf("%d\n ",c);
}
//   total odd 1,3,5
//   total even 2,4,6
void prin11(){
    int i;
    for(i=1;i<=10;i++)
    
          if(i % 2 != 0)
          {
              printf("%d ",i);
          }
          else if(i%2==0)
          {
              printf("%d \n",i); 
          }
          i++;
     
}
// void prin12(){
//     int i;
//     for(i=1;i<=10;i++)
//     if(i % 2==0){
//         printf("\n%d \n",i);
//     }
// }
// 1,4,9,16,.....,n
void prin13(){
    int i=1,n;
    // printf("enter number:");
    // scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        printf("%d \n", i * i);
            // printf("\n");
    }
}
// 1,4,3,16,5,...,n
void prin14(){
    int i;
    for(i=1;i<=10;i++)
    if(i%2!=0){
        printf("%d \n",i);
    }
    else{
        printf("%d \n",i*i);
    }
}
// 1,2,4,8,16,...,n
void prin15(){
    int i;
    for(i=1;i<=100;i*=2)
    {
        printf("%d ",i);
    }
}
// 1,4,12,32,80,...,n
// void prin16(){
    
// }    

// A,C,E,G,I,...
void prin17(){
    char i=65;
    for(i=65;i<=90;i++)
    if(i%2==1){
        printf("\n%c",i);
    }
}
// 1,1,2,3,5,...n
void prin18(){
        int i=1,j=0,k=1,n,m;
    
    // printf("enter number:");
    // scanf("%d\t",&n);
    
    do{
        m=k+j;
        printf("%d\t",m);
        k=j;
        j=m;
        i++;
    }while(i<=10);
    
}
// 0.5,1,2.5,5,...n
void prin19(){
int n;
    float a=0.5,b=0.5;
    printf("\nEnter number:");
    scanf("%d",&n);
    
    for(int i=0;i<=n;i++)
    {
        printf("%.1f, ",a);
        a+=b;
        b+=1;
    }
} 
// A,c,E,g,I,...
void prin20(){
    char i=65;
    for(i=65;i<=90;i++)
    if(i%2==1){
        printf("\n%c",i);
    }
}
// PATTERN
void pattern1(){
    int i=1,j=1;
    for(i=0;j<=4;i++){
    for(j=0;j<=i;j++)
        {
            printf("%d",j+1);
        }
        printf("\n");
    }
}
void pattern2(){
    int i=1;
    
    while(i<=5){
        int j=1;
        while(j<=i){
            printf("%d",i);
            ++j;
        }
    
        printf("\n");
        ++i;
    }
}
void pattern3(){
    
    for(int i=5;i>=1;i--){
    for(int j=5;j>=i;j--){
        printf("%d",i);
    }
    printf("\n");
    }
}
void pattern4(){
    int k=1;
    for(int i=1;i<=5;i++){
    for(int j=1;j<=i;j++){
        printf("%d",k++);
    }
    printf("\n");
    }
}
void pattern5(){
    for(int i=5;i>=1;i--){
    for(int j=5;j>=i;j--){
        printf("%d",j);
    }
    printf("\n");
    }
    
}
void pattern6(){
    char i,k=65;
    char j;
    
    for( i=65;i<=69;i++){
    for( j=65;j<=i;j++){
        printf("%c",j);
    }
    printf("\n");
    }
    
}
void pattern7(){
    char i,k=65,j,p=97;
    
    
    for( i=1;i<=5;i++){
    for( j=1;j<=i;j++){
        if (i%2==1){
            printf("%c",k++);
            p++;
        }else{
            printf("%c",p++);
            k++;
        }    
    }
    printf("\n");
    }
    
}
void pattern8(){
    char i,k=65,j,p=97;
    
    
    for( i=1;i<=5;i++){
    for( j=1;j<=i;j++){
        if (j%2==1){
            printf("%c",p++);
            k++;
        } else{
            printf("%c",k++);
            p++;
        }    
    }
    printf("\n");
    }
    
}
void pattern9(){
    char i,k=65,j,p=97;
    
    
    for( i=1;i<=5;i++){
    for( j=1;j<=i;j++){
            printf("%c",k++);
           
    }
    printf("\n");
    }
    
}
void pattern10(){
    for(int i=5;i>=1;i--){
    for(int j=5;j>=i;j--){
        printf("%d",i);
        
    }    
    printf("\n");
    }
}

int main(){
    
    // float circlearea,squarearea,rectanglearea,trianglearea,intrestarea;
    // int datasum,swapvalue;
    // circlearea= circle();  
    // printf("Area of circle is:%f \n",circlearea);
    
    // squarearea= square();  
    // printf("Area of square is:%f \n",squarearea);
   
    // rectanglearea= rectangle();  
    // printf("Area of rectangle is:%f \n",rectanglearea);
    
    // trianglearea= triangle();  
    // printf("Area of Triangle is:%f \n",trianglearea);
    
    // intrestarea= intrest();  
    // printf("Area of Intrest is:%f \n",intrestarea);
    
    // data();
    
    // value();
    // value1();
    // smallest();
    // value3();
    // value4();
    // value5();
    // leapyear();
    // value6();
    // value7();
    // prin();
    // prin1(); 
    // prin2();
    // prin3();
    // prin4();
    // prin5();
    // prin6();
    // prin7();
    // prin8();
    // prin9();
    // prin10();
    // prin11();
    // prin12();
    // prin13();
    // prin14();
    // prin15();
    // prin16();
    // prin17();
    // prin18();
    // prin19();
    // prin20();
    // pattern1();
    // pattern2();
    // pattern3();
    // pattern4();
    // pattern5();
    // pattern6();
    // pattern7();
    // pattern8();
    // pattern9();
    pattern10();
    return 0;
}




