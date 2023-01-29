#include<stdio.h>

struct station
{
    struct station *next;
    char name[60];
    int rapid;
};

int main(void){
    struct station machida = {NULL, "machida",1};
    struct station kobuchi = {&machida, "kobuchi",0};
    struct station fuchinobe = {&kobuchi, "fuchinobe",0};
    struct station yabe = {&fuchinobe, "yabe",0};
    
    struct station *head = &yabe;
    struct station *p;
    
    for (p = head; p != NULL; p = p->next)
    {
        printf("%s",p->name);
        if(p->rapid)
            printf(" (rapid)");
        printf("\n");
    }
    
    return 0;
}
