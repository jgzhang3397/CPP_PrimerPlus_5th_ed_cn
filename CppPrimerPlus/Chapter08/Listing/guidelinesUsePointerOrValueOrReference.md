# When to Use Reference Arguments
## A function uses passed data without modifying it:
* If the data object is small,such as a built-in data type or a small structure, pass it by value.
* If the data object is an array,use a pointer because that’s your only choice. Make the pointer a pointer to const.
* If the data object is a good-sized structure,use a const pointer or a const reference to increase program efficiency. You save the time and space needed to copy a structure or a class design. Make the pointer or reference const.
* If the data object is a class object,use a const reference.The semantics of class design often require using a reference, which is the main reason C++ added this feature. Thus, the standard way to pass class object arguments is by reference.

## A function modifies data in the calling function:
* If the data object is a built-in data type,use a pointer. If you spot code like fixit(&x),
where x is an int, it’s pretty clear that this function intends to modify x.
* If the data object is an array, use your only choice: a pointer.
* If the data object is a structure,use a reference or a pointer.
* If the data object is a class object,use a reference.