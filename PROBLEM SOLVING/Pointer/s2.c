#include<stdio.h>
#include<stdlib.h>
struct student{
    int rollno;
    char name[20];
    double perc;
};
int main(){
    struct student *s;
    int n;
    scanf("%d",&n);
    s=(struct student*) malloc(n*sizeof(struct student));  


    for(int i=0;i<n;i++){
        scanf("%d%s%ld",&(s+i)->rollno,(s+i)->name,&(s+i)->perc);
    }

    for(int i=0;i<n;i++){
        printf("%d  %s  %ld\n",(s+i)->rollno,(s+i)->name,(s+i)->perc);
    }
    
    return 0;
}
