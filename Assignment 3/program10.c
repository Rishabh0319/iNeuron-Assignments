

/* ******** 10. Write a program which takes the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage. ******** */


// Formula  

//   profit = selling_price - cost_price
//   loss = cost_price - selling_price

#include<stdio.h>
void main()
{ 
    int selling_price, cost_price;
    printf("Enter cost price: ");
    scanf("%d",&cost_price);

    printf("Enter selling price: ");
    scanf("%d",&selling_price);

    if(selling_price - cost_price > 0)
    {
        // profit % = profit/Cost Price x 100
        float profit = selling_price - cost_price;
        profit = (profit/cost_price)*100;
        printf("%3.2f %% Profit",profit);
    }
    else
    {
        //Loss % = Loss/Cost Price × 100.
        float loss = selling_price - cost_price;
        loss = (loss/cost_price)*100;
        printf("%3.2f %% Loss",loss);
    }
    
}


