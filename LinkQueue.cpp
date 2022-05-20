//
// Created by zwp18 on 2022/5/20.
//
/*
 * 链队列(带头结点)
 */
#include <cstddef>
#include "LinkQueue.h"
#include "malloc.h"

void InitQueue(LinkQueue &Q){//初始化队列
    Q.front=Q.rear=(LinkNode *) malloc(sizeof (LinkNode));
    Q.front->next=NULL;
}

bool IsEmpty(LinkQueue Q){//判断队列是否为空
    if(Q.front==Q.rear)
        return true;
    else
        return false;
}

void EnQueue(LinkQueue &Q,ElemType x){//入队
    LinkNode *s=(LinkNode *) malloc(sizeof (LinkNode));
    s->data=x;
    s->next=NULL;
    Q.rear->next=s;
    Q.rear=s;
}

bool DeQueue(LinkQueue &Q,ElemType &x){//出队
    if(IsEmpty(Q))
        return false;
    LinkNode *p=Q.front->next;
    x=p->data;
    Q.front->next=p->next;
    if(Q.rear=p)
        Q.rear=Q.front;
    free(p);
    return true;
}

int Number(LinkQueue Q){//队列元素个数
    LinkNode *p=Q.front;
    int num=0;
    while(p!=Q.rear){
        p=p->next;
        num++;
    }
    return num;
}