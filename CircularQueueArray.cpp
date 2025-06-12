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

            // Cek jika antrian hanya memiliki satu elemen
            if (FRONT == REAR){
                FRONT = -1;
                REAR = -1;
            }
            else {
                // Jika elemen yang dihapus berada di posisi terakhir array, kembali ke awal array
                if (FRONT == max - 1)
                FRONT = 0;
                else
                FRONT++;
            }
        }

        void display(){
            int FRONT_position = FRONT ;
            int REAR_position = REAR;

            // Cek apakah antrian kosong
            if (FRONT == -1){
                cout << "Queue is empty\n";
                return;
            }

            cout << "\nElements in the queue are... \n";

            // Jika FRONT_position <= REAR_Position, Iterasi dari FRONT hingga REAR
            if (FRONT_position <= REAR_position){
                while (FRONT_position <= REAR_position){
                    cout << queue_array[FRONT_position] << "  ";
                    FRONT_position++;
                }
                cout << endl;
            }
            else {
                // Jika FRONT_position > REAR_position, Iterasi dari FRONT hingga akhir array
                while (FRONT_position <= max -1){
                    cout << queue_array[FRONT_position] << "  ";
                    FRONT_position++;
                }

                FRONT_position = 0; // Kembali ke awal array

                // Iterasi dari awal array hingga REAR
                while (FRONT_position <= REAR_position){
                    cout << queue_array[FRONT_position] << "  ";
                    FRONT_position++;
                }
                cout << endl;
            }
        }
};