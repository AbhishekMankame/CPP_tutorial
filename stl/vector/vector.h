// By using templates, we can create a generic vector class that can store any data type. This allows us to create vectors of different types without having to write separate classes for each type. 
template<typename T>

class Vector{
    // Data Members
    T *arr;
    int cs;
    int ms;

public:
    Vector(int max_size=1){
        cs=0;
        ms=max_size;
        arr = new T[ms];
    }

    void push_back (const int d){
        // Two cases
        if(cs==ms){
            // Create a mew array and delete the old one, double the capacity of the new array
            T *oldArray = arr;
            ms=2*ms;
            arr = new T[ms];
            for(int i=0;i<cs;i++){
                arr[i] = oldArray[i];
            }
            // deleting the old array
            delete[] oldArray; // This is important to avoid memory leak
            // Here delete[] oldArray is used to delete the old array and free up the memory allocated to it.
            // If we don't do this, we will have a memory leak as the old array will still be occupying memory even though we are not using it anymore. 
            // delete[] is inbuilt in C++ and is used to deallocate memory that was previously allocated using new.
    }
    arr[cs]=d;
    cs++;
}

    void pop_back(){
        if(cs>=0){ // Here cs>=0 is used to check if the vector is not empty before popping an element.
            // If cs is 0, it means the vector is empty and there is no element to pop. 
            cs--;
        }
    }

    bool isEmpty() const{
        return cs==0;
    }

    // Front, Back, At(i), [] --> This is operator overloading
    T front() const{
        return arr[0];
    }

    T back() const{
        return arr[cs-1];
    }

    T at(int i) const{
        return arr[i];
    }

    int size() const{
        return cs;
    }

    int capacity(){
        return ms;   // Max size is the capacity of the vector
    }

    /*Some good practices that we need to follow
    --> The arguement in the operator overloading should be constant
    --> Here we can make some functions as constant which doesnot modify any of the attributes of the class. 
    --> Note: Here we cannot make push_back constant, as this will be modifying the array/vector
    */

    T operator[](const int i){ // Here i will not be changing
        return arr[i];
    }
    
};
