#include <stdio.h>
#define CONV_FACTOR 5.0/9

void temp_conv();

void temp_conv()
{
     double counter = 0;
     for(; counter <= 300; counter+=20)
     {
        printf("Cel = %3.2f \t Fah = %6.2f \n", \
        counter, ( CONV_FACTOR ) * (counter-32));
     }
}

main()
{
    temp_conv();
}
