///// i did it my self......................................
# include<iostream>

using namespace std;
void AverageOfPrimeNum(){
  int n;    int sumOfPrimeNumbers;   float TotalNumberOfPrimeNumbers;   float averageOfPrimeNumbers;
  sumOfPrimeNumbers = 0;      TotalNumberOfPrimeNumbers = 0;
  cout<<"Enter positive integer: ";
  cin>>n;
  cout<<"----------------------------------------------------------------------------------"<<endl;
  cout<<"Prime numbers below "<<n<<" are"<<endl;
  cout<<"----------------------------------------------------------------------------------"<<endl;
  //This stage is the looping stage
    for(int x=2;x<n;x++){
      int flag=0;
      for(int i=2;i<=x/2;i++){
        if(x%i==0){
          flag=1; break;
        }
    }
    if (flag==0){
    cout<<x<<endl;
    sumOfPrimeNumbers+=x;
    TotalNumberOfPrimeNumbers+=1;
      }
  }
  averageOfPrimeNumbers = sumOfPrimeNumbers/TotalNumberOfPrimeNumbers;
  cout<<"The sum of the the  prime numbers above is "<<sumOfPrimeNumbers<<endl;
  cout<<"The  total number of the prime numbers is "<<TotalNumberOfPrimeNumbers<<endl;
  cout<<"The average  of the sum of the prime numbers above is "<<averageOfPrimeNumbers<<endl;
}
int main(){
  AverageOfPrimeNum();
  return 0;
}