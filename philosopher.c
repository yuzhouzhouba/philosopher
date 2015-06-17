#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

/*******
wirter:cheng
feather:easy to understand  
*******/

#define N 5
#define NUM (i+N)%N 
#define THINKING 0
#define EATING 1

void philosopher(int i);




int main()
{
  int i=0;
  pthread_t id[N]; 
  for(i=0; i<100; i++)
  {
    pthread_create(&id[i],NULL,(void *)philosopher,i);
  }
  pthread exit(NULL);
  return 0;
}

void philosopher(int i)
{
  while(1)
  {
    think(i);
    if(test(i)==ture){
      eating(i);
      release(i);
      }
  }
}  
           
void think(int i)
{
  printf("philosopher %d is thinking.....\n",i);
  sleep(1);
}

void eating(int i)
{
  pthread_mutex_lock(&mutex);
  state[NUM]=1,state[NUM-1]=0;
  printf("philosopher %d is eating.....\n",i);
  sleep(1);
}

void release(i)
{
  pthread_mutex_unlock(&mutex);
  state[NUM]=0,state[NUM-1]=0;
}

int test(int i)
{
  if(state[NUM]==1&&state[NUM-1])
  return ture;
}



