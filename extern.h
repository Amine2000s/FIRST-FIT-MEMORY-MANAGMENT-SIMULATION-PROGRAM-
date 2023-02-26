#ifndef EXTERN_H_INCLUDED
#define EXTERN_H_INCLUDED
#include <stdlib.h>
#include <stdbool.h>

//*-unit of program
  typedef struct program {

        char program_name[20];
        int  program_size ;
        int  estimated_exec_time ;
        struct program *nxt;
    }prgm ;


//*-unit of memory parition*/*
  typedef struct memory_parition  {
            int partion_number;
            int parition_size ;
            int starting_adress_of_partion;
            int  partision_status;//1 if full 0 if empty


    }memo_parti ;




    void show_program();//1    show program_name + program_size + estimated_exec time

    void in_queue(prgm *head);// put the program in queue

    void de_queue();// de_qeue + print the program details using show program function

   //verify if queu is empty

    void First_fit();//11

    //void PDT_creator();

    //void memory_fill();

    void create_memory_parition();//1

    void show_parition_description_table();//4

    void add_program_to_queue();//1

    void memory_free();
//#endif // extern_h_INCLUDED



#endif  EXTERN_H_INCLUDED
