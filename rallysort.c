//Rallysort: sort values using game loop 
//
//Compile: cc rallysort.c -o rallysort
//Run:     ./rallysort 2 7 1 8 2 8 1 8 2 8 4
//

#include <stdio.h>
#include <stdlib.h>

typedef struct rallycar {
  double speed;   //gather as input
  double position;//derived
  int finished;   //derived
} Rallycar;

#define FLOAT_FMT "%.1f"

int main(int argc, char *argv[])
{
  Rallycar cars[argc];

  int i;

  //Initialize cars
  for (i = 0; i < argc; i++)
  {
    Rallycar car;
    car.speed = atof(argv[i]);//read from command line args
    car.position = 0;
    car.finished = 0;
  
    if (car.speed <= 0)
    {
      car.finished = 1; //ignore
    }
    
    //printf("Read car with speed: " FLOAT_FMT "\n", car.speed);
    cars[i] = car;
  }

  double time = 0;
  double time_delta = 0.1;
  double finish_line = 123456.00;
  int num_cars = argc;

  //Game loop or physics loop
  while(1)
  {
    int cars_racing_still = 0;

    for (i = 0; i < num_cars; i++)
    {
      Rallycar car = cars[i];

      if (car.finished)
      {
        continue;
      }

      car.position += time_delta * car.speed; 

      if (car.position >= finish_line)
      {
        car.finished = 1;
        printf("Output: " FLOAT_FMT "\n", car.speed);
      }
      else 
      {
        cars_racing_still = 1;
      }

      cars[i] = car;
    }

    if (!cars_racing_still)
    {
      break;
    }

    time += time_delta;
  }

  printf("Done\n");
  
  return 0;
}

