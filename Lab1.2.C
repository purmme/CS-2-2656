#include<stdio.h>

int main()
{
    float broad, lengthy, area;
    
    printf("Enter wide value = ");
    scanf("%f", &broad);
    
    printf("Enter long value = ");
    scanf("%f", &lengthy);
    
    area = broad*lengthy;
    printf("Area = %7.2f\n",area);
    
    system("PAUSE");
    return 0;
}
