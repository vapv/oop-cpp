//
// Created by Василенко Павел on 07.10.2023.
//

#ifndef GOOGLE_TESTS_BITARRAY_H
#define GOOGLE_TESTS_BITARRAY_H

/**
 * BitArray ba;
 * ba[0] = true;
 * cout << ba[0] ; // true
 * bool r = false == ba[0];
 *
 */

class BitArray {
private:
    //  data - 32 бита
    int data;

    // логика присвоения value в индеx index
    void setValue(int index, bool value);
public:
    class Wrapper {
    private:
        BitArray bitArray;
        int index;
    public:
        Wrapper & operator=(bool e)  {
            // модификация bitArray
            return *this;
        }

        void constF() const {
            
        }


    };


    Wrapper& operator[] (int index) {
        // битовая логика
        bool a = data >> index;
        return a;
    }



};


#endif //GOOGLE_TESTS_BITARRAY_H
