#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct patient
{
        char patientname[20];
        char mobileno[11];
        int account_no;
        int room_no;
        int flag;
        char doctorname[20];
        char diseasename[20];
        char joiningdate[10];
        char dischargedate[10];
        struct patient *link;
}PATIENT;
void printmenu();
PATIENT *modify_details(PATIENT *head);
PATIENT *sync_from_file(PATIENT *head);
void save_data_file(PATIENT *head);
void print_details(PATIENT *head);
PATIENT *book_appointment(PATIENT *head);
PATIENT *delete_account(PATIENT *head);

