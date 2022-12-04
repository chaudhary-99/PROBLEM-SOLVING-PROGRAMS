#include<stdio.h>
#include<stdlib.h>
struct student{
    int rollno;
    char name[10];
    double percentage;//take this always in double
};
void input(struct student *y,int n ){
    for(int i=0;i<n;i++){
           scanf("%lf%s%ld",&(y+i)->rollno,(y+i)->name,&(y+i)->percentage);
    }
}

void output(struct student *y,int n ){
    for(int i=0;i<n;i++){
        printf("%s  %lf  %ld\n",y[i].name,y[i].rollno,y[i].percentage);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    struct student* s;
    s=(struct student*) malloc(n* sizeof(struct student));
    input(&s,n);
    output(&s,n);
    return 0;
}