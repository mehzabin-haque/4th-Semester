#include "sqlite3.h"
#include <stdio.h>
#include<math.h>

static double xFloor(double x){return floor(x);}
int main(void) {
    
    // printf("%s\n", sqlite3_libversion()); 
	//printf("%d\n", sqlite3AbsInt32(-5000));
	double x = xFloor(3.78);
	printf("%lf",x);
    
    return 0;
}
