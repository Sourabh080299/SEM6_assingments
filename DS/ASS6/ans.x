struct input {
    int size;
    char str[50];
};

struct number {
    int a;
    int b;
};

struct num_arr {
    int size;
    int arr[50];
};

struct stat{
    int maximum;
    int minimum;
    double avg;
};

struct two_str{
    struct input s1;
    struct input s2;
};

program SOL_PROG{
    version SOL_VERS{
      int polindrome(input)=1;
      int check_leap_year(int)=2;
      int gcd(number)=3;
      double sqr_root(int)=4;
      number swap(number)=5;
      stat getstat(num_arr)=6;
      int comp_str(two_str)=7;
      int chk_substr(two_str)=8;
      input concate(two_str)=9;
      num_arr reverse(num_arr)=10;
    }=1;
}= 0x123456;