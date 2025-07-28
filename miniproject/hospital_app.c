#include"myheader.c"
int main()
{
        char choice;
        PATIENT *head=NULL;
        head=sync_from_file(head);
        while(1)
        {
                printmenu();
                printf("enter the choice:\n");
                __fpurge(stdin);
                scanf("%c",&choice);
                switch(choice)
                {
                        case 'a':
                        case 'A':head=book_appointment(head);
                                 break;
                        case 'p':
                        case 'P':print_details(head);
                                 break;
                        case 's':
                        case 'S':save_data_file(head);
                                 break;
                        case 'm':
                        case 'M':head=modify_details(head);
                                 break;
                        case 'x':
                        case 'X':head=delete_account(head);
                                 break;
                        case 'q':
                        case 'Q':exit(0);
                                 break;
                }
        }

}


