/**
  9/17/2022
  
  Notes:
    - I'm annoyed that C doesn't give enough warnings
    - The solution I saw online for number 6 is one digit off from mine, hoping it's a typo
**/
int problem1(){
    int sum = 0;
    int i;
    for (i = 0; i < 1000; i++)
    {
        if (i % 3 == 0){
            sum += i;
        } else if (i % 5 == 0)
        {
            sum += i;
        }      
    }  
    //printf("Here is the sum of all multiples of 3 and 5 below 1000 %d \n", sum);
    return sum;
}

int problem6(){
    int sqsum, sq = 0;
    int i;
    for (i = 0; i < 100; i++)
    {
        sqsum += i * i;
        sq += i;
    }
    sq *= sq;
    return (sq - sqsum);
}

int main(){
    printf("Problem 1 \n \tHere is the sum of all" 
            " multiples of 3 and 5 under 100: %d \n", problem1());
    printf("Problem 6 \n \tHere is the difference between"
            " the sum of all squares and the square of all sums"
            " below 100: %d \n", problem6());
    printf("done.");
}