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

            //2. Cek apakah antrian kosong
            if (FRONT == -1){
                FRONT = 0; // 2.a
                REAR = 0; // 2.b
            }
            else{
                //Jika REAR berada di posisi terakhir array, kembali ke awal array
                if(REAR == max -1) 
                REAR = 0;
                else 
                REAR ++;
            }
            queue_array[REAR] = num; //3. Menambahkan elemen ke antrian
        }

        void remove(){
            // Cek Apakah antiran kosong
            if (FRONT == -1){
                cout << "Queue Underflow\n";
                return;
            }
            cout << "\nThe element deleted from the queue is: " << queue_array[FRONT] << "\n";
        }
};