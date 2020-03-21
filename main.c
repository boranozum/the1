#include <stdio.h>
#include "loop.h"

int loop_variable_value(char x){
    
    return x;
}

int loop_continue(char x){
    
    int place,t,k;
    
    for (k = 0 ; k < i ; k++){
        if (d[k] == x) k = place;
    }
    d[place] += step[place];
    if (d[place] > end[place]) d[place] = start[place];
    for (t=0 ; t < place ; t++) d[t] = start[t];
}
int main(){
    
    int b,start[255],end[255],step[255],i = 0,y=1,m,k=1,total_count=1,loop_count[255],size_count,t;
    char d[255];
    
   do {
        
        d[i] = getchar();
        
        scanf("%d %d %d",&start[i],&end[i],&step[i]);
        
        if ((start[i] > end[i] && step[i] > 0) || (start[i] < end[i] && step[i] < 0)) goto stop;
        
        else {
            size_count=0;
            for(m = start[i] ; m <= end[i] ; m += step[i] ) size_count += 1;
            total_count *= size_count;
            loop_count[i] = total_count;
            
        }
        i++;
        
    }
    while(b = getchar() != EOF);
    
    for (t=0 ; t < i ; t++) d[i]=start[i];
    
    while(y <= total_count){
        
        d[0] += step[0];
        
        if (d[0] > end[0]) d[0]=start[0];
        
        while (k < i){
        
            if (y == loop_count[k-1]){
                d[k] += step[k];
                if (d[k] > end[k]) d[k] = start[k];
            }
            k++;
        }
        loop_execute();
        y++;
    }
    
stop: return 0;
}
