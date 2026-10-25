#include <stdio.h>
int main(){

    int meal, member;

    int breakfast = 200;
    int lunch = 250;
    int dinner = 300;

    float student_dis_bf = 0.25;
    float student_dis_lnch = 0.2;
    float student_dis_dnnr = 0.15;

    float staff_dis_bf = 0.45;
    float staff_dis_lnch = 0.4;
    float staff_dis_dnnr  = 0.35;

    float deposit = 0;
    float balance;

    printf("Add Deposit: \n");
    scanf("%f", &deposit);
    
    printf("ENTER MEMBER TYPE\n");
    printf("1.Student\n");
    printf("2.Stuff\n");
    printf("3.Guest\n");
    printf("4.Exit\n");

    scanf("%d", &member);

    switch (member) {
        case 1:
        printf("You are a Student\n");
        printf("ENTER MEAL TYPE\n");
        printf("1.Breakfast\n");
        printf("2.Lunch\n");
        printf("3.Dinner\n");
        printf("4.Exit\n");

    scanf("%d", &meal);

    switch (meal) {
        case 1:
        printf("Student Breakfast\n");

        balance = deposit - (breakfast * student_dis_bf);

        if (balance >= 0 ) {

        printf("It will cost: %.2f \n", breakfast * student_dis_bf);

        printf("Your Remaining balance:%.2f", balance);
        
        break;

}       else { 
        printf("INSUFFICIENT BALANCE");

        break;
}

}
    switch (meal) {
        case 2:
        printf("Student Lunch\n");

        balance = deposit - (lunch * student_dis_lnch);

        if (balance >= 0 ) {

        printf("It will cost: %.2f \n", lunch * student_dis_lnch);

        printf("Your Remaining balance:%.2f", balance);
        
        break;

}       else { 
        printf("INSUFFICIENT BALANCE");

        break;
}
        
        break;
}

    switch (meal) {
        case 3:
        printf("Student Dinner\n");

        balance = deposit - (dinner * student_dis_dnnr);

        if (balance >= 0 ) {

        printf("It will cost: %.2f \n", dinner * student_dis_dnnr);

        printf("Your Remaining balance:%.2f", balance);
        
        break;

}       else { 
        printf("INSUFFICIENT BALANCE");

        break;
}

}
    switch (meal) {
        case 4:
        printf("Exit");
        break;
    }

        break;
    }
    switch (member) {
        case 2:
        printf("You are a Stuff\n");
        printf("ENTER MEAL TYPE\n");
        printf("1.Breakfast\n");
        printf("2.Lunch\n");
        printf("3.Dinner\n");
        printf("4.Exit\n");

    scanf("%d", &meal);

    switch (meal) {
        case 1:
        printf("Staff Breakfast\n");

        balance = deposit - (breakfast * staff_dis_bf);

        if (balance >= 0 ) {

        printf("It will cost: %.2f \n", breakfast * staff_dis_bf);

        printf("Your Remaining balance:%.2f", balance);
        
        break;

}       else { 
        printf("INSUFFICIENT BALANCE");

        break;
}
        break;
    }
    switch (meal) {
        case 2:
        printf("Staff Lunch\n");

        balance = deposit - (lunch * staff_dis_lnch);

        if (balance >= 0 ) {

        printf("It will cost: %.2f \n", lunch * staff_dis_lnch);

        printf("Your Remaining balance:%.2f", balance);
        
        break;

}       else { 
        printf("INSUFFICIENT BALANCE");

        break;
}
        break;
    }
    switch (meal) {
        case 3:
        printf("Staff Dinner\n");

        balance = deposit - (dinner * staff_dis_dnnr);

        if (balance >= 0 ) {

        printf("It will cost: %.2f \n", dinner * staff_dis_dnnr);

        printf("Your Remaining balance:%.2f", balance);
        
        break;

}       else { 
        printf("INSUFFICIENT BALANCE");

        break;
}
        break;
    }
    switch (meal) {
        case 4:
        printf("Exit");
        break;
    }

        break;
    }
    switch (member) {
        case 3:
        printf("You are a Guest\n");
        printf("ENTER MEAL TYPE\n");
        printf("1.Breakfast\n");
        printf("2.Lunch\n");
        printf("3.Dinner\n");
        printf("4.Exit\n");

    scanf("%d", &meal);

    switch (meal) {
        case 1:
        printf("Guest Breakfast\n");

        balance = deposit - breakfast;

        if (balance >= 0 ) {

        printf("It will cost: %d \n", breakfast);

        printf("Your Remaining balance:%.2f", balance);
        
        break;

}       else { 
        printf("INSUFFICIENT BALANCE");

        break;
}
        break;
}
    switch (meal) {
        case 2:
        printf("Guest Lunch\n");

        balance = deposit - lunch;

        if (balance >= 0 ) {

        printf("It will cost: %d \n", lunch);

        printf("Your Remaining balance:%.2f", balance);
        
        break;

}       else { 
        printf("INSUFFICIENT BALANCE");

        break;
}
        break;
}
    switch (meal) {
        case 3:
        printf("Guest Dinner\n");

        balance = deposit - dinner;

        if (balance >= 0 ) {

        printf("It will cost: %d \n", dinner);

        printf("Your Remaining balance:%.2f", balance);
        
        break;

}       else { 
        printf("INSUFFICIENT BALANCE");

        break;
}
        break;
    }
    switch (meal) {
        case 4:
        printf("Exit");
        break;
    }

        break;
    }
    switch (member) {
        case 4:
        printf("Exit");
        break;
    }

}