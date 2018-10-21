 
// C program to find GCD using Euclid's Algorithm
#include <stdio.h> 
  
int gcd(int a, int b) 
{ 
    if (a==0) 
        return b; 
    return gcd(b%a,a); 
} 
  
int main() 
{ 
    int a,b;
    printf("Enter Values of a and b -");
    scanf("%d %d",&a,&b);
    printf("GCD(%d, %d) = %dn",a,b,gcd(a, b));
    return 0; 
}
