#include"myheader.h"
PATIENT *book_appointment(PATIENT *head)
{
        PATIENT *newnode=NULL;
        PATIENT *temp=NULL;
        newnode=calloc(1,sizeof(PATIENT));
        if(newnode==NULL)
        {
                printf("node is not created");
        }
        newnode->account_no=++patientcnt;
        printf("enter the patient name\n");
        scanf("%s",newnode->patientname);
mobile: printf("enter the mobile number:\n");
        scanf("%s",newnode->mobileno);
        for(int i=0;newnode->mobileno[i]!='\0';i++)
        {
                if(newnode->mobileno[i]>='0'&&newnode->mobileno[i]<='9');
                else
                {
                        printf("invalid mobile number\n");
                        goto mobile;
                }
        }
        printf("enter the disease name:\n");
        scanf("%s",newnode->diseasename);
        printf("enter the dr name:\n");
        scanf("%s",newnode->doctorname);
   flag:printf("admit:y/n\n");
        __fpurge(stdin);
        scanf("%c",&newnode->flag);
        switch(newnode->flag)
        {
                case 'y':
                case 'Y':printf("enter the joining date:\n");
                         scanf("%s",newnode->joiningdate);
                         printf("enter the discharge date:\n");
                         scanf("%s",newnode->dischargedate);
                         break;
                case 'n':
                case 'N':break;
                default:printf("not a valid option\n");
                        goto flag;
        }
        if(head==NULL)
        {
                head=newnode;
        }
        else
        {
                temp=head;
                while(temp->link!=NULL)
                {
                        temp=temp->link;
                }
                temp->link=newnode;
                newnode->link=NULL;
        }
        return head;
}

