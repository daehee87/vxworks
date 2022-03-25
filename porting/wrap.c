#include <stdio.h>

//{{ override missing import functions here! (infer types from IDA hexray)
int ioTaskStdGet(int a, int b){  return 0;  }
//}}

void main(){
    // once porting is done, we call any exported function here.
    DSMain();
}

