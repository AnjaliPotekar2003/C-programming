#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	/*char name1[]="Lovely Professional University";
	char name2[40]="i study at LPU";
	char name3[20]={'u','n','o'};
	char name4[]={'l','p','u'};
	char name5[10]={{'E'},{'C'},{'E'}};
	printf("name1 is %s\n",name1);
	printf("name2 is %s\n",name2);
	printf("name3 is %s\n",name3);
	printf("name4 is %s\n",name4);
    printf("name5 is %s)\n",name5);
*/
/*char name[20];
char details[20];
printf("enter details\n");
scanf("%s"name);
printf("the output is %s",name);
*/
/*gets(details);
puts(details);*/
char s1[60]="LPU";
char s2[60];
int n=5;
//strcpy(s2,s1);
strncpy(s2,s1,10);
printf("text after cpy s1 is not s2 %s \n ",s2);




}
