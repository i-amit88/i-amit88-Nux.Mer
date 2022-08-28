/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

/* int add(struct ListNode *ptr, int &sum , int &n){
    
    if(ptr-> next == NULL) {
        return 0;
    }
    else{
        add(l1,sum);
        sum = sum + n*ptr->val;
        n = n * 10;
    }
    return sum;
}
void insert(int x){
	struct node* newnode=(struct node*)malloc(sizeof(struct node));
	if(head==NULL){
		newnode->val=x;
		newnode->next=NULL;
		head=newnode;
	}
	else{
		
		newnode->val=x;
		newnode->next=NULL;
		struct node *temp;
		temp=head;
		while(temp->next != NULL){
			temp=temp->next;
		}
		temp->next=newnode;
	}
}


struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    int sum1 = 0, sum2 = 0; 
    int n1 = 1 , n2 = 1;
    
    struct ListNode* head = NULL;
    int summation = add(list1,sum1,n1) + add(l2,sum2,n2);
    while(sum != 0){
        instert(summation%10);
        summation = summation / 10;
    }
    return head;
    
}
*/

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *l = new ListNode(0);
        ListNode *ans = l;
        int carry=0;
        while(l1 && l2)
        {
            int sum = l1->val+l2->val+carry;
            carry = (sum>9)?1:0;
            l->next = new ListNode(sum%10);
            l = l->next;
            l1 = l1->next;
            l2 = l2->next;
        }
        while(l1)
        {
            int sum = l1->val+carry;
            carry = (sum>9)?1:0;
            l->next = new ListNode(sum%10);
            l = l->next;
            l1 = l1->next;
        }
        while(l2)
        {
            int sum = l2->val+carry;
            carry = (sum>9)?1:0;
            l->next = new ListNode(sum%10);
            l = l->next;
            l2 = l2->next;
        }
        if(carry)    l->next = new ListNode(1);
        return ans->next;
    }
};
