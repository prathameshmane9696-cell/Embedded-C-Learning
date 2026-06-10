#include<stdio.h>
#include<stdint.h>

int  set(int REG, int POS){
    REG = REG | (1<<POS);
    return REG;
}

int  clear(int REG, int POS){
    REG = REG & ~(1<<POS);
    return REG;
}

int  toggle(int REG, int POS){
    REG = REG ^ (1<<POS);
    return REG;
}

int check_set(int REG, int POS){
    return (REG & (1<<POS));
}

int main(){
    uint8_t REG=10;
    int POS=2;
    
    printf("After Setting the Bit at Position 2 result is  %d\n",set(REG,POS));

    printf("After Setting the Bit at Position 2 result is  %d\n",clear(REG,POS));

    printf("After Setting the Bit at Position 2 result is  %d\n",toggle(REG,POS));

    printf("Bit at position 2 is %d\n",check_set(REG,POS));

}