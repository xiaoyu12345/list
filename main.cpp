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
    int i;
    student *p,*q,*head;
    head=new student;//用student建立一个结构体，无名结构体，先建立一个头节点，头节点不存放数据
    head->next=0;//指针域赋值0（空）
    p=head;//p指针也指向这个节点，head和p都指向头节点
    for(i=0;i<4;i++)
    {
        q=new student;//创建一个新的节点，创建一个新的无名结构题
        p->next=q;//让q指向这个结构体
        q->next=0;//再次赋值空
        scanf("%s %d",q->name,&(q->birth));//输入存入数据域
        p=q;//把p赋值给q
    }
    p=head->next;
    while(p!=0)
    {
        printf("%s %d\n",p->name,p->birth);
        p=p->next;//把下一个地址赋给p p为0时，循环结束
    }
    
    return 0;
}
