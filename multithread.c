// Nutthanicha Yongpoomputta 5888090
// Inthukorn Limpachaveng 5888261
// section 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <unistd.h>
#include<pthread.h>
#include<semaphore.h>
#define true 1
#define stack_size 10
pthread_mutex_t mutex;

void*Producer(void *a);
void*Consumer(void *a);


int pro,con,i,rc,n,stack[stack_size],top =-1,size,n,counter; // #of producer,#of consumer,stack size,number element.#of buffer


int main(int argc, char *argv[]){
    
    pro = atoi(argv[1]);
    con = atoi(argv[2]);
    size = atoi(argv[3]);
    
    for(i=0;i<n;i++){
    scanf("%d",&stack[i]);
    }
       //create producer and consumer thread
   for(j=0;j<pro;j++){

      pthread_create(&tp[j],NULL,Producer,NULL)
   }
   
   for(j=0;j<con;j++){

      pthread_create(&tc[j],NULL,Consumer,NULL)
   }
   
   for(j=0;i<pro;j++){
       pthread_join(tp[j],NULL);}
	
   for(j=0;i<con;j++){
       pthread_join(tc[j],NULL);}

   exit(0);
}

/*
void *Consumer(void *a)
{
  
 }

void *Producer(void *a)
{
   
 
 }
*/
    
