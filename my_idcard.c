#include <stdio.h>
#include <string.h>

struct id_card {
    char name[50];
    long long int enroll;
    char class[10];
    char Department[50];
    long long int number;
    char address[100];
    char clg_name[100];
};

int main()
{    
    printf("Student's ID Card\n\n");
    struct id_card Maharshi;
    strcpy(Maharshi.name, "Maharshi");
    Maharshi.enroll = 236400316135;
    strcpy(Maharshi.class, "IT23");
    strcpy(Maharshi.Department,"Information Technology");
    strcpy(Maharshi.clg_name, "R.C.Technical Institute");
    Maharshi.number=9023457890;
    strcpy(Maharshi.address,"23,Radhika park society, Amraiwadi,Ahmedabad");
    printf("Name: %s\n", Maharshi.name);
    printf("Enrollment: %lld\n", Maharshi.enroll);   
    printf("Class: %s\n", Maharshi.class);
    printf("Department: %s\n",Maharshi.Department);
    printf("College Name: %s\n", Maharshi.clg_name);
    printf("Phone Number: %lld\n", Maharshi.number); 
    printf("Address: %s\n", Maharshi.address);
}