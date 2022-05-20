//
// Created by zwp18 on 2022/5/20.
//
/*
 * 顺序队列
 */
#include "SqQueue.h"

void InitQueue(SqQueue &Q){//初始化队列
    Q.rear=Q.front=0;
}

bool QueueEmpty(SqQueue Q){//判断队列是否为空
    if(Q.front==Q.rear)
        return true;
    else
        return false;
}

bool EnQueue(SqQueue &Q,ElemType x){//入队
    if((Q.rear+1)%Maxsize==Q.front)//判断是否存满了
        return false;
    Q.data[Q.rear]=x;
    Q.rear=(Q.rear+1)%Maxsize;
    return true;
}

bool DeQueue(SqQueue &Q,ElemType &x){//出队
    if(QueueEmpty(Q))
        return false;
    x=Q.data[Q.front];
    Q.front=(Q.front+1)%Maxsize;
    return true;
}

bool GetHead(SqQueue Q,ElemType &x){//获得队头元素
    if(QueueEmpty(Q))
        return false;
    x=Q.data[Q.front];
    return true;
}

int Number(SqQueue Q){//队列元素个数
    int num;
    num=(Q.rear+Maxsize-Q.front)%Maxsize;
    return num;
}