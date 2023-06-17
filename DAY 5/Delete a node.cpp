class Solution {
public:
    void deleteNode(ListNode* node) {
        
        ListNode *nextNode = node->next;
        
        node->val = nextNode->val;
        node->next = nextNode->next;
        nextNode->next = nullptr;
        delete(nextNode);
    }
};
