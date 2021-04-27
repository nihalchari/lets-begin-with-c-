long long getNumber(Node *head)
{
    // Complete this function

    if (head == nullptr)
    {
        return 0;
    }
    else
    {
        Node *temp = head;
        int count = -1;
        long long retVal = 0;

        while (temp != nullptr)
        {
            ++count;
            temp = temp->next;
        }

        while (head != nullptr)
        {
            if (head->data == 1)
            {
                retVal = retVal + pow(2, count--);
            }
            else
            {
                --count;
            }
            head = head->next;
        }
        return retVal;
    }
}