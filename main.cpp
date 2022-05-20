
#include "Header_file.h"

void testSqQueue(){//测试顺序队列
    SqQueue Q;
    InitQueue(Q);
    int x=-1;
    scanf("%d",&x);
    while(x!=9999){
        EnQueue(Q,x);
        scanf("%d",&x);
    }
    printf("队列长度为%d\n", Number(Q));
    int y=-1;
    DeQueue(Q,y);
    printf("出队元素为%d\n",y);
    printf("队列长度为%d\n", Number(Q));

}

void testLinkQueue() {//测试链队列
    LinkQueue Q;
    InitQueue(Q);
    int x=-1;
    scanf("%d",&x);
    while(x!=9999){
        EnQueue(Q,x);
        scanf("%d",&x);
    }
    printf("队列长度为%d\n", Number(Q));
}

int main(){
    testSqQueue();
//    testLinkQueue();
    return 0;
}
