 #include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "malloc.h"
struct WORK
{
	char    Number[20];                           //���֤��
	char    Name[32];                         //����
	int     Old;                              //��������
	char    Edu[20];                          //ѧ��
	float  Salary;                            //����
	char    Address[64];                      //����
	long     Time;                             //��������
	char    Lesson[20];                       //�����γ�
	struct  WORK *next;
};
struct WORK* worker=NULL;                           
void saveWorToFile();                          //����ְ����Ϣ���ļ�
void addworker(struct WORK *wor);              //���ְ����Ϣ�����������
void delWork(char* name);                      //ɾ��ְ����Ϣ����������� 
void delworker();                              //ɾ��ְ����Ϣ
void add();                                    //¼��ְ����Ϣ
void lookthrough();                            //���ְ����Ϣ
void query();                                  //��ѯְ����Ϣ
void Reviseworker();                           //�޸�ְ����Ϣ
int menu_select();                             //�˵�����
void readWorkerput();                         //���ļ��ж�ȡְ����Ϣ
int main()
{   
	char choose;
    readWorkerput();
	
    for(;;)
	{
       choose=menu_select();
	   if(choose==1)
		    add();
	   else if(choose==2)
              lookthrough();
	   else if(choose==3)
              query();
	   else if(choose==4)
               delworker();
	   else if(choose==5)
		       Reviseworker()  ;                            
	   else
	      break;
	}
	return 0;
}
int menu_select()                             //�˵���������
{
   char c;
   printf("===============================================================\n");
   printf("|----------------------ְ����Ϣ����ϵͳ v1.0------------------|\n");
   printf("|                                                             |\n");
   printf("|                         1.¼����Ϣ                          |\n");
   printf("|                         2.�����Ϣ                          |\n");
   printf("|                         3.��ѯ��Ϣ                          |\n");
   printf("|                         4.ɾ����Ϣ                          |\n");
   printf("|                         5.�޸���Ϣ                          |\n");
   printf("|                         7.�˳�ϵͳ                          |\n");
   printf("***************************************************************\n");
   printf("                    �����루1-7�����в�����\n");
   do{
	    scanf("%c",&c);
   }while(c<'1'||c>'7');
   return c-48;
 
}
/****************************************************************************************************************************/
void add()                                    //1��¼��ְ����Ϣ��������
{
	struct WORK *p;
	int     tmp=1;
	char     number[20];
	char    name[32];
    char    sex[2];
	int     old;
	char    edu[20];
	float  salary;
	char    address[64];
	long     tel;
	char    lesson[20];
	struct WORK* n=(struct WORK*)malloc(sizeof(struct WORK));
	p=worker;
  
    printf("�������֤�ţ�");
	scanf("%s",number);
    while(p!=NULL)
	{
		if(strcmp(p->Number ,number)==0)
		{
			printf("�����֤���Ѵ��ڣ�\n");
			tmp =2;
		}
        p=p->next;
	}	
	if(tmp==2)
		return ;
	printf("����������");  //����
	scanf("%s",name);
	printf("����������ڣ�");  //��������
	scanf("%d",&old);
	printf("����ѧ����");  //ѧ��
	scanf("%s",edu);
	printf("���빤�ʣ�");  //����
	scanf("%f",&salary);
	printf("���뼮�᣺");  //����
    scanf("%s",address);
	printf("���빤�����ޣ�");  //��������
	scanf("%ld",&tel);
	printf("���������γ̣�");  //�����γ�
	scanf("%s", lesson);
	strcpy(n->Number,number);
    strcpy(n->Name,name);
	n->Old=old;
	strcpy(n->Edu,edu);
	n->Salary=salary;
	strcpy(n->Address,address);
	strcpy(n->Lesson, lesson);
	n->Time=tel;
    addworker(n);
	saveWorToFile();
	printf("¼��ɹ���\n");
}
void addworker(struct WORK *wor)
{
	struct WORK *p;
	if(worker==NULL)
	{
		worker =wor;
		wor->next=NULL;
	}
	else
	{
		p = worker;
		while(p)
		{
			if(p->next==NULL)
			{
				p->next =wor;
				wor->next =NULL;
                
			}
			p= p->next;
		}
	}
}
/***************************************************************************************************************************/
void lookthrough()                              //2�������Ϣ
{
	struct WORK * p;
	p=worker;
	if(p!=NULL)
	{   
		printf("���֤��           ���� �������� ѧ�� ����        ���� �������� �����γ�\n");
    	while(p!=NULL)
		{
          printf("%s %s   %d %s %f %s   %ld        %s\n",p->Number,p->Name,p->Old,p->Edu,p->Salary,p->Address,p->Time,p->Lesson);
          p=p->next;
		}
	}
	else
	   printf("����ְ����Ϣ��\n");
}
	
/***************************************************************************************************************************/
void query()                             //3����ѯְ����Ϣ
{
	char num[20];
	int tmp=1;
	struct WORK * p;
	int ju;
	int nianling;
	char xueli[20];
	int judge;
	p=worker;
	printf("                   ��ȷ�����밴--1\n                   ���������밴--2\n");
	scanf("%d",&judge);
	switch(judge)
	{
	case 1:
		printf("��������Ҫ��ѯ�����֤��:\n");
		scanf("%s",num);
		while(p!=NULL)
		{
			if(strcmp(p->Number,num)==0)
			{
				tmp =3;
				break;
			}
			 p=p->next;
		}
		if(tmp==3)
		{
			printf("���֤��           ���� �������� ѧ�� ����        ���� �������� �����γ�\n");
			printf("%s %s   %d %s %f %s   %ld        %s\n", p->Number, p->Name, p->Old, p->Edu, p->Salary, p->Address, p->Time, p->Lesson);
		}
		else
		  printf("���֤�Ų�����!\n");
		break;
    case 2:
		
		printf("                   ��ѯͬһ��������ְ����Ϣ�밴------1\n                   ��ѯͬһѧ��ְ����Ϣ�밴------2\n");
		scanf("%d",&ju);
		if(ju==1)
		{   
			printf("������������ڣ�\n");
			scanf("%d",&nianling);
			if(p!=NULL)
			{
				printf("���֤��           ���� �������� ѧ�� ����        ���� �������� �����γ�\n");
         		while(p!=NULL)
				{
					if(p->Old==nianling)
					{
						printf("%s %s   %d %s %f %s   %ld        %s\n", p->Number, p->Name, p->Old, p->Edu, p->Salary, p->Address, p->Time, p->Lesson);
					}
					 p=p->next;
				}
			}
			else
                printf("����ְ����Ϣ��");
		} 
		else if(ju==2)
		{
           printf("������ѧ����");
		   scanf("%s",xueli);
           	if(p!=NULL)
			{
         		while(p!=NULL)
				{
					if(!strcmp(p->Edu,xueli))
					{
						printf("%s %s   %d %s %f %s   %ld        %s\n", p->Number, p->Name, p->Old, p->Edu, p->Salary, p->Address, p->Time, p->Lesson);
					}
					 p=p->next;
				}
			}
			else
                printf("����ְ����Ϣ��");
		}
	}
}
/***************************************************************************************************************************/
void delworker()                                //4��ɾ��ְ����Ϣ
{
	struct WORK * p;
	char n[20];
	int tem=1;
	char panduan[4];
	p=worker;
	printf("������Ҫɾ�������֤�ţ�\n");
    scanf("%s",n);
	printf("ȷ��ɾ��%d��(yes/no)\n",n);
    scanf("%s",panduan);
	if(strcmp("no",panduan)==0)
	          return;
	else
	{
	   while(p!=NULL)
	   {
	     if(strcmp(p->Number,n))
		 {
			tem =2;
			break;
		 }
         p=p->next;
	   }
    }
	if(tem==2)
		delWork(p->Name);
	saveWorToFile();
}
void delWork(char *name)
{
	struct WORK *p,*pre;
	if (worker==NULL)
	{
		return;
	}
	p =pre=worker;
	while(p)
	{
		if (!strcmp(p->Name,name))
		{
			if(p==worker)
			{
					worker = worker->next;
					free(p);
					printf("ɾ���ɹ���\n");
					p=NULL;
			}
			else
			{
				pre->next =p->next;
				free(p);
				printf("ɾ���ɹ���\n");
				p=NULL;
 
			}
		}
		else
		{
			pre =p;
			p= p->next;
		}
	}
}
/***************************************************************************************************************************/
void Reviseworker()                               //�޸�ְ����Ϣ
{
	char    name[32];
    char    sex[2];
	int     old;
	char    edu[20];
	float   salary;
	char    address[64];
	long    tel;
	char    lesson[20];
   struct WORK * p;
   
   char num[20];
   int a=1;
   char xueli[20];
   float money;
   int judge;
   p=worker;
   printf("ѡ��ȷ�޸��밴1\nѡ�������޸��밴2\n");
   scanf("%d",&judge);
   switch(judge)
   {
   case 1:
		   printf("�����뱻�޸�ְ�����֤�ţ�\n");
		   scanf("%s",num);
		   if(p==NULL)
		   {
			   printf("����ְ����Ϣ¼�룡\n");
			   return ;
		   }
		   while(p)
		   {
			   if(strcmp(p->Number,num)==0)
			   {   
				    printf("��ְ��ԭ����Ϣ���£�\n");
					printf("���֤��           ���� �������� ѧ�� ����        ���� �������� �����γ�\n");
					printf("%s %s   %d %s %f %s   %ld        %s\n", p->Number, p->Name, p->Old, p->Edu, p->Salary, p->Address, p->Time, p->Lesson);
				 	printf("����������");  //����
					scanf("%s",name);
					printf("����������ڣ�");  //��������
					scanf("%d",&old);
					printf("����ѧ����");  //ѧ��
					scanf("%s",edu);
					printf("���빤�ʣ�");  //����
					scanf("%f",&salary);
					printf("���뼮�᣺");  //����
					scanf("%s",address);
					printf("���빤�����ޣ�");  //��������
					scanf("%ld",&tel);
					printf("���������γ̣�");  //�����γ�
					scanf("%s", lesson);
					strcpy(p->Lesson, lesson);
   					strcpy(p->Name,name);
					p->Old=old;
					strcpy(p->Edu,edu);
					p->Salary=salary;
					strcpy(p->Address,address);
					p->Time=tel;
                    saveWorToFile();                              //�����޸ĺ���Ϣ
					printf("�޸ĳɹ���\n");
					a=0;
					break;
			   }
			   p=p->next;
		   }
		   if(a==1)
		   printf("û�д�ְ����Ϣ��\n");
		   break;
   case 2:
	 printf("����ѧ�������޸�ְ������\n");
     printf("��������Ҫ�����޸ĵ�ְ��ѧ�������ӹ��ʣ�\n");
	 printf("ѧ����");
	 scanf("%s",xueli);
	 printf("���ӹ��ʣ�");
	 scanf("%f",&money);
     if(p==NULL)
	 {
		 printf("����ְ����Ϣ¼�룡\n");
		 return ;
	 }
	 while(p)
	 {
	   if(!strcmp(p->Edu,xueli))
	   {
           p->Salary=p->Salary+money;
	   }
	   p=p->next;
	 }
	 printf(" �޸ĳɹ���");
    saveWorToFile();
	break;
   }
}
void saveWorToFile()                //����ְ����Ϣ���ļ�
{
	FILE *fp;
    struct WORK*p;
	p = worker;
	if((fp=fopen("worker.txt","w"))==NULL)
	{
		printf("Can not open the file,press any key exit!");
		exit(1);
	}
	while(p)
	{
		fprintf(fp,"%s %s %d %s %f %s %ld %s\n",p->Number,p->Name,p->Old,p->Edu,p->Salary,p->Address,p->Time,p->Lesson);
		p=p->next;
    }
	fclose(fp);
}	
/***************************************************************************************************************************/
void readWorkerput ()           //����ǰ���ļ����ݶ�ȡ�������ڴ�
{ 
 
    int i=0;
	FILE *FP;
	FILE *fp;
	int b=i-1;
	int Num;
	int j=1;
	struct WORK *p=(struct WORK *)malloc(sizeof(struct WORK));
    fp=fopen("worker.txt","rb"); //��ֻ����ʽ�򿪵�ǰĿ¼�µ�.txt
    if(fp==NULL)
    {
        printf("�޷����ļ�\n");
        printf("�Ƿ��½�һ��worker.txt(��:1��:2)\n");
        scanf("%d",&Num);
		if(Num==1)
		{
			fp = fopen("worker.txt","ab+");
		}
		else
		{
			exit(0);
		}
    }
 while(!feof(fp))
	{
		fscanf(fp,"%s",p->Number);
		fscanf(fp,"%s",p->Name);
		fscanf(fp,"%d",&p->Old);
		fscanf(fp,"%s",p->Edu);
		fscanf(fp, "%f",&p->Salary);
		fscanf(fp, "%s",p->Address);
		fscanf(fp, "%ld",&p->Time);
		fscanf(fp, "%s", p->Lesson);
		i++;
		addworker(p);
	}
	fclose(fp); 
} 