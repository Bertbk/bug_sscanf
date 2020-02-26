#include <stdio.h>
#include <stdlib.h>
  
int bug() {
  char *str ="4.1 0 8";
  double version = 0.;
  int format = 0, size = 0;
  if(sscanf(str, "%lf %d %d", &version, &format, &size) != 3) {
    printf("Result : %lf %d %d\n", version, format, size);   
    printf("FAILED\n");
    return 1;
  }
  else
  {
    printf("Result : %lf %d %d\n", version, format, size);    
    return 0;
  }
}