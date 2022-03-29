struct numbers{
  float a;
  float b;
};

program CALC_PROG{
  version CALC_VERS{
    float add(numbers)=1;
    float sub(numbers)=2;
    float mul(numbers)=3;
    float div(numbers)=4;
  }=1;
}= 0x123456;
