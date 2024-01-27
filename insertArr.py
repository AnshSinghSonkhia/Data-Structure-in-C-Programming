def insert_in_array(arr, x, pos):
    if pos < 0 or pos > len(arr):
        return "Invalid index"

    arr.insert(pos, x)  # Insert at the specified position using the insert method
    return arr

# Initial array with given elements
arr = [10, 20, 30, 40, 5, 60, 7]

x = int(input("Enter the element to insert: "))
pos = int(input("Enter the position to insert: "))

arr = insert_in_array(arr, x, pos)

if arr == "Invalid index":
    print("Invalid index")
else:
    print("Array after insertion:", arr)
