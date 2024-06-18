/* If bill exceeds Rs. 800 then a surcharge of 18% will be charged and the
minimum bill should be of Rs. 256/- */
#include <stdio.h>
int main()
{
    float billamount, total;
    
    printf("Enter The Bill Amount : ");
    scanf("%f",&billamount);
    
    if(billamount>800) {
        total = billamount + (billamount*0.18);
    }
    else {
        total = billamount;
    }
    
    if(total<256) {
        total=256;
    }
    printf("Total Bill Amount Is : %.2f\n",total);
    
    return 0;
}
