/*
#include <iostream>
#include <queue>

int main(){
    std::queue<int> fifo;

    for(int i=0; i < 50; i=i+10)
        fifo.push(i);

    while(!fifo.empty()){
        std::cout << fifo.front() << '\n';
        fifo.pop();
    }
    return 0;
}
 */

 /*
 #include <iostream>
 #include <vector>
 #include <stdexcept>

 class FIFO{
    private:
    std::vector<int> data;

    public:
    void queue(int value){
        data.push_back(value);
    }

    int dequeue(){
        if(data.empty()){
            throw std::runtime_error("FIFO empty");
        }

        int value = data.front();
        data.erase(data.begin());
        return value;
    }

    bool empty() const{
        return data.empty();
    }
 };

 int main(){
    FIFO fifo;

    for(int i = 0; i < 100; i += 10)
        fifo.queue(i);
    
    while(!fifo.empty()){
        std::cout << fifo.dequeue() << '\n';
    }

    return 0;
 }
*/

#include <iostream>
#define FIFO_SIZE 8

using namespace std;

class FIFO {
private:
    int buffer[FIFO_SIZE];
    int read_ptr;
    int write_ptr;
    int count;

public:
    FIFO() {
        read_ptr = 0;
        write_ptr = 0;
        count = 0;
    }

    bool write(int data) {
        if (count == FIFO_SIZE) {
            cout << "FIFO Full!\n";
            return false;
        }

        buffer[write_ptr] = data;
        write_ptr = (write_ptr + 1) % FIFO_SIZE;
        count++;

        return true;
    }

    bool read(int &data) {
        if (count == 0) {
            cout << "FIFO Empty!\n";
            return false;
        }

        data = buffer[read_ptr];
        read_ptr = (read_ptr + 1) % FIFO_SIZE; //neat way to wrap around
        count--;

        return true;
    }
};

int main() {
    FIFO fifo;
    int data;

    fifo.write(10);
    fifo.write(20);
    fifo.write(30);

    if (fifo.read(data))
        cout << "Read: " << data << '\n';

    if (fifo.read(data))
        cout << "Read: " << data << '\n';

    fifo.write(40);

    if (fifo.read(data))
        cout << "Read: " << data << '\n';

    if (fifo.read(data))
        cout << "Read: " << data << '\n';

    return 0;
}