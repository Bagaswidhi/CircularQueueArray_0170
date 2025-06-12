#include <iostream>
using namespace std;

class Queues{
    private: 
        static const int max = 5;
        int queue_array[max];
        int FRONT;
        int REAR;

    public:
        Queues()
        {
            FRONT = -1;
            REAR = -1;
        }
        void insert (){
            int num;
            cout << "Enter A Number : ";
            cin >> num;
            cout << endl;

            //1. cek apakah antiran penuh
            if ((FRONT == 0 && REAR == max -1 ) || (FRONT == REAR + 1)){
                cout << "\nQueue Overflow\n"; //1.a
                return;
            } 
    }
};