
#include "Header_file.h"

void testSqQueue(){//����˳�����
    SqQueue Q;
    InitQueue(Q);
    int x=-1;
    scanf("%d",&x);
    while(x!=9999){
        EnQueue(Q,x);
        scanf("%d",&x);
    }
    printf("���г���Ϊ%d\n", Number(Q));
    int y=-1;
    DeQueue(Q,y);
    printf("����Ԫ��Ϊ%d\n",y);
    printf("���г���Ϊ%d\n", Number(Q));

}

void testLinkQueue() {//����������
    LinkQueue Q;
    InitQueue(Q);
    int x=-1;
    scanf("%d",&x);
    while(x!=9999){
        EnQueue(Q,x);
        scanf("%d",&x);
    }
    printf("���г���Ϊ%d\n", Number(Q));
}

int main(){
    testSqQueue();
//    testLinkQueue();
    return 0;
}
