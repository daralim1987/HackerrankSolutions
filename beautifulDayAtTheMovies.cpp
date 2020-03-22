//Function to reverse the number
int reversDigits(int num)
{
    int rev_num = 0;
    while(num > 0){
        rev_num = rev_num*10 + num%10;
        num = num / 10;
    }
    return rev_num;
}

// Complete the beautifulDays function below.
int beautifulDays(int i, int j, int k) {
    int count = 0;
    for(int n = i; n <= j; n++){
        if(abs(n - reversDigits(n)) % k == 0){
            count++;
        }
    }
    return count;
}
