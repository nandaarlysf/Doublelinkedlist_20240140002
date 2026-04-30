#include <iostream>
#include <string>
using namespace std;

class Node
{
public:
    int noMhs
    Node*next:
    Node*prev:    
};
class DoubleLinkedList
{
private:
    Node *START;
    
public:
    DoubleLinkedList()
    {
        START=NULL;
    }
    void addNode()
    {
        int nim;
        cout<<"\nEntter the roll number of the student: ";
        cint>>nim;
      //step1:ALLocate memory for new node
      Node*newNode=New Node();
      
      //step2:ASSIGN volue to the data fields
      newNode->noMhs=Nim;

       //step3:Insert at beginning if list is empty or nim is smallest
    if (START == NULL || nim <= START->noMhs)
    {   
        if (START != NULL && nim == START->noMhs)
        {
            cout << "\nDuplicate number not allowed" << endl;
            return;
        }
        //  Step 4: newNode.next = START
        newNode->next = START;

        // Step 5: START.prev = newNode (if START exists)
        if (START != NULL)
        START->prev = newNode;

        // Step 6: newNode.prev = NULL
        newNode->prev = NULL;

        // Step 7: START = newNode
        START = newNode;
        return; 
    }




// Step 4: newNode.next = START
newNode->next = START;

// Step 5: START.prev = newNode (if START exists)
if (START != NULL)
{}
START->prev = newNode;

// Step 6: newNode.prev = NULL
newNode->prev = NULL;

// Step 7: START = newNode
START = newNode;
return; 

    }    
}
