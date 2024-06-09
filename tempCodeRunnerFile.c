int find_occurences(int myarray[], int length) {
        
    int count = 0;
    int to_find =5;
    for (int i=0; i<length; i++) {
        if (myarray[i]==to_find) {
            count++;
        }
    }
    return count;
}