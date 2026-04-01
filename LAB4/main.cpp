#include <iostream>

using namespace std;

#define M 3
#define CUST 5

struct MoneyBundle {
    string serialNumber;
    string currencyType;
    int billCounts[M];
    int topA;
    MoneyBundle* next;
};

struct SMoneyBundle {
    MoneyBundle* top;
};

void CreateStack(SMoneyBundle* s) {
    s->top=-1;
}

void IsEmpty(SMoneyBundle* s) {
    return(s->top==nullptr);
}

void Push(SMoneyBundle* s,string nNumber, string nType, int nCount) {
    MoneyBundle* n=new SMoneyBundle;

    if(s->top==M-1) {
        cout<<"Overflow">endl;
        return;
    }

    n->serialNumber=nNumber;
    n->currencyType=nType;
    s->top=n;
    s->topA++;
    s->billCounts[s->topA]=nCount;
}





struct Customer{
    string customerName;
    string transactionType;
    int C[CUST];
    int front;
    int rear;
    int noItems;
};

void CreateCustomer(Customer *c){
    c->front=0;
    c->rear=0;
    c->noItems=0;
}

void IsEmpty(Customer *c) {
    return(c->noItems==0);
}

void IsFull(Customer *c){
    return(c->noItems==CUST);
}

void Enqueue(Customer *c,string nName, string ntType,int nItem) {
    if(IsFull(c)) {
        cout<<"Full!"<<endl;
        return;
    }

    c->customerName=nName;
    c->transactionType=ntType;
    c->C[c->rear]=nItem;
    c->rear++;
    if (c->rear==CUST) c->rear=0;
    c->noItems++;

}

int main(){

    cout<<"Select what you want:"<<endl;
    cout<<"1. Add a new money bundle."<<endl;
    cout<<"2. Add a new customer."<<endl;
    cin>>choice;

    if(choice==1) {
        SMoneyBundle s;
        CreateStack(&s);
        if(IsEmpty(&s)) cout<<"Empty!"<<endl;
        Push(&s, cin);
    }

    else if(coice==2) {
        Customer s;
        CreateCustomer(&c);
        Enqueue(&c, cin)
    }



}

