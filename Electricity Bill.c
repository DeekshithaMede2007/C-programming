#include <stdio.h> 
int main()  
{ 
    int customerID; 
    char customerName[50]; 
    float units, billAmount; 
 
    // Input customer details 
    printf("Enter Customer ID: "); 
    scanf("%d", &customerID); 
    printf("Enter Customer Name: "); 
    scanf("%s", customerName); 
    printf("Enter number of units consumed: "); 
    scanf("%f", &units); 
 
    // Calculate bill amount based on slab rates 
    if (units <= 100)  
 { 
          billAmount = units * 1.50; 
     }  
 else if (units <= 300)  
 { 
          billAmount = 100 * 1.50 + (units - 100) * 2.00; 
     }  
 else  
 { 
                                    

          
          billAmount = 100 * 1.50 + 200 * 2.00 + (units - 300) * 3.00; 
     } 
 
    // Add a minimum bill amount check 
     if (billAmount < 50)  
 { 
          billAmount = 50;  // Minimum charge 
     } 
 
    // Add a surcharge if bill amount exceeds 500 
     if (billAmount > 500)  
 { 
          billAmount += billAmount * 0.20;  // 20% surcharge 
     } 
 
    // Display the bill 
    printf("\nElectricity Bill\n"); 
    printf("---------------------------\n"); 
    printf("Customer ID      : %d\n", customerID); 
    printf("Customer Name    : %s\n", customerName); 
    printf("Units Consumed   : %.2f\n", units); 
    printf("Total Bill Amount: Rs. %.2f\n", billAmount); 
 
    return 0; 
}
