#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void *adc10ch_i2c_thread( void *ptr );

adc10ch_i2c_init()
{
     pthread_t thread;
     
     int  iret;
     printf("[ INFO ] ADC10CH_I2C Loaing...\n");

    /* Create independent threads each of which will execute function */

     iret = pthread_create( &thread, NULL, adc10ch_i2c_thread, (void*));
     if(iret)
     {
         fprintf(stderr,"[ Error ] - pthread_create() return code: %d\n",iret);
         exit(EXIT_FAILURE);
     }

     printf("pthread_create() for thread 1 returns: %d\n",iret);
     
     /* Wait till threads are complete before main continues. Unless we  */
     /* wait we run the risk of executing an exit which will terminate   */
     /* the process and all threads before the threads have completed.   */

     pthread_join( thread, NULL); 
     printf("[ OK ] ADC10CH_I2C Pthread Closed...\n");
     exit(EXIT_SUCCESS);
}

void *adc10ch_i2c_thread( void )
{
  printf("[ OK ] ADC10CH_I2C Pthread Started...\n");
  
}