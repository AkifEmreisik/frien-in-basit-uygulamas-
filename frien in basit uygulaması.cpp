#include<iostream>
using namespace std;

class Payment{
	private:
		float tutar=0;
	friend void degistir(Payment* paymentPTR){
	    paymentPTR->tutar=150 ;
	}
	public:
		void pay(){
			cout<<tutar<<":Odemeni aldık knk";

}

};



int main(){
class Payment payment;
degistir(&payment);
payment.pay();
return 0;

}
