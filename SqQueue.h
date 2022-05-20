//
// Created by zwp18 on 2022/5/20.
//

#define Maxsize 10
typedef int ElemType;
typedef struct {
    ElemType data[Maxsize];
    int front,rear;
}SqQueue;

void InitQueue(SqQueue &Q);//初始化队列
bool QueueEmpty(SqQueue Q);//判断队列是否为空
bool EnQueue(SqQueue &Q,ElemType x);//入队
bool DeQueue(SqQueue &Q,ElemType &x);//出队
bool GetHead(SqQueue Q,ElemType &x);//获得队头元素
int Number(SqQueue Q);//队列元素个数
#ifndef QUEUE_SQQUEUE_H
#define QUEUE_SQQUEUE_H




#endif //QUEUE_SQQUEUE_H
