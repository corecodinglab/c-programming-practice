#include <stdio.h>
#include <stdlib.h>

struct Student {
    int id;
    char name[50];
    float marks;
};

int main() {

    struct Student s;
    FILE *fp;
    int choice;

    while(1) {

        printf("\n--- Student Record System ---\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        if(choice == 1) {

            fp = fopen("students.txt","a");

            printf("Enter ID: ");
            scanf("%d",&s.id);

            printf("Enter Name: ");
            scanf("%s",s.name);

            printf("Enter Marks: ");
            scanf("%f",&s.marks);

            fwrite(&s,sizeof(s),1,fp);

            fclose(fp);

            printf("Student record saved.\n");

        }

        else if(choice == 2) {

            fp = fopen("students.txt","r");

            while(fread(&s,sizeof(s),1,fp)) {

                printf("\nID: %d",s.id);
                printf("\nName: %s",s.name);
                printf("\nMarks: %.2f\n",s.marks);

            }

            fclose(fp);
        }

        else if(choice == 3) {
            exit(0);
        }

        else {
            printf("Invalid choice\n");
        }
    }

}
