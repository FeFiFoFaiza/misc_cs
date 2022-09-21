
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

