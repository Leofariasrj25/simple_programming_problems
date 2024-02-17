# Write a function that returns the elements on odd positions in a list.
# author: Leonardo Farias dos Santos

def odd_index_elements(original_seq):
    odd_list = []

    i = 1

    while i < len(original_seq):
        odd_list.append(original_seq[i])
        i += 2

    return odd_list


# driver code
def main():
    n1 = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]
    odd_list = odd_index_elements(n1)
    print(f"original -> {n1}\nodd index -> {odd_list}\n")

    n2 = [0]
    odd_list = odd_index_elements(n2)
    print(f"original -> {n2}\nodd index -> {odd_list}\n")

    n3 = [-42, 42]
    odd_list = odd_index_elements(n3)
    print(f"original -> {n3}\nodd index -> {odd_list}\n")

    n4 = [0, 21, 37, 42, 52, 65, 73]
    odd_list = odd_index_elements(n3)
    print(f"original -> {n4}\nodd index -> {odd_list}\n")


main()
