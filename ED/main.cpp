#include <iostream>
#include "firstFit.h"
#include "bestFit.h"

using namespace std;

int main() 
{
    int bsize[] = {100, 500, 200, 300, 400};
    int psize[] = {112, 518, 110, 526};
    int m = sizeof(bsize)/sizeof(bsize[0]);
    int n = sizeof(psize)/sizeof(psize[0]);
    //firstFit(blockSize, m, processSize, n);
    //bestfit(bsize, m, psize, n);
    return 0 ;
}
