/*This is a case based program of queue operation.So choose your code num in a sequence of queue opearation in run time to understand it better as [enqueue - display -dequeue - exit]
1.dequeue opertion will always show underflow without  adding element using enqueue
2. display function will show nothing without enqueue oparation
*/

#include <iostream>
#include <cstdlib>
using namespace std;
int arr[3];
int size = sizeof(arr) / sizeof(arr[0]);
int rear = -1;
int front = -1;

// enqueue function to add new element
void enqueue()
{
    if (rear == size - 1)
    {
        cout << "Overflow !";
    }
    else
    {
        if (front == -1)
        {
            front = 0;
        }
        int x;
        cout << "Enter the new element to add : ";
        cin >> x;
        rear++;
        arr[rear] = x;
    }
}

// display function to show added elements
void display()
{
    cout << "ELEMENTS IN THE QUEUE : " << endl;
    for (int i = 0; i <= rear; i++)
    {
        cout << arr[i] << " "<< "[ rear = " << i << ", front = " << front << endl;
    }
}

// dequeue function to show removed element
void dequeue()
{
    if (front == -1 || front > rear)
    {
        cout << "Underflow !";
    }
    else
    {
        cout << arr[front] << " "<< "[ rear = " << rear << " "<< "front = " << front << endl;
        front++;
    }
}

//this function shows the left element after the dequeue opareation
void left_elements()
{
    cout << "\nElements left in the queue :" << endl;
    for (int i = front; i < size; i++)
    {
        cout << arr[i] << " "<< "[ rear= = " << i << " "<< "front = " << front << endl;
    }
}

int main()
{

    int n;
    cout << "\t\t\t\t\tMENU OF THE TASK " << endl;
    cout << "\t\t\t\t 1.Enqueue" << endl;
    cout << "\t\t\t\t 2.Display(added elem)" << endl;
    cout << "\t\t\t\t 3.dequeue" << endl;
    cout << "\t\t\t\t 4.Exit" << endl;

    for (int i = 0; i < 4; i++)
    {
        cout << "Enter the code 1 , 2 ,3 or 4 to perform the task :";
        cin >> n;
        switch (n)
        {
        case 1:
            for (int i = 0; i < size; i++)
            {
                enqueue();
            }
            // display();
            break;

        case 3:
            cout << "\nEnter the number of elements u want to remove : ";
            cin >> n;
            cout << "DELETED ELEMENTS : " << endl;
            for (int i = 0; i < n; i++)
            {
                dequeue();
            }
            left_elements();
            break;

        case 2:
            display();
            break;

        case 4:
            system("cls");
            cout << "\t\t\t\t\t THANKS FOR VISITING !" << endl;
            break;

        default:
            cout << "No Such Code Number Exist" << endl;
        }
    }
}