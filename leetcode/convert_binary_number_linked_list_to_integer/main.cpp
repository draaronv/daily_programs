#include <iostream>
#include <cmath>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
int summing(ListNode *head, int& count1,int& count2)
{
int sum=0;
if((head->next)!=NULL)
{
    count1++;
    count2++;
    sum+=summing(head->next,count1,count2);
    count2--;
    sum+=(head->val) * pow(2,count1-count2);
    return sum;
}

if((head->next)==NULL)
{
sum+=(head->val) * pow(2,count1-count2);
return sum;
}
return sum;
}

int getDecimalValue(ListNode *head)
{
int count2=0;
int count1=0;
return summing(head,count1,count2);
}

int main()
{
ListNode n3(1,NULL);
ListNode n2(0,&n3);
ListNode n1(1,&n2);
cout<< getDecimalValue(&n1)<<endl;
cout<< getDecimalValue(&n3)<<endl;
return 0;
}
