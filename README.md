Conversion Logic Implementation : 

I was responsible for implementing the core functionality of the program, which is the logic for converting currency values based on the user’s selected option. Their work involved designing a switch statement to handle multiple cases, each corresponding to a specific currency conversion. Below is a detailed breakdown of my contribution:


Code and Structure Explanation 

1. Conversion Logic Using switch 

The switch statement is used to execute the appropriate conversion formula based on the user's choice: 

switch (option) {
    case 1: result = value * 82.5; break;
    case 2: result = value / 82.5; break;
    case 3: result = value * 89.7; break;
    case 4: result = value / 89.7; break;
    case 5: result = value * 101.3; break;
    case 6: result = value / 101.3; break;
    case 7: result = value * 53.2; break;
    case 8: result = value / 53.2; break;
    case 9: result = value * 60.5; break;
    case 10: result = value / 60.5; break;
    default:
        printf("Invalid selection. Try again.\n");
        return 0;
}



2. Handling Each Currency Pair 

Each case in the switch corresponds to a specific currency pair: 

Case 1: Converts USD to INR by multiplying the value by 82.5 (exchange rate). 

Example: If the user enters 10 USD, the result will be 10 * 82.5 = 825 INR.


Case 2: Converts INR to USD by dividing the value by 82.5. 

Example: If the user enters 825 INR, the result will be 825 / 82.5 = 10 USD.


Similar logic is applied for other currency pairs using their respective exchange rates: 

EUR to INR (89.7), INR to EUR (1/89.7) 

GBP to INR (101.3), INR to GBP (1/101.3) 

AUD to INR (53.2), INR to AUD (1/53.2) 

CAD to INR (60.5), INR to CAD (1/60.5)


3. Default Case for Error Handling 

If the user enters an invalid option, the default case is triggered: 

default:
    printf("Invalid selection. Try again.\n");
    return 0; 

This ensures the program terminates gracefully when an invalid menu option is selected. 

Provides feedback to the user, prompting them to re-run the program with a valid input.


Structure of Conversion Logic: 

1. Separation of Cases: 

Each conversion formula is isolated in its own case, making the logic modular and easy to understand.



2. Accurate Calculations: 

The exchange rates are carefully applied using multiplication for direct conversions and division for reverse conversions.



3. Error Control: 

The default case ensures that invalid options are handled without crashing the program.


Technical Challenges Addressed : 

Efficiency: Used a switch statement for quick branching, which is more efficient than multiple if-else conditions. 

Scalability: The modular design allows for new currency pairs to be added easily by introducing new case blocks. 

Accuracy: Ensured precise conversion rates by using floating-point arithmetic, enabling handling of decimal values in currency calculations. 

Example Execution Scenarios 

1. Input: 

Option: 1 (USD to INR) 

Value: 10 

Output: Converted amount: 825.00



2. Input: 

Option: 5 (GBP to INR) 

Value: 50 

Output: Converted amount: 5065.00
