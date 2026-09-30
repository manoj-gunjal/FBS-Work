class BankAccount {
    int accountNumber;
    String holderName;
    Float currentBalance;
    Float interestRate;
}
class TestBankAccount {
    public static void main(String[] args) {
        BankAccount ba1;
        ba1=new BankAccount();
        System.out.println(ba1);
    }
}
