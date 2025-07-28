#include"myheader.h"
void save_data_file(PATIENT *head)
{
        int size=sizeof(PATIENT)-sizeof(PATIENT*);
        FILE *fp=NULL;
        PATIENT *temp=head;
        fp=fopen("record.txt","w");
        if(head==NULL)
        {
                printf("no patient details found");
        }

        else
        {
                while(temp)
                {
                        fwrite(temp,size,1,fp);
                        temp=temp->link;
                }
        }
        fclose(fp);

}

