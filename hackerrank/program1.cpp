#include  < iostream>
 #include<tgmath.h> using namespace std;
class Node 
{
public:
        Node *next;
        int data;
};
Node * insertIntoList(Node *cur, int data) 
{
        if (cur == nullptr) 
    {
                cur = new Node();
                cur->data = data;
                cur->next = nullptr;
            
    }
        else  
    {
                cur->next = insertIntoList(cur->next, data);
            
    }
        return cur;
}
long long getNumber(Node *head) 
{
        
    if (head == nullptr)
    
    {
                return 0;
            
    }
        
    else     
    {
                Node *temp = head;
                int count = -1;
                long long retVal = 0;
                
        while (temp != nullptr)
        
        {
                        ++count;
                        temp = temp->next;
                    
        }
                
        
        while (head != nullptr)
        
        {
                        if (head->data == 1)
            
            {
                                retVal = retVal + pow(2, count--);
                  
            
            }
                        else             
            {
                                --count;
                            
            }
                        head = head->next;
                    
        }
                return retVal;
                
    
    }
}
int main()
{
        int N;
        cin >> N;
        Node *head = nullptr;
        for (int i = 0; i < (int)N; ++i) 
    {
                int curData;
                cin >> curData;
                head = insertIntoList(head, curData);
            
    }
        cout << getNumber(head) << endl;
        return 0;
}