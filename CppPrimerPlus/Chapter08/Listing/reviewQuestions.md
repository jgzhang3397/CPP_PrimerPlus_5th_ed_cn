# Review Questions
1. What kinds of functions are good candidates for inline status?  

    *solution: short, nonrecursive functions that can fit in one line of code are good candidates for inline status.*

2. Suppose the song() function has this prototype:
    void song(char * name, int times);

    - How would you modify the prototype so that the default value for times is 1?
        ```cpp
         void song(char * name, int times = 1); 
        ```
    - What changes would you make in the function definition?   

        *solution: None, only prototypes contain the default value infomation*

    - Can you provide a default value of “O, My Papa” for name? 

        ```cpp
        void song(char * name = "O, my papa", int times = 1);
        ```

3. Write overloaded versions of iquote(),a function that displays its argumenten closed in double quotation marks. Write three versions: one for an int argument, one for a double argument, and one for a string argument.  

    *solution: You can use either the string“ \” ”or the character‘ “ ‘ to print a quotation mark. The following functions show both methods:*
    ```cpp
    #include <iostream>
    // for an int argument
    void iquote(int n)
    {
        cout << "\"" << n << "\"";
    }

    // for an double argument
    void iquote(double x)
    {
        cout << ' " ' << x << ' " ';
    }

    // for a string argument
    void iquote(const char * str)
    {
        cout << "\"" << n << "\"";
    }
    ```

4. The following is a structure template:
    ```cpp
    struct box {
        char maker[40]; 
        float height; 
        float width; 
        float length; 
        float volume;
    };
    ```
    - Write a function that has a reference to a box structure as its formal argument and displays the value of each member.
        ```cpp
        void show_box(const box & container) 
        {
            cout << "Made by " << container. maker << endl; 
            cout << "Height = " << container.height << endl; 
            cout << "Width = " << container.width << endl; 
            cout << "Length = " << container.length << endl; 
            cout << "Volume = " << container.volume << endl;
            }
        ```
    - Write a function that has a reference to a box structure as its formal argument and sets the volume member to the product of the other three dimensions.  
        ```cpp
        void set_volume(box & crate) 
        {
            crate.volume = crate.height * crate.width * crate.length; 
        }
        ```

5. The following are some desired effects. Indicate whether each can be accomplished with default arguments, function overloading, both, or neither. Provide appropriate prototypes. 

    *  ```mass(density, volume) ``` returns the mass of an object having a density of density and a volume of volume, whereas mass(density) returns the mass having a density of density and a volume of 1.0 cubic meters. All quantities are type double.
        - This can be done by using a default value for the second argument:  
            ```cpp
            double mass(double density, double volume = 1.0)
            ```  
        - It can also be done by using function overloading:
            ```cpp
            double mass(double d, double v); 
            double mass(double d);
            ```
        
    * ```repeat(10, “I’m OK”)``` displays the indicated string 10 times, and ```repeat(“But you’re kind of stupid”) ``` displays the indicated string 5 times.
        - You can’t use a default for the repeat value because you have to provide default values from right to left. You can use overloading:
            ```cpp
            void repeat(int times, const char * str); 
            void repeat(const char * str);
            ```

    * ```average(3,6) ``` returns the int average of two int arguments, and ```average(3.0, 6.0)``` returns the double average of two double values.
        - You can use function overloading:
            ```cpp
            int average(int a, int b);
            double average(double x, double y);
            ```

    * ``` mangle(“I’m glad to meet you”)``` returns the character I or a pointer to the string “I’m mad to gleet you”, depending on whether you assign the return value to a char variable or to a char* variable.
        + You can’t do this because both versions would have the same signature.   

6. Write a function template that returns the larger of its two arguments.
    ```cpp
    template<class T>
    T max(T t1,T t2) //orTmax(constT&t1,constT&t2) 
    {
        return t1 > t2? t1 : t2; 
    }
    ```       
7. Given the template of ReviewQuestion 6 and the box structure of ReviewQuestion 4, provide a template specialization that takes two box arguments and returns the one with the larger volume.
    ```cpp
    template<> box max(box b1, box b2) 
    {
        return b1.volume > b2.volume? b1 : b2; 
    }
    ```

