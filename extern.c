#include "extern.h"

//showing program details

    memo_parti* main_memory_pointer;

    int memory_parition_number;

    struct program* main_program;

    int program_number;
//putting program in the qeueue list

void in_queue(struct program *temp){
    //good
    if(main_program==NULL){

        main_program=temp;

    }else{

        prgm *temporary;

        temporary=NULL;

        temporary=main_program;

        while(temporary->nxt!=NULL){

            temporary=temporary->nxt;
        }
        temporary->nxt=temp;

    }

   printf("\n SUCCESSFULLY ADDED !\n");


}

void de_queue(){//good

    prgm *temp;
    temp= main_program;

    main_program=main_program->nxt;

    free(temp);

}

//checking if the queue is empty or no



void First_fit(){//good//


    prgm *temp_prgm=NULL;

    temp_prgm=main_program; /*assigning to temporary variables */

    memo_parti *tempor_memory =NULL;

    tempor_memory = main_memory_pointer; /*assigning to temporary variables */





    while(temp_prgm!=NULL )
    {

        bool found_place =false;
        int i=0;

        while(!found_place && i<memory_parition_number)
        {
            if((temp_prgm->program_size) <= (tempor_memory[i].parition_size ) &&  (tempor_memory[i].partision_status)!= 1 )

            {
                tempor_memory[i].partision_status = 1;

                found_place=true;

                printf("\n FIRST FIT ALGORITHM SIMULATION IS DONE  ");

                de_queue();
            }
            else
            {
                i+=1;
            }

        }

        temp_prgm=temp_prgm->nxt;

    }

}



    void create_memory_parition(){


        printf("HOW MANY PARITIONS YOU NEED ? ");

        scanf("%d",&memory_parition_number);

        main_memory_pointer=calloc(memory_parition_number,sizeof(memo_parti));

        for(int i=0;i<memory_parition_number;i++){

            printf("partion number : ");

            scanf("%d",&main_memory_pointer[i].partion_number);

            printf("partion  size : ");

            scanf("%d",&main_memory_pointer[i].parition_size);

            printf("starting adressin of partion  :");

            scanf("%d",&main_memory_pointer[i].starting_adress_of_partion);

            printf("partision status(1 for occupied 0 for full):");

            scanf("%d",&main_memory_pointer[i].partision_status);

    }

    }




    void show_parition_description_table(){

            if(main_memory_pointer==NULL){

                printf("\n THERE IS NO MEMORY PARTIONING \n");

                printf("PLEASE PARTIIONATE YOUR MEMORY AND TRY AGAIN \n");
            }else{
                printf("\n====================================================================================================================================\n");

                printf("  Parition No  \t\t||\t\t   Starting adress of part  ||\t\t   Size of parition   ||\t\t   Parition Status ");

                printf("\n====================================================================================================================================\n");

                for(int i=0;i<memory_parition_number;i++){


                    printf("     %i         ||\t\t          \t%i                 ||\t\t         %i          ||\t\t         %i  ",(main_memory_pointer[i].partion_number),(main_memory_pointer[i].starting_adress_of_partion),(main_memory_pointer[i].parition_size),(main_memory_pointer[i].partision_status));
                printf("\n====================================================================================================================================\n");

                }

            }

        }

        void add_program_to_queue(){
            int program_numbers;

            printf("HOW MANY YOU PROGRAMS YOU WANT TO ADD ");
            scanf("%i",&program_numbers);

            for(int i=0;i<program_numbers;i++){
                prgm *temp;

                temp=NULL;

                temp=malloc(sizeof(struct program));

                printf("Name of program : ");

                scanf("%s",temp->program_name);

                printf("Program size : ");

                scanf("%d",&temp->program_size);

                printf("estimated time of execution :");

                scanf("%d",&temp->estimated_exec_time);

                temp->nxt=NULL;

                in_queue(temp);

                }

        }


void show_program()
    {

    if(main_program==NULL)
    {

        printf("\n NO PROGRAM ADDED PLEASE ADD PROGRAM AND TTRY AGAIN\n");

    }else
    {

        prgm *tempo;

        tempo=main_program;

    while(tempo!=NULL)
        {

        printf("\n===================================================\n");

        printf("program name is %s \n",tempo->program_name);

        printf("his size is : %i\n",tempo->program_size);

        printf("estimated process : %i",tempo->estimated_exec_time);

        printf("\n===================================================\n");

        tempo=tempo->nxt;

        }

    }

}


    void memory_free(){
    int deleted_memory_partion;

    printf("\nSELECT WHICH PARITIONS YOU WANT TO ADD ");

    scaf("%d",&deleted_memory_parition);

    if(deleted_memory_partion>memory_parition_number){
        printf("\nTHE NUMBER YOU CHOSED IS OUT OF THE MEMORY PARITIONS AVAILLABLE PLEASE TRY AGAIN ")
    }else{
        memo_parti *temporary;

        temporary=NULL;

        temporary=main_memory_pointer;

        if(temporary[deleted_memory_partion-1].starting_adress_of_partion==0){
            printf("THE CHOOSED MEMORY IS ALREADY FREE !");
        }else{
            temporary[deleted_memory_partion-1].starting_adress_of_partion==0;
            printf("MEMORY PARITION LIBERATIONS IS FREE NOW !");

        }



    }



    }


