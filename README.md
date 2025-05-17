# elon_sort
elon_sort implementation in c++

# how does it work under the hood?
elon_sort stems from this meme: https://programmerhumor.io/algorithm-memes/elon-sort-6vad 
\n 
this basically means:
1. take half of the elements in the data array and put them in a different array
2. move all elements from the second array back to the first array via a random index
3. repeat steps 1 and 2 a random number of times 
4. declare array as sorted
