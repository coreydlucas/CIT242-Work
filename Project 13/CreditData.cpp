class CreditData
{
  private:
	double currentBalance;
	double maxBalance;
  public:
    CreditData(double, double = 0);
	void displayCreditData();
};
CreditData::CreditData(double currBal, double maxBal)
{
	currentBalance = currBal;
	if(maxBal < currBal)
		maxBalance = currBal;
	else
		maxBalance = maxBal;
}
void CreditData::displayCreditData()
{
	double creditLeft = maxBalance - currentBalance;
	cout<<"Current balance: $"<<currentBalance<<
	  "\nMaximum balance $"<<maxBalance<<"\nCredit left: $"<<
	  creditLeft<<endl;
}