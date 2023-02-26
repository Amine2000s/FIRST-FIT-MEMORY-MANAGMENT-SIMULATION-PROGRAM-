#include <stdio.h>
#include <stdlib.h>
#include "extern.h"


    extern memo_parti* main_memory_pointer;

    extern int memory_parition_number;

    extern struct program* main_program;

    extern  program_number;

int main()
{
   main_memory_pointer=NULL;

   main_program=NULL;

    int user_choise,memory_paritionss;
    prgm *head , *tail ;

    printf("\t==========================================================\n");
    printf("\t\t   welcome to the Memory management \n\t\t(static paritioning) simulation program");
    printf("\n\t==========================================================\n");


    do{
        printf("\nCHOOSE AN OPERATION (-1 FOR EXIT )\n");

        printf("\n 1: CREATE MEMORY PARITIONS  \n ");

        printf("\n 2: SHOW MEMORY PARITIONS \n  ");

        printf("\n 3: ADD  PROGRAM/s IN THE QUEUE \n ");

        printf("\n 4: SHOW THE QUEUE OF PROGRAMS \n ");

        printf("\n 5: FIT THE PROGRRAMS FROM QUEUE INTO MEMORY PARITIONS (FIRST FIT )  \n");

        printf("\n 6: FREE A PARTITION  \n ");

        scanf("%d",&user_choise);

        switch(user_choise){
            case (1) :

                    create_memory_parition();

                    break;
            case (2):
                    show_parition_description_table();

                    break;

            case (3):

                    add_program_to_queue();

                    break;

            case (4) :

                   show_program();

                    break;

            case (5) :
                    First_fit();

                    break;

            case (6):
                    memory_free();
                    break;


        }

    }while(user_choise!=-1);

    return 0;
}
