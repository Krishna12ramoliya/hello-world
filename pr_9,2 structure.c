#include<stdio.h>
#include<string.h>
struct student
{
	int Rollno;
	char Name[50];
	int Chemistry;
	int Mathemetics;
	int Physics;
	float percentage;
	int total;
};
int main()
{
	int i;
	struct student s[i];
	
	for(i=0;i<5;i++)
	{
	
	printf("enter details of student :%d\n ",i+1);
	printf("Roll no:");
	scanf("%d",&s[i].Rollno);
	printf("Name:");
	scanf("%s",&s[i].Name);
	gets(s[i].Name);
	printf("chemistry:");
	scanf("%d",&s[i].Chemistry);
	printf("mathematics:");
	scanf("%d",&s[i].Mathemetics);
	printf("physics:");
	scanf("%d",&s[i].Physics);
	printf("\n");
	printf("rollno:%d \n Name:%s\n Chemistry:%d\n Mathemetics:%d\n Physics:%d\n",s[i].Rollno,s[i].Name,s[i].Chemistry,s[i].Mathemetics,s[i].Physics);
	printf("\n");}
	for(i=0;i<5;i++)
	{
		s[i].percentage=(s[i].Chemistry+s[i].Mathemetics+s[i].Physics)/3;
		s[i].total=s[i].Chemistry+s[i].Mathemetics+s[i].Physics;
		}

for(i=0;i<5;i++)
	{	
	printf("Rollno:%d\n",s[i].Rollno);
	printf("name:%s\n",s[i].Name);
	printf("chemistry:%d\n",s[i].Chemistry);
	printf("mathemetics:%d\n",s[i].Mathemetics);
	printf("physics:%d\n",s[i].Physics);
	printf("percentage:%f\n",s[i].percentage);	
	printf("total:%d\n",s[i].total);
	printf("\n");

}
}
/*output:
enter details of student :1
 Roll no:1
Name:ram
chemistry:45
mathematics:95
physics:85

rollno:1
 Name:ram
 Chemistry:45
 Mathemetics:95
 Physics:85

enter details of student :2
 Roll no:2
Name:sita
chemistry:78
mathematics:98
physics:98

rollno:2
 Name:sita
 Chemistry:78
 Mathemetics:98
 Physics:98

enter details of student :3
 Roll no:3
Name:gita
chemistry:45
mathematics:65
physics:89

rollno:3
 Name:gita
 Chemistry:45
 Mathemetics:65
 Physics:89

enter details of student :4
 Roll no:4
Name:fish
chemistry:89
mathematics:98
physics:98

rollno:4
 Name:fish
 Chemistry:89
 Mathemetics:98
 Physics:98

enter details of student :5
 Roll no:5
Name:jiya
chemistry:45
mathematics:85
physics:75

rollno:5
 Name:jiya
 Chemistry:45
 Mathemetics:85
 Physics:75

Rollno:1
name:ram
chemistry:45
mathemetics:95
physics:85
percentage:75.000000
total:225

Rollno:2
name:sita
chemistry:78
mathemetics:98
physics:98
percentage:91.000000
total:274

Rollno:3
name:gita
chemistry:45
mathemetics:65
physics:89
percentage:66.000000
total:199

Rollno:4
name:fish
chemistry:89
mathemetics:98
physics:98
percentage:95.000000
total:285

Rollno:5
name:jiya
chemistry:45
mathemetics:85
physics:75
percentage:68.000000
total:205
*/



	



  