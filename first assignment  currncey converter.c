#include <stdio.h>
#include <stdlib.h>
int main()
{
	float ans,ans1,ans2,ans3,ab;
	int ch;

	printf("\n\n1. Rupees -> Dollars");
	printf("\n\n2. Dollars -> Rupees");
    printf("\n\n3. Dollars -> Bitcoin");
    printf("\n\n4. Rupees -> Bitcoin");
	printf("\n\nEnter your choice= ");
	scanf("%d",&ch);
  if (ch==1) {
    printf("\n\nEnter the currency in Rupees= ");
    scanf("%f", &ab);
    ans=ab/160;
    printf("\n\nThe currency in dollars is %.2f$",ans);
  } else if (ch==2) {
    printf("\n\nEnter the currency in Dollars= ");
    scanf("%f", &ab);
    ans=ab*160;
    printf("\n\nThe currency in Rupees is %.2f$",ans);
  }
  else if(ch==3)
  {printf("\n\nEnter the currency in Dollar= ");
    scanf("%f", &ab);
    ans=ab/57859.50 ;
    printf("\n\nThe currency in Bitcoin is %.2f$",ans);
  	
  }
 else if (ch==4)
  {printf("\n\nEnter the currency in Ruppes= ");
    scanf("%f", &ab);
    ans=ab/8981240.89 ;
    printf("\n\nThe currency in Bitcoin is %.2f$",ans);
}
  return(0);
}
