#include<stdio.h>
#include<math.h>

int finalamount, installment, loanamount;
float numyears, nummonth, roimonth, roiyear, emi;

int Sip(){
    printf("\n📊 SIP Calculator 📊\n\n");

    printf("👉 Enter monthly installment amount (Rs): ");
    scanf("%d\n", &installment);

    printf("👉 Enter annual rate of interest (%%): ");
    scanf("%f\n", &roiyear);

    roimonth = roiyear / (12 * 100);

    printf("👉 Enter number of years to invest: ");
    scanf("%f\n", &numyears);

    nummonth = 12 * numyears;

    finalamount = installment * ((pow(1 + roimonth, nummonth) - 1) / roimonth) * (1 + roimonth);

    printf("\n✅ Final amount after %.1f years: Rs %d\n", numyears, finalamount);
    printf("✅ Total invested: Rs %.2f\n\n", nummonth * installment);
    
    return 0;
}

int emicalci(){
    printf("\n💰 EMI Calculator 💰\n\n");

    printf("👉 Enter loan amount (Rs): ");
    scanf("%d", &loanamount);

    printf("👉 Enter annual interest rate (%%): ");
    scanf("%f", &roiyear);

    printf("👉 Enter loan tenure (months): ");
    scanf("%f", &nummonth);

    roimonth = roiyear / (12 * 100);

    emi = (loanamount * roimonth * (pow(1 + roimonth, nummonth))) / (pow(1 + roimonth, nummonth) - 1);

    printf("\n✅ Your EMI per month: Rs %.2f\n\n", emi);
    
    return 0;
}

int main(){
    int choice;

    printf("\n🎯 Financial Calculator 🎯\n");
    printf("1️⃣ SIP Calculator\n");
    printf("2️⃣ EMI Calculator\n\n");
    printf("👉 Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    switch(choice){
        case 1:
            Sip();
            break;

        case 2:
            emicalci();
            break;

        default:
            printf("\n❌ Invalid choice! Please enter 1 or 2.\n\n");
            break;
    }

    printf("🙏 Thank you for using the calculator!\n\n");
    return 0;
}
