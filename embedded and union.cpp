#include<stdio.h>
#include<string.h>
/*union data
{
	char str[20];
	int i;
	float f;
};
struct meta
{
	char str[20];
	int i;
	float f;
};
main()
{
union data d;
struct meta m;
printf("structure  %d\n",sizeof(d));
printf("union %d\n",sizeof(m));	
}
*/
struct student
{
	char name[20];
	int id;
	int age;
};
void show(struct student s);
main()
{
	struct student s1={1,21};
	//calling
show(s1);
  }; 
void show(struct student s)
{
	printf("id is %d\n",s.id);
	printf("age is %d",s.age);
}
