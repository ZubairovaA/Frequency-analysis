C++
# Frequency-analysis
The pogram decrypts the text which was encrypted by the displacement of letters on the fixed number of letters in English alphabet. This encryption algorithm is also known as Caesar's code. The algorithm used in this program is my personal idea and it is different from the common used algorithms, but it is faster and easier to make changes. its' advantages include fast search in the sorted container for all the possible versions of the two most frequent repeated 3 letters English words.
The program detects the most frequent repeated 3 letters English words- "THE" and "AND". All 3 letters in these words will be at the same distance from the original text letters. The distance is the key for the decryption the rest of the text.
The program detects these two words in the encrypted text mo matter if it has spaces or no. In the first case, the program will highlight all the 3 letters words and than using a very fast method "find" in the sorted container "set" compares each of the with all the possible versions of the words "THE" and "AND". 
In the second case the program also uses the method "find" to detect all the possible versions of the words we are looking for.
The program is easily scalable, i am working on the functions of detecting the words "FOR" and the most frequent repeated 2 letters syllable and the decryption of the text without any service words at all.

