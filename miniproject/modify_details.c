#include"myheader.h"
PATIENT *modify_details(PATIENT *head)
{
        PATIENT *temp=head;
        int ch;
        int accno;
        char name[20];
        char number[11];
        printf("enter the account no:\n");
        scanf("%d",&accno);
        while(temp)
        {
                if(accno==temp->account_no)
                {
                        printf("1-patient name 2-mobile number 3-disease name 4-doctor name\n");
                        printf("enter the choice:\n");
                        scanf("%d",&ch);
                        switch(ch)
                        {
                                case 1:
                                        //      char name[20];
                                        printf("enter the name:\n");
                                        __fpurge(stdin);
                                        scanf("%s",name);
                                        strcpy(temp->patientname,name);
                                        break;
                                case 2:
                                        //   char number[11];
                                        printf("enter the mobile number:\n");
                                        __fpurge(stdin);
                                        scanf("%s",number);
                                        strcpy(temp->mobileno,number);
                                        break;

                        }
                        return head;
                }
                temp=temp->link;
        }
        if(temp==NULL)
        {
                printf("account not found\n");
                return head;
        }
}

