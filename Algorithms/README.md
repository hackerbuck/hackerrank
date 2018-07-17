## Note

* Sometimes even counter needs to be `long long int` , so pls check the constraint very important

* Try to take a small test case and gereralize a formula/small algo before implementing 

* As i am going to be ~~full C~~ (nope back to python :P) , pls while returning array and etc ... use `calloc (size, type_size)`

* Use qsort (arr, arr_size, sizeof (type), compare_function) (int (const void *, const void *))

### Python 

* Use `sys.stdin.readline()` for faster io (but be caredull it sometimes strips '\n' from last input)

* For sorting use `arr.sort()` for in-place sorting and `arr.sorted()` list of sorted array

> **NOTE** Sometimes long integer to str coversion is too slow , so use `arr.sort(key=int)` on interger string and magic u get sorted integer strings .

* `arr.index(ele)` returns index where element is found.
