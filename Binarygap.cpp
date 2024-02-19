int solution(int N) {
    //Implement your solution here
    int number = N; //not needed but fuck it.
    int currentStreak = 0;
    int longestStreak = 0;
    //Array with int 
    std::vector<int> Binary;

    //N%2 until it isn't 0
    while (number != 0){
        Binary.insert(Binary.begin(), number % 2); 
        number /= 2;
    }

    for (int binaryNumber : Binary){
        // std::cout << binaryNumber;
        if (binaryNumber == 0){
            currentStreak++;
        }
        if (binaryNumber == 1){
            if (currentStreak > longestStreak){
            longestStreak = currentStreak;
            }
            currentStreak = 0;
        }
    }

    return longestStreak;
}