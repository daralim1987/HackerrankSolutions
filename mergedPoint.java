static int findMergeNode(SinglyLinkedListNode head1, SinglyLinkedListNode head2){
    SinglyLinkedListNode curA = head1;
    SinglyLinkedListNode curB = head2;

    while(curA != curB){
        if(curA.next == null){
            curA = head2;
        }
        else{
            curA = curA.next;
        }
        if(curB.next == null){
            curB = head1;
        }
        else{
            curB = curB.next;
        }
    }
    return curA.data;
}
