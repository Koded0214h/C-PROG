def three_sum(arr, n):
    max = arr[0]

    for i in arr:
        if i > max:
            max = i;
    print("Maximum Value in Array: ", max)
    
my_array = [1, 2, 3, 4, 10, 6]


three_sum(my_array, len(my_array))
    