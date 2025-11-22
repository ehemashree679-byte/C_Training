#include <stdio.h>
enum month
{
    jan = 1,
    feb,march,april,may,june,july,aug,sep,oct,nov,dec
};
void main()
{
   enum month m;
   m = may;
   char*season;
   switch(m)
   {
    case dec: case jan: case feb:
    season = "winter"; 
    break;
    case march: case april: case may:
    season = "summer"; 
    break;
    case june: case july: case aug:
    season = "rainy"; 
    break;
    case sep: case oct: case nov:
    season = "monsoon"; 
    break;
   }
   printf("%d is a month of %s\n",m,season);
}