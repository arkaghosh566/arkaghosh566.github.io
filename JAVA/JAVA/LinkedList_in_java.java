public class LinkedList 
{
    Node head;
    static class Node 
    {
        int data;
        Node next;
        Node(int d)
        {
            data=d;
            next=null;
        }
    }
    public static LinkedList insert(LinkedList list,int data) 
    {
        Node nn = new Node(data);
        if (list.head == null)
            list.head=nn;
        else
        {
            Node last = list.head;
            while(last.next !=null)
                last=last.next;
            last.next=nn;
        }
        return list;
    }   
    public static LinkedList remove(LinkedList list,int data) 
    {
        Node temp=list.head ,prev=null;
        if(temp != null && temp.data ==data)
        {
            System.out.println("\n"+data+" found and deleted");
            list.head=temp.next;
            return list; 
        }
        while(temp != null && temp.data !=data)
        {
            prev = temp;
            temp=temp.next;
        }
        if(temp!=null)
        {
            System.out.println("\n"+data+" found and deleted");
            prev.next=temp.next;
        }
        if (temp==null)
            System.out.println("\n"+"Data not found");
        return list;
    }
    public static void printList(LinkedList list)
    {
        Node pr = list.head;
        System.out.println("Linked LIst : -\n");
        while(pr!=null)
        {
            System.out.print(pr.data + " ");
            pr=pr.next;
        }
    }
    public static void main(String args[])
    {
        LinkedList list = new LinkedList();
        list = insert(list,1);
        list = insert(list,2);
        list = insert(list,3);
        list = insert(list,4);
        list = insert(list,5);
        list = insert(list,6);

        printList(list);
        remove(list,3);
        printList(list);
    }
}
