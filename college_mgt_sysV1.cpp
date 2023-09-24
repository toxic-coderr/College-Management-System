#include<stdio.h>
#include<stdlib.h>
#include<string.h>
FILE *f,*rem,*f1;

struct subject
{
	char name[10];
	char attended[4];
};

struct Attendance
{
	struct subject sub1;
	struct subject sub2;
	struct subject sub3;
	struct subject sub4;
	struct subject sub5;
	struct subject sub6;
	struct subject sub7;
};

struct marktype
{
	char name[20];
	char marks[4];
};

struct Marks
{
	struct marktype sub1;
	struct marktype sub2;
	struct marktype sub3;
	struct marktype sub4;
	struct marktype sub5;
	struct marktype sub6;
	struct marktype sub7;
};

struct Contact
{
	char phonenum[15];
	char email[29];
	char address[300];
};

struct Date
{
	char day[5];
	char month[5];
	char year[10];
};

struct teacher
{
	char ID[20];
	char name[30];
	char year[6];
	char department[5];
	char salary[10];
	Date DOB;
	Contact contact;
	char password[15];
}teach,empty_teach;

struct student
{
	char USN[30];
	char name[30];
	char semester[4];
	char section[3];
	char course[5];
	struct Date DOB;
	struct Contact contact;
	struct Marks IA1;
	struct Marks IA2;
	struct Marks IA3;
	struct Attendance attendance;
	char password[15];
	char remarks[500];
}stud,empty_stud;

char struct_to_string_teacher(struct teacher record,char data[])
{
	char temp[10000],x[50];int i=0;
	strcat(data,record.ID);
	strcat(data,"\n");
	strcat(data,record.name);
	strcat(data,"\n");
	strcat(data,record.year);
	strcat(data,"\n");
	strcat(data,record.department);
	strcat(data,"\n");
	strcat(data,record.salary);
	strcat(data,"\n");
	strcat(data,record.DOB.day);
	strcat(data,"\n");
	strcat(data,record.DOB.month);
	strcat(data,"\n");
	strcat(data,record.DOB.year);
	strcat(data,"\n");
	strcat(data,record.contact.phonenum);
	strcat(data,"\n");
	strcat(data,record.contact.email);
	strcat(data,"\n");
	strcat(data,record.contact.address);
	strcat(data,"\n");
	strcat(data,record.password);
	//while(temp[i]!=NULL)
	//{
		//data[i]=temp[i];
		//i++;
//	}
}


char struct_to_string_student(struct student record,char data[])
{
	char temp[10000],x[50];int i=0;
	strcat(data,record.USN);
	strcat(data,"\n");
	strcat(data,record.name);
	strcat(data,"\n");
	strcat(data,record.semester);
	strcat(data,"\n");
	strcat(data,record.section);
	strcat(data,"\n");
	strcat(data,record.course);
	strcat(data,"\n");
	strcat(data,record.DOB.day);
	strcat(data,"\n");
	strcat(data,record.DOB.month);
	strcat(data,"\n");
	strcat(data,record.DOB.year);
	strcat(data,"\n");
	strcat(data,record.contact.phonenum);
	strcat(data,"\n");
	strcat(data,record.contact.email);
	strcat(data,"\n");
	strcat(data,record.contact.address);
	strcat(data,"\n");
	strcat(data,record.IA1.sub1.name);
	strcat(data,"\n");
	strcat(data,record.IA1.sub1.marks);
	strcat(data,"\n");
	strcat(data,record.IA1.sub2.name);
	strcat(data,"\n");
	strcat(data,record.IA1.sub2.marks);
	strcat(data,"\n");
	strcat(data,record.IA1.sub3.name);
	strcat(data,"\n");
	strcat(data,record.IA1.sub3.marks);
	strcat(data,"\n");
	strcat(data,record.IA1.sub4.name);
	strcat(data,"\n");
	strcat(data,record.IA1.sub4.marks);
	strcat(data,"\n");
	strcat(data,record.IA1.sub5.name);
	strcat(data,"\n");
	strcat(data,record.IA1.sub5.marks);
	strcat(data,"\n");
	strcat(data,record.IA1.sub6.name);
	strcat(data,"\n");
	strcat(data,record.IA1.sub6.marks);
	strcat(data,"\n");
	strcat(data,record.IA1.sub7.name);
	strcat(data,"\n");
	strcat(data,record.IA1.sub7.marks);
	strcat(data,"\n");
	strcat(data,record.IA1.sub1.name);
	strcat(data,"\n");
	strcat(data,record.IA2.sub1.marks);
	strcat(data,"\n");
	strcat(data,record.IA2.sub2.name);
	strcat(data,"\n");
	strcat(data,record.IA2.sub2.marks);
	strcat(data,"\n");
	strcat(data,record.IA2.sub3.name);
	strcat(data,"\n");
	strcat(data,record.IA2.sub3.marks);
	strcat(data,"\n");
	strcat(data,record.IA2.sub4.name);
	strcat(data,"\n");
	strcat(data,record.IA2.sub4.marks);
	strcat(data,"\n");
	strcat(data,record.IA2.sub5.name);
	strcat(data,"\n");
	strcat(data,record.IA2.sub5.marks);
	strcat(data,"\n");
	strcat(data,record.IA2.sub6.name);
	strcat(data,"\n");
	strcat(data,record.IA2.sub6.marks);
	strcat(data,"\n");
	strcat(data,record.IA2.sub7.name);
	strcat(data,"\n");
	strcat(data,record.IA2.sub7.marks);
	strcat(data,"\n");
	strcat(data,record.IA3.sub1.name);
	strcat(data,"\n");
	strcat(data,record.IA3.sub1.marks);
	strcat(data,"\n");
	strcat(data,record.IA3.sub2.name);
	strcat(data,"\n");
	strcat(data,record.IA3.sub2.marks);
	strcat(data,"\n");
	strcat(data,record.IA3.sub3.name);
	strcat(data,"\n");
	strcat(data,record.IA3.sub3.marks);
	strcat(data,"\n");
	strcat(data,record.IA3.sub4.name);
	strcat(data,"\n");
	strcat(data,record.IA3.sub4.marks);
	strcat(data,"\n");
	strcat(data,record.IA3.sub5.name);
	strcat(data,"\n");
	strcat(data,record.IA3.sub5.marks);
	strcat(data,"\n");
	strcat(data,record.IA3.sub6.name);
	strcat(data,"\n");
	strcat(data,record.IA3.sub6.marks);
	strcat(data,"\n");
	strcat(data,record.IA3.sub7.name);
	strcat(data,"\n");
	strcat(data,record.IA3.sub7.marks);
	strcat(data,"\n");
	strcat(data,record.attendance.sub1.name);
	strcat(data,"\n");
	strcat(data,record.attendance.sub1.attended);
	strcat(data,"\n");
	strcat(data,record.attendance.sub2.name);
	strcat(data,"\n");
	strcat(data,record.attendance.sub2.attended);
	strcat(data,"\n");
	strcat(data,record.attendance.sub3.name);
	strcat(data,"\n");
	strcat(data,record.attendance.sub3.attended);
	strcat(data,"\n");
	strcat(data,record.attendance.sub4.name);
	strcat(data,"\n");
	strcat(data,record.attendance.sub4.attended);
	strcat(data,"\n");
	strcat(data,record.attendance.sub5.name);
	strcat(data,"\n");
	strcat(data,record.attendance.sub5.attended);
	strcat(data,"\n");
	strcat(data,record.attendance.sub6.name);
	strcat(data,"\n");
	strcat(data,record.attendance.sub6.attended);
	strcat(data,"\n");
	strcat(data,record.attendance.sub7.name);
	strcat(data,"\n");
	strcat(data,record.attendance.sub7.attended);
	strcat(data,"\n");
	strcat(data,record.password);
	strcat(data,"\n");
	strcat(data,record.remarks);
}

struct teacher string_to_struct_teach(char data[])
{
	int i,j=0,flag=0,x;char symbol,temp[10000];struct teacher tempt;
	
	for(i=0;i<=strlen(data);i++)
	{
		if(data[i]!='\n')
		{
			temp[j]=data[i];j++;
		}
		else
		{
			flag++;
			if(flag==1)
				strcpy(tempt.ID,temp);
			if(flag==2)
				strcpy(tempt.name,temp);
			if(flag==3)
				strcpy(tempt.year,temp);
			if(flag==4)
				strcpy(tempt.department,temp);
			if(flag==5)
				strcpy(tempt.salary,temp);
			if(flag==6)
				strcpy(tempt.DOB.day,temp);
			if(flag==7)
				strcpy(tempt.DOB.month,temp);
			if(flag==8)
				strcpy(tempt.DOB.year,temp);
			if(flag==9)
				strcpy(tempt.contact.phonenum,temp);
			if(flag==10)
				strcpy(tempt.contact.email,temp);
			if(flag==11)
				strcpy(tempt.contact.address,temp);
			if(flag==12)
			strcpy(tempt.password,temp);
			j=0;
			memset(temp,0,10000);
		}
	}
	return(tempt);
}

char create_stud_rec(char USN[])
{
	struct student temps;char data[10000],sub1[6],sub2[6],sub3[6],sub4[6],sub5[6],sub6[6],sub7[6],adr[30];
	strcpy(adr,"students\\");
	strcat(adr,USN);
	strcat(adr,".txt");
	f=fopen(adr,"r");
	if(f==NULL)
	{
		//fputs(USN,f);
		//fputs("\n",f);
		strcpy(temps.USN,USN);
		printf("\nENTER NAME:");
		scanf("%s",temps.name);
		printf("\nENTER SEMESTER:");
		scanf("%s",temps.semester);
		printf("\nENTER SECTION:");
		scanf("%s",temps.section);
		printf("\nENTER COURSE:");
		scanf("%s",temps.course);
		printf("\nENTER DAY OF DOB:");
		scanf("%s",temps.DOB.day);
		printf("\nENTER MONTH OF DOB:");
		scanf("%s",temps.DOB.month);
		printf("\nENTER YEAR OF DOB:");
		scanf("%s",temps.DOB.year);
		printf("\nENTER PHONE NUMBER:");
		scanf("%s",temps.contact.phonenum);
		printf("\nENTER EMAIL:");
		scanf("%s",temps.contact.email);
		printf("\nENTER ADDRESS:");
		scanf("%s",temps.contact.address);
		printf("ENTER FIRST SUBJECT:");
		scanf("%s",sub1);
		printf("ENTER SECOND SUBJECT:");
		scanf("%s",sub2);
		printf("ENTER THIRD SUBJECT:");
		scanf("%s",sub3);
		printf("ENTER FOURTH SUBJECT:");
		scanf("%s",sub4);
		printf("ENTER FIFTH SUBJECT:");
		scanf("%s",sub5);
		printf("ENTER SIXTH SUBJECT:");
		scanf("%s",sub6);
		printf("ENTER SEVENTH SUBJECT:");
		scanf("%s",sub7);
		strcpy(temps.IA1.sub1.name,sub1);
		strcpy(temps.IA1.sub2.name,sub2);
		strcpy(temps.IA1.sub3.name,sub3);
		strcpy(temps.IA1.sub4.name,sub4);
		strcpy(temps.IA1.sub5.name,sub5);
		strcpy(temps.IA1.sub6.name,sub6);
		strcpy(temps.IA1.sub7.name,sub7);
		strcpy(temps.IA2.sub1.name,sub1);
		strcpy(temps.IA2.sub2.name,sub2);
		strcpy(temps.IA2.sub3.name,sub3);
		strcpy(temps.IA2.sub4.name,sub4);
		strcpy(temps.IA2.sub5.name,sub5);
		strcpy(temps.IA2.sub6.name,sub6);
		strcpy(temps.IA2.sub7.name,sub7);
		strcpy(temps.IA3.sub1.name,sub1);
		strcpy(temps.IA3.sub2.name,sub2);
		strcpy(temps.IA3.sub3.name,sub3);
		strcpy(temps.IA3.sub4.name,sub4);
		strcpy(temps.IA3.sub5.name,sub5);
		strcpy(temps.IA3.sub6.name,sub6);
		strcpy(temps.IA3.sub7.name,sub7);
		strcpy(temps.IA1.sub1.marks,"-1");
		strcpy(temps.IA1.sub2.marks,"-1");
		strcpy(temps.IA1.sub3.marks,"-1");
		strcpy(temps.IA1.sub4.marks,"-1");
		strcpy(temps.IA1.sub5.marks,"-1");
		strcpy(temps.IA1.sub6.marks,"-1");
		strcpy(temps.IA1.sub7.marks,"-1");
		strcpy(temps.IA2.sub1.marks,"-1");
		strcpy(temps.IA2.sub2.marks,"-1");
		strcpy(temps.IA2.sub3.marks,"-1");
		strcpy(temps.IA2.sub4.marks,"-1");
		strcpy(temps.IA2.sub5.marks,"-1");
		strcpy(temps.IA2.sub6.marks,"-1");
		strcpy(temps.IA2.sub7.marks,"-1");
		strcpy(temps.IA3.sub1.marks,"-1");
		strcpy(temps.IA3.sub2.marks,"-1");
		strcpy(temps.IA3.sub3.marks,"-1");
		strcpy(temps.IA3.sub4.marks,"-1");
		strcpy(temps.IA3.sub5.marks,"-1");
		strcpy(temps.IA3.sub6.marks,"-1");
		strcpy(temps.IA3.sub7.marks,"-1");
		strcpy(temps.attendance.sub1.name,sub1);
		strcpy(temps.attendance.sub2.name,sub2);
		strcpy(temps.attendance.sub3.name,sub3);
		strcpy(temps.attendance.sub4.name,sub4);
		strcpy(temps.attendance.sub5.name,sub5);
		strcpy(temps.attendance.sub6.name,sub6);
		strcpy(temps.attendance.sub7.name,sub7);
		strcpy(temps.attendance.sub1.attended,"-1");
		strcpy(temps.attendance.sub2.attended,"-1");
		strcpy(temps.attendance.sub3.attended,"-1");
		strcpy(temps.attendance.sub4.attended,"-1");
		strcpy(temps.attendance.sub5.attended,"-1");
		strcpy(temps.attendance.sub6.attended,"-1");
		strcpy(temps.attendance.sub7.attended,"-1");
		printf("\nENTER PASSWORD:");
		scanf("%s",temps.password);
		strcpy(temps.remarks,"NONE");
		struct_to_string_student(temps,data);
		fclose(f);
		f=fopen(adr,"w");
		printf("%s",data);
		fputs(data,f);
		fclose(f);
	}
	else
	printf("\nRECORD ALREADY EXIST");
}

create_teach_rec( char ID[])
{
	struct teacher tempt;char data[10000],adr[30];
	strcpy(adr,"teachers\\");
	strcat(adr,ID);
	strcat(adr,".txt");
	f=fopen(adr,"r");
	if(f==NULL)
	{
		strcpy(tempt.ID,ID);
		printf("\nENTER NAME:");
		scanf("%s",tempt.name);
		printf("\nENTER WORKING YEAR:");
		scanf("%s",tempt.year);
		printf("\nENTER DEPARTMENT:");
		scanf("%s",tempt.department);
		printf("\nENTER SALARY:");
		scanf("%s",tempt.salary);
		printf("\nENTER DAY OF DOB:");
		scanf("%s",tempt.DOB.day);
		printf("\nENTER MONTH OF DOB:");
		scanf("%s",tempt.DOB.month);
		printf("\nENTER YEAR OF DOB:");
		scanf("%s",tempt.DOB.year);
		printf("\nENTER PHONE NUMBER:");
		scanf("%s",tempt.contact.phonenum);
		printf("\nENTER EMAIL:");
		scanf("%s",tempt.contact.email);
		printf("\nENTER ADDRESS:");
		scanf("%s",tempt.contact.address);
		printf("\nENTER PASSWORD:");
		scanf("%s",tempt.password);
		struct_to_string_teacher(tempt,data);
		fclose(f);
		f=fopen(adr,"w");
		printf("%s",data);
		fputs(data,f);
		fclose(f);
	}
	else
	printf("\nRECORD ALREADY EXIST");
}

struct student string_to_struct_stud(char data[])
{
	int i,j=0,flag=0,x;char symbol,temp[10000];struct student temps;
	
	for(i=0;i<=strlen(data);i++)
	{
		if(data[i]!='\n')
		{
			temp[j]=data[i];j++;
		}
		else
		{
			flag++;
			if(flag==1)
				strcpy(temps.USN,temp);
			if(flag==2)
				strcpy(temps.name,temp);
			if(flag==3)
			{
				strcpy(temps.semester,temp);
		    }
			if(flag==4)
				strcpy(temps.section,temp);
			if(flag==5)
				strcpy(temps.course,temp);
			if(flag==6)
			{
				strcpy(temps.DOB.day,temp);
			}
			if(flag==7)
			{
				strcpy(temps.DOB.month,temp);
			}
			if(flag==8)
			{
				strcpy(temps.DOB.year,temp);
			}
			if(flag==9)
				strcpy(temps.contact.phonenum,temp);
			if(flag==10)
				strcpy(temps.contact.email,temp);
			if(flag==11)
				strcpy(temps.contact.address,temp);
			if(flag==12)
				strcpy(temps.IA1.sub1.name,temp);
			if(flag==13)
				strcpy(temps.IA1.sub1.marks,temp);
			if(flag==14)
				strcpy(temps.IA1.sub2.name,temp);
			if(flag==15)
				strcpy(temps.IA1.sub2.marks,temp);
			if(flag==16)
				strcpy(temps.IA1.sub3.name,temp);
			if(flag==17)
				strcpy(temps.IA1.sub3.marks,temp);
			if(flag==18)
				strcpy(temps.IA1.sub4.name,temp);
			if(flag==19)
				strcpy(temps.IA1.sub4.marks,temp);
			if(flag==20)
				strcpy(temps.IA1.sub5.name,temp);
			if(flag==21)
				strcpy(temps.IA1.sub5.marks,temp);
			if(flag==22)
				strcpy(temps.IA1.sub6.name,temp);
			if(flag==23)
				strcpy(temps.IA1.sub6.marks,temp);
			if(flag==24)
				strcpy(temps.IA1.sub7.name,temp);
			if(flag==25)
				strcpy(temps.IA1.sub7.marks,temp);
			if(flag==26)
				strcpy(temps.IA2.sub1.name,temp);
			if(flag==27)
				strcpy(temps.IA2.sub1.marks,temp);
			if(flag==28)
				strcpy(temps.IA2.sub2.name,temp);
			if(flag==29)
				strcpy(temps.IA2.sub2.marks,temp);
			if(flag==30)
				strcpy(temps.IA2.sub3.name,temp);
			if(flag==31)
				strcpy(temps.IA2.sub3.marks,temp);
			if(flag==32)
				strcpy(temps.IA2.sub4.name,temp);
			if(flag==33)
				strcpy(temps.IA2.sub4.marks,temp);
			if(flag==34)
				strcpy(temps.IA2.sub5.name,temp);
			if(flag==35)
				strcpy(temps.IA2.sub5.marks,temp);
			if(flag==36)
				strcpy(temps.IA2.sub6.name,temp);
			if(flag==37)
				strcpy(temps.IA2.sub6.marks,temp);
			if(flag==38)
				strcpy(temps.IA2.sub7.name,temp);
			if(flag==39)
				strcpy(temps.IA2.sub7.marks,temp);
			if(flag==40)
				strcpy(temps.IA3.sub1.name,temp);
			if(flag==41)
				strcpy(temps.IA3.sub1.marks,temp);
			if(flag==42)
				strcpy(temps.IA3.sub2.name,temp);
			if(flag==43)
				strcpy(temps.IA3.sub2.marks,temp);
			if(flag==44)
				strcpy(temps.IA3.sub3.name,temp);
			if(flag==45)
				strcpy(temps.IA3.sub3.marks,temp);
			if(flag==46)
				strcpy(temps.IA3.sub4.name,temp);
			if(flag==47)
				strcpy(temps.IA3.sub4.marks,temp);
			if(flag==48)
				strcpy(temps.IA3.sub5.name,temp);
			if(flag==49)
				strcpy(temps.IA3.sub5.marks,temp);
			if(flag==50)
				strcpy(temps.IA3.sub6.name,temp);
			if(flag==51)
				strcpy(temps.IA3.sub6.marks,temp);
			if(flag==52)
				strcpy(temps.IA3.sub7.name,temp);
			if(flag==53)
				strcpy(temps.IA3.sub7.marks,temp);
			if(flag==54)
				strcpy(temps.attendance.sub1.name,temp);
			if(flag==55)
				strcpy(temps.attendance.sub1.attended,temp);
			if(flag==56)
				strcpy(temps.attendance.sub2.name,temp);
			if(flag==57)
				strcpy(temps.attendance.sub2.attended,temp);
			if(flag==58)
				strcpy(temps.attendance.sub3.name,temp);
			if(flag==59)
				strcpy(temps.attendance.sub3.attended,temp);
			if(flag==60)
				strcpy(temps.attendance.sub4.name,temp);
			if(flag==61)
				strcpy(temps.attendance.sub4.attended,temp);
			if(flag==62)
				strcpy(temps.attendance.sub5.name,temp);
			if(flag==63)
				strcpy(temps.attendance.sub5.attended,temp);
			if(flag==64)
				strcpy(temps.attendance.sub6.name,temp);
			if(flag==65)
				strcpy(temps.attendance.sub6.attended,temp);
			if(flag==66)
				strcpy(temps.attendance.sub7.name,temp);
			if(flag==67)
				strcpy(temps.attendance.sub7.attended,temp);
			if(flag==68)
				strcpy(temps.password,temp);
			if(flag==69)
				strcpy(temps.remarks,temp);
			memset(temp,0,10000);
			j=0;
		}
	}
	return(temps);
}

int compare(char a[],char b[])  
{  
    int flag=0,i=0;  
    while(a[i]!='\0'&&b[i]!='\0')  
    {  
       if(a[i]!=b[i])  
       {
        	flag=1;
            break;
       }
       i++; 
    }
    if(flag==0)  
    return 0;  
    else  
    return 1;  
} 

int main()
{
	int choice1,choice2,choice3,att_ch,IAch,disp_ch,IA_sub_ch,adminch;
	char USN[20],ID[30],password[10],data[10000],data2[10000],temp[10000],adr[100];
	char PIN[10],SYSPIN[10]="1234";
	printf("\n----- WELCOME TO COLLEGE MANAGEMENT SYSTEM------\n");
	for(;;)
	{
		printf("\n1:LOGIN AS STUDENT\n2:LOGIN AS TEACHER\n3:ADMIN\n4:EXIT");
		printf("\nENTER CHOICE:");
		scanf("%d",&choice1);
		if(choice1==1)
		{
			printf("\n-----PLEASE ENTER-----\nUSN:");
			scanf("%s",USN);
			printf("\nPASSWORD:");
			scanf("%s",password);
			strcpy(adr,"students\\");
			strcat(adr,USN);
			strcat(adr,".txt");
			f=fopen(adr,"r");
			if(f==NULL)
			{
				printf("\nSTUDENT DOES NOT EXIST");
				remove(adr);
				fclose(f);
			}
			else
			{
				while(!feof(f))
				{
					fgets(temp,500,f);
					strcat(data,temp);					
				}
				stud=string_to_struct_stud(data);
				fclose(f);
				int isval1=compare(USN,stud.USN);
				int isval2=compare(password,stud.password);
				if(!isval1&&!isval2)
				{
					printf("\n----WELCOME %s----\n\n",stud.name);
					for(;;)
					{
						printf("\n1:CHECK ATTENDANCE\n2:CHECK MARKS\n3:CHECK PERSONAL INFORMATION\n4:ADD REMARKS OR CORRECTIONS\n5:EXIT");
						printf("\nENTER CHOICE:");
						scanf("%d",&choice2);
						if(choice2==1)
						{
							printf("%s:%s",stud.attendance.sub1.name,stud.attendance.sub1.attended);
							printf("%s:%s",stud.attendance.sub2.name,stud.attendance.sub2.attended);
							printf("%s:%s",stud.attendance.sub3.name,stud.attendance.sub3.attended);
							printf("%s:%s",stud.attendance.sub4.name,stud.attendance.sub4.attended);
							printf("%s:%s",stud.attendance.sub5.name,stud.attendance.sub5.attended);
							printf("%s:%s",stud.attendance.sub6.name,stud.attendance.sub6.attended);
							printf("%s:%s",stud.attendance.sub7.name,stud.attendance.sub7.attended);
						}
						if(choice2==2)
						{
							printf("\nIA 1 MARKS\n");
							printf("\n%s:%s",stud.IA1.sub1.name,stud.IA1.sub1.marks);
							printf("\n%s:%s",stud.IA1.sub2.name,stud.IA1.sub2.marks);
							printf("\n%s:%s",stud.IA1.sub3.name,stud.IA1.sub3.marks);
							printf("\n%s:%s",stud.IA1.sub4.name,stud.IA1.sub4.marks);
							printf("\n%s:%s",stud.IA1.sub5.name,stud.IA1.sub5.marks);
							printf("\n%s:%s",stud.IA1.sub6.name,stud.IA1.sub6.marks);
							printf("\n%s:%s",stud.IA1.sub7.name,stud.IA1.sub7.marks);
							printf("\nIA 2 MARKS\n");
							printf("\n%s:%s",stud.IA2.sub1.name,stud.IA2.sub1.marks);
							printf("\n%s:%s",stud.IA2.sub1.name,stud.IA2.sub1.marks);
							printf("\n%s:%s",stud.IA2.sub2.name,stud.IA2.sub2.marks);
							printf("\n%s:%s",stud.IA2.sub3.name,stud.IA2.sub3.marks);
							printf("\n%s:%s",stud.IA2.sub4.name,stud.IA2.sub4.marks);
							printf("\n%s:%s",stud.IA2.sub5.name,stud.IA2.sub5.marks);
							printf("\n%s:%s",stud.IA2.sub6.name,stud.IA2.sub6.marks);
							printf("\n%s:%s",stud.IA2.sub7.name,stud.IA2.sub7.marks);
							printf("\nIA 3 MARKS\n");
							printf("\n%s:%s",stud.IA3.sub1.name,stud.IA3.sub1.marks);
							printf("\n%s:%s",stud.IA3.sub1.name,stud.IA3.sub1.marks);
							printf("\n%s:%s",stud.IA3.sub2.name,stud.IA3.sub2.marks);
							printf("\n%s:%s",stud.IA3.sub3.name,stud.IA3.sub3.marks);
							printf("\n%s:%s",stud.IA3.sub4.name,stud.IA3.sub4.marks);
							printf("\n%s:%s",stud.IA3.sub5.name,stud.IA3.sub5.marks);
							printf("\n%s:%s",stud.IA3.sub6.name,stud.IA3.sub6.marks);
							printf("\n%s:%s",stud.IA3.sub7.name,stud.IA3.sub7.marks);
						}
						if(choice2==3)
						{
							printf("\nUSN:%s\n",stud.USN);
							printf("\nname:%s\n",stud.name);
							printf("\nsemester:%s\n",stud.semester);
							printf("\nsection:%s\n",stud.section);
							printf("\ncourse:%s\n",stud.course);
							printf("\ndate of birth:%s/%s/%s\n",stud.DOB.day,stud.DOB.month,stud.DOB.year);
							printf("\nphone number:%s\n",stud.contact.phonenum);
							printf("\nemail:%s\n",stud.contact.email);
							printf("\naddress:%s\n",stud.contact.address);
						}
						if(choice2==4)
						{
							memset(data,0,10000);
							strcpy(data,stud.USN);
							rem=fopen("remarks\\remarks.txt","a");
							char remarks[200];printf("\nPLEASE WRITE REMARKS:\n");
							memset(remarks,0,200);
							scanf(" %[^\n]",remarks);
							strcat(data,"\n");strcat(data,remarks);strcat(data,"\n--------------------------------\n");
							fprintf(rem,data);
							printf("\nSUCCESSFULLY SUBMITTED REMARKS\n");
							memset(data,0,10000);
							fclose(rem);
						}
						if(choice2==5)
						{
							stud=empty_stud;
							memset(data,0,10000);
							fclose(f);
							break;
						}
					}
				}
				else
				{
					printf("\nINVALID CREDENTIALS\n");
				}
			}
		}
		if(choice1==2)
		{
			printf("\n-----PLEASE ENTER-----\nID:");
			scanf("%s",ID);
			printf("\nPASSWORD:");
			scanf("%s",password);
			strcpy(adr,"teacher\\");
			strcat(adr,ID);
			strcat(adr,".txt");
			f=fopen(adr,"r");
			if(f==NULL)
			{
				printf("\nTEACHER DOES NOT EXIST");
				remove(adr);
				memset(adr,0,100);
				fclose(f);
			}
			else
			{
				while(!feof(f))
				{
					fgets(temp,500,f);
					strcat(data,temp);					
				}
				teach=string_to_struct_teach(data);
				if(!compare(ID,teach.ID) && !compare(teach.password,password))
				{
					printf("\n----WELCOME %s----\n\n",teach.name);
					for(;;)
					{
						printf("\n1:UPDATE ATTENDANCE\n2:UPDATE MARKS\n3:DISPLAY PERSONAL INFORMATION\n4:EXIT");
						printf("\nPLEASE ENTER CHOICE:");
						scanf("%d",&choice3);
						memset(adr,0,100);
						if(choice3==1)
						{
							printf("\nPLEASE ENTER USN:");
							scanf("%s",USN);
							strcpy(adr,"students\\");
							strcat(adr,USN);
							strcat(adr,".txt");
							f1=fopen(adr,"r");
							if(f1==NULL)
							{
								printf("\nSTUDENT RECORD DOES NOT EXIST\n");
								remove(adr);
								fclose(f1);
							}
							else
							{
								memset(data,0,10000);
								stud=empty_stud;
								while(!feof(f1))
								{
									fgets(temp,500,f1);
									strcat(data2,temp);				
								}
								fclose(f1);
								f1=fopen(adr,"w");
								printf("%s",data2);
								stud=string_to_struct_stud(data2);
								printf("\n\n%s\n\n",stud.USN);
								printf("\n\n%s\n\n",stud.password);
								printf("\n-----CURRENT ATTENDANCE-----\n");
								printf("1:%s:%s\n",stud.attendance.sub1.name,stud.attendance.sub1.attended);
								printf("2:%s:%s\n",stud.attendance.sub2.name,stud.attendance.sub2.attended);
								printf("3:%s:%s\n",stud.attendance.sub3.name,stud.attendance.sub3.attended);
								printf("4:%s:%s\n",stud.attendance.sub4.name,stud.attendance.sub4.attended);
								printf("5:%s:%s\n",stud.attendance.sub5.name,stud.attendance.sub5.attended);
								printf("6:%s:%s\n",stud.attendance.sub6.name,stud.attendance.sub6.attended);
								printf("7:%s:%s\n",stud.attendance.sub7.name,stud.attendance.sub7.attended);
								for(;;)
								{
									printf("\n-----UPDATE-----\n");
									printf("1:%s\n",stud.attendance.sub1.name);
									printf("2:%s\n",stud.attendance.sub2.name);
									printf("3:%s\n",stud.attendance.sub3.name);
									printf("4:%s\n",stud.attendance.sub4.name);
									printf("5:%s\n",stud.attendance.sub5.name);
									printf("6:%s\n",stud.attendance.sub6.name);
									printf("7:%s\n",stud.attendance.sub7.name);
									printf("8:EXIT");
									printf("\nPLEASE ENTER CHOICE:");
									scanf("%d",&att_ch);
									if(att_ch==1)
									{
										printf("\nENTER NUMBER OF ATTENDED CLASSES:");
										scanf("%s",stud.attendance.sub1.attended);
									}
									if(att_ch==2)
									{
										printf("\nENTER NUMBER OF ATTENDED CLASSES:");
										scanf("%s",stud.attendance.sub2.attended);
									}
									if(att_ch==3)
									{
										printf("\nENTER NUMBER OF ATTENDED CLASSES:");
										scanf("%s",stud.attendance.sub3.attended);
									}
									if(att_ch==4)
									{
										printf("\nENTER NUMBER OF ATTENDED CLASSES:");
										scanf("%s",stud.attendance.sub4.attended);
									}
									if(att_ch==5)
									{
										printf("\nENTER NUMBER OF ATTENDED CLASSES:");
										scanf("%s",stud.attendance.sub5.attended);
									}
									if(att_ch==6)
									{
										printf("\nENTER NUMBER OF ATTENDED CLASSES:");
										scanf("%s",stud.attendance.sub6.attended);
									}
									if(att_ch==7)
									{
										printf("\nENTER NUMBER OF ATTENDED CLASSES:");
										scanf("%s",stud.attendance.sub7.attended);
									}
									if(att_ch==8)
									{
										memset(data2,0,10000);
										struct_to_string_student(stud,data2);
										printf("\n\n%s\n\n",stud.USN);
										printf("%s",data2);
										fputs(data2,f1);
										fclose(f1);
										break;
									}
									else
									{
										printf("\nPLEASE ENTER VALID CHOICE");
									}
								}
							}
						}
						if(choice3==2)
						{
							printf("\nPLEASE ENTER USN:");
							scanf("%s",USN);
							strcpy(adr,"students\\");
							strcat(adr,USN);
							strcat(adr,".txt");
							f1=fopen(adr,"r");
							if(f1==NULL)
							{
								printf("\nSTUDENT RECORD DOES NOT EXIST\n");
								remove(adr);
								fclose(f1);
							}
							else
							{
								memset(data,0,10000);
								while(!feof(f1))
								{
									fgets(temp,500,f1);
									strcat(data,temp);					
								}
								stud=string_to_struct_stud(data);
								fclose(f1);
								f1=fopen(adr,"w");
								printf("\n-----CURRENT MARKS-----\n");
								printf("-------IA 1-------\n");
								printf("1:%s:%s\n",stud.IA1.sub1.name,stud.IA1.sub1.marks);
								printf("2:%s:%s\n",stud.IA1.sub2.name,stud.IA1.sub2.marks);
								printf("3:%s:%s\n",stud.IA1.sub3.name,stud.IA1.sub3.marks);
								printf("4:%s:%s\n",stud.IA1.sub4.name,stud.IA1.sub4.marks);
								printf("5:%s:%s\n",stud.IA1.sub5.name,stud.IA1.sub5.marks);
								printf("6:%s:%s\n",stud.IA1.sub6.name,stud.IA1.sub6.marks);
								printf("7:%s:%s\n",stud.IA1.sub7.name,stud.IA1.sub7.marks);
								printf("-------IA 2-------\n");
								printf("1:%s:%s\n",stud.IA2.sub1.name,stud.IA2.sub1.marks);
								printf("2:%s:%s\n",stud.IA2.sub2.name,stud.IA2.sub2.marks);
								printf("3:%s:%s\n",stud.IA2.sub3.name,stud.IA2.sub3.marks);
								printf("4:%s:%s\n",stud.IA2.sub4.name,stud.IA2.sub4.marks);
								printf("5:%s:%s\n",stud.IA2.sub5.name,stud.IA2.sub5.marks);
								printf("6:%s:%s\n",stud.IA2.sub6.name,stud.IA2.sub6.marks);
								printf("7:%s:%s\n",stud.IA2.sub7.name,stud.IA2.sub7.marks);
								printf("-------IA 3-------\n");
								printf("1:%s:%s\n",stud.IA3.sub1.name,stud.IA3.sub1.marks);
								printf("2:%s:%s\n",stud.IA3.sub2.name,stud.IA3.sub2.marks);
								printf("3:%s:%s\n",stud.IA3.sub3.name,stud.IA3.sub3.marks);
								printf("4:%s:%s\n",stud.IA3.sub4.name,stud.IA3.sub4.marks);
								printf("5:%s:%s\n",stud.IA3.sub5.name,stud.IA3.sub5.marks);
								printf("6:%s:%s\n",stud.IA3.sub6.name,stud.IA3.sub6.marks);
								printf("7:%s:%s\n",stud.IA3.sub7.name,stud.IA3.sub7.marks);
								for(;;)
								{
									printf("\n-----UPDATE-----\n");
									printf("1:IA 1\n2:IA2\n3:IA 3\n4:EXIT");
									printf("\nENTER CHOICE:");
									scanf("%d",&IAch);
									if(IAch==1)
									{
										while(1)
										{
											printf("1:%s\n",stud.IA1.sub1.name);
											printf("2:%s\n",stud.IA1.sub2.name);
											printf("3:%s\n",stud.IA1.sub3.name);
											printf("4:%s\n",stud.IA1.sub4.name);
											printf("5:%s\n",stud.IA1.sub5.name);
											printf("6:%s\n",stud.IA1.sub6.name);
											printf("7:%s\n",stud.IA1.sub7.name);
											printf("8:EXIT");
											printf("\nENTER CHOICE:");
											scanf("%d",&IA_sub_ch);
											if(IA_sub_ch==1)
											{
												printf("\nENTER MARKS:");
												scanf("%s",&stud.IA1.sub1.marks);
											}
											if(IA_sub_ch==2)
											{
												printf("\nENTER MARKS:");
												scanf("%s",&stud.IA1.sub2.marks);
											}
											if(IA_sub_ch==3)
											{
												printf("\nENTER MARKS:");
												scanf("%s",&stud.IA1.sub3.marks);
											}
											if(IA_sub_ch==4)
											{
												printf("\nENTER MARKS:");
												scanf("%s",&stud.IA1.sub4.marks);
											}
											if(IA_sub_ch==5)
											{
												printf("\nENTER MARKS:");
												scanf("%s",&stud.IA1.sub5.marks);
											}
											if(IA_sub_ch==6)
											{
												printf("\nENTER MARKS:");
												scanf("%s",&stud.IA1.sub6.marks);
											}
											if(IA_sub_ch==7)
											{
												printf("\nENTER MARKS:");
												scanf("%s",&stud.IA1.sub7.marks);
											}
											if(IA_sub_ch==8)
											{
												
												break;
											}
											else
											{
												printf("\nPLEASE ENTER VALID CHOICE\n");
											}
										}
									}
									if(IAch==2)
									{
										for(;;)
										{
											printf("1:%s\n",stud.IA2.sub1.name);
											printf("2:%s\n",stud.IA2.sub2.name);
											printf("3:%s\n",stud.IA2.sub3.name);
											printf("4:%s\n",stud.IA2.sub4.name);
											printf("5:%s\n",stud.IA2.sub5.name);
											printf("6:%s\n",stud.IA2.sub6.name);
											printf("7:%s\n",stud.IA2.sub7.name);
											printf("8:EXIT");
											printf("\nENTER CHOICE:");
											scanf("%d",&IA_sub_ch);
											if(IA_sub_ch==1)
											{
												printf("\nENTER MARKS:");
												scanf("%s",stud.IA2.sub1.marks);
											}
											if(IA_sub_ch==2)
											{
												printf("\nENTER MARKS:");
												scanf("%s",stud.IA2.sub2.marks);
											}
											if(IA_sub_ch==3)
											{
												printf("\nENTER MARKS:");
												scanf("%s",stud.IA2.sub3.marks);
											}
											if(IA_sub_ch==4)
											{
												printf("\nENTER MARKS:");
												scanf("%s",stud.IA2.sub4.marks);
											}
											if(IA_sub_ch==5)
											{
												printf("\nENTER MARKS:");
												scanf("%s",stud.IA2.sub5.marks);
											}
											if(IA_sub_ch==6)
											{
												printf("\nENTER MARKS:");
												scanf("%s",stud.IA2.sub6.marks);
											}
											if(IA_sub_ch==7)
											{
												printf("\nENTER MARKS:");
												scanf("%s",stud.IA2.sub7.marks);
											}
											if(IA_sub_ch==8)
											{
												break;
											}
											else
											{
												printf("\nPLEASE ENTER VALID CHOICE\n");
											}	
										}
									}
									if(IAch==3)
									{
										for(;;)
										{
											printf("1:%s\n",stud.IA3.sub1.name);
											printf("2:%s\n",stud.IA3.sub2.name);
											printf("3:%s\n",stud.IA3.sub3.name);
											printf("4:%s\n",stud.IA3.sub4.name);
											printf("5:%s\n",stud.IA3.sub5.name);
											printf("6:%s\n",stud.IA3.sub6.name);
											printf("7:%s\n",stud.IA3.sub7.name);
											printf("8:EXIT");
											printf("\nENTER CHOICE:");
											scanf("%d",&IA_sub_ch);
											if(IA_sub_ch==1)
											{
												printf("\nENTER MARKS:");
												scanf("%s",stud.IA3.sub1.marks);
											}
											if(IA_sub_ch==2)
											{
												printf("\nENTER MARKS:");
												scanf("%s",stud.IA3.sub2.marks);
											}
											if(IA_sub_ch==3)
											{
												printf("\nENTER MARKS:");
												scanf("%s",stud.IA3.sub3.marks);
											}
											if(IA_sub_ch==4)
											{
												printf("\nENTER MARKS:");
												scanf("%s",stud.IA3.sub4.marks);
											}
											if(IA_sub_ch==5)
											{
												printf("\nENTER MARKS:");
												scanf("%s",stud.IA3.sub5.marks);
											}
											if(IA_sub_ch==6)
											{
												printf("\nENTER MARKS:");
												scanf("%s",stud.IA3.sub6.marks);
											}
											if(IA_sub_ch==7)
											{
												printf("\nENTER MARKS:");
												scanf("%s",stud.IA3.sub7.marks);
											}
											if(IA_sub_ch==8)
											{
												break;
											}
											else
											{
												printf("\nPLEASE ENTER VALID CHOICE\n");
											}
											
										}
									}
									if(IAch==4)
									{
										memset(data,0,10000);
										struct_to_string_student(stud,data);
										fputs(data,f1);
										fclose(f1);
										break;
									}
									else
									{
										printf("\nPLEASE ENTER VALID CHOICE\n");
									}
								}
							}
						}
						if(choice3==3)
						{
							printf("\n-----DISPLAY WHICH-----\n");
							printf("\n1:OWN\n2:STUDENT");
							printf("\nENTER CHOICE:");
							scanf("%d",&disp_ch);
							if(disp_ch==1)
							{
								printf("\nteacher ID:%s",teach.ID);
								printf("\nname:%s",teach.name);
								printf("\nworking year:%s",teach.year);
								printf("\nDepartment:%s",teach.department);
								printf("\nSalary:%s",teach.salary);
								printf("\nDate of birth:%s/%s/%s",teach.DOB.day,teach.DOB.month,teach.DOB.year);
								printf("\nPhone number:%s",teach.contact.phonenum);
								printf("\nEmail:%s",teach.contact.email);
								printf("\nAddress:%s\n\n",teach.contact.address);
							}
							if(disp_ch==2)
							{
								printf("\nPLEASE ENTER USN:");
								scanf("%s",USN);
								strcpy(adr,"students\\");
								strcat(adr,USN);
								strcat(adr,".txt");
								f1=fopen(adr,"r");
								if(f1==NULL)
								{
									printf("\nSTUDENT RECORD DOES NOT EXIST\n");
									remove(adr);
									fclose(f1);
								}
								else
								{
									memset(data,0,10000);
									while(!feof(f1))
									{
										fgets(temp,500,f1);
										strcat(data,temp);					
									}
									stud=string_to_struct_stud(data);
									printf("\nUSN:%s",stud.USN);
									printf("\nname:%s",stud.name);
									printf("\nsemester:%s",stud.semester);
									printf("\nsection:%c",stud.section);
									printf("\ncourse:%s",stud.course);
									printf("\ndate of birth:%s/%s/%s",stud.DOB.day,stud.DOB.month,stud.DOB.year);
									printf("\nphone number:%s",stud.contact.phonenum);
									printf("\nemail:%s",stud.contact.email);
									printf("\naddress:%s",stud.contact.address);
								}
							}
						}
						if(choice3==4)
						{
							teach=empty_teach;
							memset(data,0,10000);
							fclose(f);
							break;
						}
						if(choice3!=1&&choice3!=2&&choice3!=3&&choice3!=4)
						{
							printf("\nPLEASE ENTER VALID CHOICE");
						}
					}
				}
			}
		}
		if(choice1==3)
		{
			printf("\n-----WELCOME ADMIN-----\n");
			printf("\nPLEASE ENTER SYSTEM PIN:");
			scanf("%s",PIN);
			if(!compare(PIN,SYSPIN))
			{
				while(1)
				{
					printf("\n1:CREATE STUDENT RECORD\n2:CREATE TEACHER RECORD\n3:DELETE STUDENT RECORD\nDELETE TEACHER RECORD\n5:EXIT\n");
					printf("\nENTER CHOICE:");
					scanf("%d",&adminch);
					if(adminch==1)
					{
						printf("\nENTER USN:");
						scanf("%s",USN);
						create_stud_rec(USN);
					}
					if(adminch==2)
					{
						printf("\nENTER ID:");
						scanf("%s",ID);
						create_teach_rec(ID);
					}
					if(adminch==3)
					{
						printf("\nENTER USN:");
						scanf("%s",USN);
						strcpy(adr,"students\\");
						strcat(adr,USN);
						strcat(adr,".txt");
						f=fopen(adr,"r");
						if(f==NULL)
						{
							printf("\nSTUDENT RECORD DOES NOT EXIST\n");
							remove(adr);
							memset(adr,0,100);
							fclose(f);
						}
						if(f!=NULL)
						{
							remove(adr);
							fclose(f);
							printf("\n%s 's RECORD DELETED\n",USN);
							memset(adr,0,100);
						}
					}
					if(adminch==4)
					{
						strcpy(adr,"teacher\\");
						strcat(adr,ID);
						strcat(adr,".txt");
						f=fopen(adr,"r");
						if(f==NULL)
						{
							printf("\nTEACHER DOES NOT EXIST");
							remove(adr);
							memset(adr,0,100);
							fclose(f);
						}
						if(f!=NULL)
						{
							remove(adr);
							fclose(f);
							printf("\n%s 's RECORD DELETED\n",USN);
							memset(adr,0,100);
						}
					}
					if(adminch==5)
					{
						break;
					}
					if(adminch!=1 &&adminch!=2 &&adminch!=3 &&adminch!=4 &&adminch!=5)
						printf("\nPLEASE ENTER VALID CHOICE\n");
				}
			}
		}
		if(choice1==4)
		{
			exit(0);
		}
	}
}









