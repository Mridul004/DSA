    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*,vector<ListNode*>,Compare> pq;
        for(auto i:lists){
};
            if(i) pq.push(i);
        }
        ListNode* head=new ListNode();
        while(!pq.empty()){
            ListNode* nn=pq.top();
            pq.pop();
            curr->next=nn;
        ListNode* curr=head;
            curr=curr->next;
            if(nn->next) pq.push(nn->next);
        }
    }
        return head->next;
};