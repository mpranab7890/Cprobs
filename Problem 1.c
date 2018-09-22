#include <stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("output.txt" , "w" );
    fputs("Volume(ml) \t Pressure(atm)", fptr);
    float n,p,vtemp;
    int v1,v2,t,vdif,v;
    float a=3.592;
    float b=0.0427;
    float r=0.08206;
    printf("The absolute temperature?");
    scanf(" %d" , &t);
    printf("Initial volume in ml?");
    scanf(" %d" , &v1);
    printf("Final volume in ml?");
    scanf(" %d" , &v2);
    printf("Increment volume?");
    scanf(" %d" , &vdif);
    printf("No of moles?");
    scanf(" %f" , &n);
    for(v=v1;v<=v2;v=v+vdif){
        vtemp=(float)v/1000;
        p=(float)(((n*r*t)/(vtemp-b*n))-((a*n*n)/(vtemp*vtemp)));
        printf ("%f \t",p);
        fprintf(fptr, "\n%d \t \t %f" , v , p);
    }
    fclose(fptr);
}
