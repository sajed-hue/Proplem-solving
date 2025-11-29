//sajed kittanh
//202411395
//14-11-2025
//------------------------------------------
#include <iostream>
#include <cmath>
using namespace std;
//------------------------------------------
int add(int a,int b){//to add
return a+b;
}
//------------------------------------------
int subtract(int a,int b){//to subtract
return a-b;
}
//------------------------------------------
int multiply(int a,int b){
return a*b;
}
//------------------------------------------
int divide(int a,int b){
return a/b;
}
//------------------------------------------
int square(int a){
return sqrt(a);
}
int cube(int a){//a^3
return cbrt(a);
}
//------------------------------------------
int factorial(int a){//a!
for(int i=a;i>=1;i--)
a*=i;
return a;
}
//------------------------------------------
void isEven(int a){//check is even or not
    if(a%2==0)
    cout<<"Even"<<endl;
    else
    cout<<"Odd"<<endl;
}
//------------------------------------------
void isPrime(int a){
    if(a==0||a==1)
    cout<<"the number\t"<<a<<"\tis not prime"<<endl;
    else{
    for(int i=2;i<a;i++)
    {
       if(a%i==0)
           {cout<<"the number\t"<<a<<"\tis not prime"<<endl;
             break;
        }
      else
        {cout<<"the number\t"<<a<<"\tis prime"<<endl;break;}
    }
      }
}
//------------------------------------------
float avarage(int a,int b)
{
return (a+b)/2;
}
//------------------------------------------
int maxNumber(int a,int b){
int max;
if(a>b)
max=a;
else
max=b;
    return max;
}
//------------------------------------------
int minNumber(int a,int b){
int min;
if(a<b)
min=a;
else
min=b;
return min;
}
//------------------------------------------
int sumToN(int n)
{
 int sum=0;
for(int i=1;i<=n;i++)
{sum+=i;
}
 return sum;
}
//------------------------------------------
float areaArticle(int r)
{
 return   3.14*r*r;
}
//------------------------------------------
float areaTriangle(int b,int h)
{
 return   0.5*b*h;
}
//------------------------------------------
int simpleInterest(int p,int r,int t){
return p*r*t;
}
//------------------------------------------
int power(int a,int b){//a^b
return pow(a,b);
}
int Modulas(int a,int b){
return a%b;
}
//----------------------------------
int gcd(int a,int b){//Find greatest common divisor
int result=min(a,b);
while(result>0){

if(a%result==0&&b%result==0)

    {break;}

    result --;
}
  return result;
}

//---------------------------------------------------------
int lcm(int a,int b){//Find least common multiple

int large=max(a,b);
int small=min(a,b);

for(int i=large;i<large*small;i+=large)
{
    if(i%small==0)
    return i;
}
return 0;
}
void EncryptionArray(int arr[],int n)
{


for (int i=0;i<n;i++)
    cin>>arr[i];

//----------before changing-------------------------
cout <<"Before changing: ";
for (int i=0;i<n;i++)
    cout<<arr[i]<<"\t";
    cout<<endl;

for(int i=0;i<n;i++)//some changing in format
{
if(i==3)
arr[i]=cube(arr[i]);
if(i%2==0)
arr[i]=sqrt(arr[i]);

}
int maxi,mini=arr[0],m=0,M=0;//to swap min and max
for(int i=0;i<n;i++)
{
if(arr[i]>maxi)
{
 maxi=arr[i];
 M=i;
}

if(arr[i]<mini)
{mini=arr[i];
m=i;
   }

}
arr[m]=maxi;
arr[M]=mini;


//----------after changing-------------------------
cout <<"After changing: ";
for (int i=0;i<n;i++)
    cout<<arr[i]<<"\t";
    cout<<endl;

}
int main()
{
    int n;
    cin>>n;
int arr[n];
EncryptionArray(arr,n);
return 0;
}
