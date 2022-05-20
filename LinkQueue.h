//
// Created by zwp18 on 2022/5/20.
//

#ifndef QUEUE_LINKQUEUE_H
#define QUEUE_LINKQUEUE_H

typedef int ElemType;

typedef struct LinkNode{
    ElemType data;
    struct LinkNode *next;
}LinkNode;

typedef struct {
    LinkNode *front,*rear;
}LinkQueue;

void InitQueue(LinkQueue &Q);//初始化队列
bool IsEmpty(LinkQueue Q);//判断队列是否为空
void EnQueue(LinkQueue &Q,ElemType x);//入队
bool DeQueue(LinkQueue &Q,ElemType &x);//出队
int Number(LinkQueue Q);//队列元素个数

#endif //QUEUE_LINKQUEUE_H
