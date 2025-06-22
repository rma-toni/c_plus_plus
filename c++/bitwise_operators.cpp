int main(){
//----------AND(&)----------
    int result = 5 & 3; // result will be 1 (0000 0101 & 0000 0011 = 0000 0001)
//----------OR(|)----------
    int result = 5 | 3; // result will be 7 (0000 0101 | 0000 0011 = 0000 0111)
//----------XOR(^)----------
    int result = 5 ^ 3; // result will be 6 (0000 0101 ^ 0000 0011 = 0000 0110)
//----------NOT(~)----------
    int result = ~5; // result will be -6 (1111 1010)
//----------LEFT-SHIFT(<<)---------- 
    int result = 5 << 1; // result will be 10 (0000 0101 << 1 = 0000 1010)
//----------RIGHT-SHIFT(>>)---------- 
    int result = 5 >> 1; // result will be 2 (0000 0101 >> 1 = 0000 0010)
    return 0;
}