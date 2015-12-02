//
//  main.cpp
//  list
//
//  Created by 小鱼🐟 on 15/12/2.
//  Copyright (c) 2015年 小鱼🐟. All rights reserved.
//

#include <iostream>

struct student
{
    char name[100];
    int  birth;
    student *next;
};
int main(int argc, const char *argv[])  {
    student A,B,C,D;
    student *p,*head;
    scanf("%s%d",A.name,&A.birth);
    scanf("%s%d",B.name,&B.birth);
    scanf("%s%d",C.name,&C.birth);
    scanf("%s%d",D.name,&D.birth);
    A.next=&B;
    B.next=&C;
    C.next=&D;
    D.next=0;
    head=&A;//头指针
    p=head;
    while(p!=0)
    {
        printf("%s %d\n",p->name,p->birth);
        p=p->next;//把下一个地址赋给p p为0时，循环结束
    }
    
    return 0;
}
