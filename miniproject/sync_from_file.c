#include"myheader.h"
PATIENT *sync_from_file(PATIENT *head)
{
        int size=sizeof(PATIENT)-sizeof(PATIENT*);
        FILE*fp;
        PATIENT t,*newnode,*temp;
        fp=fopen("record.txt","r");
        if(fp==NULL)
                return head;
        while(fread(&t,size,1,fp))
        {
                newnode=calloc(1,sizeof(PATIENT));
                newnode->account_no=t.account_no;
                strcpy(newnode->patientname,t.patientname);
                strcpy(newnode->mobileno,t.mobileno);
                strcpy(newnode->diseasename,t.diseasename);
                strcpy(newnode->doctorname,t.doctorname);
                newnode->flag=t.flag;
                if(t.flag=='y')
                {
                        strcpy(newnode->joiningdate,t.joiningdate);
                        strcpy(newnode->dischargedate,t.dischargedate);
                }
                if(head==NULL)
                {
                        head=newnode;
                        patientcnt=newnode->account_no;
                }

                else
                {
                        temp=head;
                        while(temp->link)
                                temp=temp->link;
                        temp->link=newnode;
                        patientcnt=newnode->account_no;

                }

        }
        fclose(fp);
        return head;


}

