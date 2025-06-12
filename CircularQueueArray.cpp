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
};