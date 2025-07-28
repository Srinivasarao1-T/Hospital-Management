#include"myheader.c"
PATIENT *delete_account(PATIENT *head)
{
        int accno;
        PATIENT *prev=NULL;
        PATIENT *temp=head;
        printf("enter the account number:\n");
        scanf("%d",&accno);
        if(head==NULL)
        {
                printf("no records to delete\n");
                return NULL;    }
        if((accno==head->account_no)&&(head->link==NULL))
        {
                free(head);
                head=NULL;
                return NULL;
        }
        if(accno==head->account_no)
                {
                        head=head->link;
                        free(temp);
                        temp=NULL;
                        return head;

                }

        while(temp)
        {
/*              if(accno==head->account_no)
                {
                        head=head->link;
                        free(temp);
                        temp=NULL;
                        return head;

                }               */
                if(accno==temp->account_no)
                {
                        prev->link=temp->link;
                        free(temp);
                        return head;
                }
                prev=temp;
                temp=temp->link;
        }
        if(temp==NULL)
        {
                printf("record not found");
                return head;
        }
}

