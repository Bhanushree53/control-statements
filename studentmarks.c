#include<stdio.h>
int main()
{
	int n,i,marks,total=0;
	float percentage;
	printf("enter the number of subjects:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("enter marks for subject%d:");
		scanf("%d",&n);
		total = total + marks;
	}
	percentage = (float)total/n;
	printf("total marks = %d, total");
	printf("percentage = %2.f%%");
	
	if(percentage>=90)
	  printf("Grade=A+");
	    else if (percentage >= 80)
        printf("\nGrade = A");
    else if (percentage >= 70)
        printf("\nGrade = B");
    else if (percentage >= 60)
        printf("\nGrade = C");
    else if (percentage >= 50)
        printf("\nGrade = D");
    else
        printf("\nGrade = F");

    return 0;  

}

