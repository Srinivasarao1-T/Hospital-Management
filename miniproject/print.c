#include"myheader.h"
void print_details(PATIENT *head)
{
        int ch;
        PATIENT *temp=NULL;
        int cnt=0;
        printf("1-all patient details\n2-specific patient details\n3-specific doctor details\n4-specific issue patient details\n5-using account number\n6-using contact number\n");
        scanf("%d",&ch);
        if(head==NULL)
        {
                printf("list is empty\n");
        }
        switch(ch)
        {
                case 1: while(head)
                        {
                                printf("%s\n",head->patientname);
                                printf("%s\n",head->mobileno);
                                printf("%s\n",head->diseasename);
                                head=head->link;
                        }
                        break;

                case 2:char name[20];
                       printf("enter the patient name:\n");
                       scanf("%s",name);
                       temp=head;
                        while(temp)
                       {
                               if((strcmp(name,temp->patientname))==0)
                               {
                                       printf("%s\n",temp->patientname);
                                       printf("%s\n",temp->mobileno);
                                       printf("%s\n",temp->diseasename);
                                      cnt=1;
                               }
                               temp=temp->link;
                       }
                        if((temp==NULL)&&(cnt!=1))
                        {
                                printf("patient details not found\n");
                                break;

                        }
                        break;
                case 3:char drname[20];
                       printf("enter the doctor name:\n");
                       scanf("%s",drname);
                       temp=head;
                       cnt=0;
                        while(temp)
                       {
                               if((strcmp(drname,temp->doctorname))==0)
                               {
                                       printf("%s\n",temp->patientname);
                                       printf("%s\n",temp->mobileno);
                                       printf("%s\n",temp->diseasename);
                                       cnt=1;
                               }
                               temp=temp->link;
                       }
                        if((temp==NULL)&&(cnt!=1))
                        {
                                printf("details not found\n");
                                break;

                        }
                        break;
		case 4:
                       char dname[20];
                       printf("enter the issue name:\n");
                       scanf("%s",dname);
                       temp=head;
                       cnt=0;
                        while(temp)
                       {
                               if((strcmp(dname,temp->diseasename))==0)
                               {
                                       printf("%s\n",temp->patientname);
                                       printf("%s\n",temp->mobileno);
                                       printf("%s\n",temp->diseasename);
                                       cnt=1;
                               }
                               temp=temp->link;
                       }
                        if((temp==NULL)&&(cnt!=1))
                        {
                                printf("details not found\n");
                                break;

                        }
                        break;
	        case 5:char contact[20];
                       printf("enter the contact name:\n");
                       scanf("%s",contact);
                       temp=head;
                        while(temp)
                       {
                               if((strcmp(contact,temp->mobileno))==0)
                               {
                                       printf("%s\n",temp->patientname);
                                       printf("%s\n",temp->mobileno);
                                       printf("%s\n",temp->diseasename);
                                      cnt=1;
                               }
                               temp=temp->link;
                       }
                        if((temp==NULL)&&(cnt!=1))
                        {
                                printf("patient details not found\n");
                                break;

                        }
                        break;
        }

}



