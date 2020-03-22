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
    char normal[255],value[255];
    
   do {
        
        normal[i] = getchar();
        
        scanf("%d %d %d",&start[i],&end[i],&step[i]);
        
        if ((start[i] > end[i] && step[i] > 0) || (start[i] < end[i] && step[i] < 0)) goto stop;
        
        else {
            normal[i] = value[i];
            value[i] = start[i];
        }
        i++;
        
    }
    while(b = getchar() != EOF);
    
    while(value[0] < end[0]){
        
        printf("%c : %d %c : %d %c : %d\n",normal[0],value[0],normal[1],value[1],normal[2],value[2]);
        value[i-1] += step[i-1];
        for (m=i-1;m > 0;m--){
            if (value[m] > end[m]){
                value[m-1] += step[m-1];
                value[m] = start[m];
            }
        }
    }
stop: return 0;
}
