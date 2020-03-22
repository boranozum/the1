#include <stdio.h>


/*int loop_variable_value(char x){
    
    return x;
}

void loop_continue(char x){
    
    int place,t,k;
    
    for (k = 0 ; k < i ; k++){
        if (d[k] == x) k = place;
    }
    d[place] += step[place];
    if (d[place] > end[place]) d[place] = start[place];
    for (t=0 ; t < place ; t++) d[t] = start[t];
}
 */
int main(){
    
    int b,start[255],end[255],step[255],i = 0,m,k=1;
    char normalchar[255];
    
   do {
        
        normalchar[i] = getchar();
        
        scanf("%d %d %d",&start[i],&end[i],&step[i]);
        
        if ((start[i] > end[i] && step[i] > 0) || (start[i] < end[i] && step[i] < 0)) goto stop;
        
        else {
            normalchar[i] = start[i];
        }
        i++;
        
    }
    while(b = getchar() != EOF);
    
    while(normalchar[0] < end[0]){
        
        printf("%c : %d %c : %d %c %d\n",normalchar[0],normalchar[0],normalchar[1],normalchar[1],normalchar[2],normalchar[2]);
        normalchar[i-1] += step[i-1];
        for (m=i-1;m > 0;m--){
            if (normalchar[m] > end[m]){
                normalchar[m-1] += step[m-1];
                normalchar[m] = start[m];
            }
        }
    }
stop: return 0;
}
