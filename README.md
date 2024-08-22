
## Aim
To understand and apply `for` loops and `while` loops in C++.

## Software Used
- VS Code

## Problem Statements

1. **Print Numbers Using a `for` Loop**
   - Write a C++ program to print numbers using a `for` loop.

2. **Print Numbers Using a `while` Loop**
   - Write a C++ program to print numbers using a `while` loop.

3. **Triangular Star Pattern**
   - Write a C++ program to generate a triangular star pattern.

4. **Square-Shaped Star Pattern**
   - Write a C++ program to create a square-shaped star pattern.

5. **Pyramid of Stars**
   - Write a C++ program to generate a pyramid of stars.

6. **Sum of Printed Numbers**
   - Write a C++ program to calculate the sum of the numbers that are printed.

7. **Floyd's Triangle**
   - Write a C++ program to create Floyd's triangle.

8. **Floyd's Triangle of Alphabets**
   - Write a C++ program to generate Floyd's triangle using alphabets.

9. **Password Validation Loop**
   - Write a C++ program to repeatedly prompt for a password until the correct one is entered.

## Theory

- **`for` Loop**: An entry-controlled loop used to execute a block of code a specific number of times based on a defined range of values.
- **`while` Loop**: A loop that executes a block of code as long as a specified condition is true. It is used when the number of iterations is not known beforehand.
- **Floyd's Triangle**: A triangular array of natural numbers used in computer science education, filled row by row with consecutive numbers starting from 1 in the top left corner.



# Program Codes
```javascript
//Mukesh Rothe  //23070123089  //EXP6
 //Printing numbers using for loop.
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the end value: ";
    cin >> num ;
    for(int i = 1; i<=num; i++)
    {
        cout<< "  " <<i;
    }
    return 0;
}

//Mukesh Rothe  //23070123089  //EXP6
//Printing numbers using while loop.
#include<iostream>
using namespace std;
int main ()
{ int a,i=1;
    cout << "Enter end value: ";
    cin >> a;
    while( i <= a)
    { 
        cout<< " "<<i;
        i++;
    }
    return 0;

}

//Mukesh Rothe  //23070123089  //EXP6
//Triangular star pattern
#include<iostream>
using namespace std;
int main ()
{
    int row;
    cout<< "Enter number of rows: ";
    cin >> row;
    for ( int i =0; i<row ; i++)
    { for(int j= 0 ; j<= i; j++)
    {
        cout << "*";
    }
    cout << endl;
    }
    return 0;
}

//Mukesh Rothe  //23070123089  //EXP6
//Square shaped star pattern.
#include<iostream>
using namespace std;
int main ()
{ int r;
    cout<< "Enter number of rows: ";
    cin>> r;
    for(int i = 0; i<=r-1; i++)
    { for (int j =0; j<=r-1; j++)
    {
        cout << "*" ;
    }
 cout << endl;
    }
    return 0;
}

//Mukesh Rothe  //23070123089  //EXP6
//Pyramid of star
#include<iostream>
using namespace std;
int main ()
{
    int row;
    cout<< "Enter number of rows: ";
    cin >> row;
    for ( int i =0; i<row ; i++)
    { for ( int k = row-1 ; k>i; k--)
    {
        cout << " ";
    }
        for(int j= 0 ; j<2*i+1; j++)
    {
        cout << "*";
    }
    cout << endl;
    }
    return 0;
}

//Mukesh Rothe  //23070123089  //EXP6
//Sum of the numbers printed
#include<iostream>
using namespace std;
int main()
{
    int sum = 0, num;
    cout << "Enter last number: ";
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        sum = sum + i;
        

    }
    cout << "Sum is: "<<sum;
    return 0;

}

//Mukesh Rothe  //23070123089  //EXP6
//Floyd triangle
#include<iostream>
using namespace std;
int main()
{
    int row, a=1;
    cout<< "Enter number of rows: ";
    cin >> row;
    for ( int i =0; i<row ; i++)
    { for(int j= 0 ; j<= i; j++)
    { 
        cout << " "<<a;
        a++;
    }
    
    cout << endl;
    }
    return 0;
}

//Mukesh Rothe  //23070123089  //EXP6
//Floyd triangle of alphabets
#include<iostream>
using namespace std;
int main()
{
    int row; 
    char a='A';
    cout<< "Enter number of rows: ";
    cin >> row;
    for ( int i =0; i<row ; i++)
    { for(int j= 0 ; j<= i; j++)
    { 
        cout << " "<<a;
        a++;
    }
    
    cout << endl;
    }
    return 0;
}

//Mukesh Rothe  //23070123089  //EXP6
//Password validation
#include<iostream>
#include<string>
using namespace std;
int main ()
{ string pass;
    do
{
 cout << "Enter a password: ";
 cin >> pass;
 if (pass=="SIT")
 {
    cout << "Success!";
 }
 else
 {
    cout << "Try again"<<endl;
 }
} 
while (pass != "SIT");
return 0;
}
```

# Output:
FloydABCD-

![Screenshot 2024-08-22 215136](https://github.com/user-attachments/assets/bb3a732a-f1e8-485a-bee5-4db62f5d7fb3)

Counting-

![Screenshot 2024-08-22 215235](https://github.com/user-attachments/assets/662f0bea-3ce9-4586-987c-c5b3582611be)

Floyd-

![Screenshot 2024-08-22 215330](https://github.com/user-attachments/assets/84abb8ae-dd48-4575-b21b-1b442203ad1b)

NumberPrint-

![Screenshot 2024-08-22 215457](https://github.com/user-attachments/assets/b5fc8ac6-c6ba-4f52-9c99-c832ccaa4cc4)

Password-

![Screenshot 2024-08-22 215841](https://github.com/user-attachments/assets/7628c616-38b3-44a5-a46a-2be26a00115f)

Pyramid-

![Screenshot 2024-08-22 215943](https://github.com/user-attachments/assets/df9ab387-2aea-4c57-a239-1e24bfdbf64d)

Star_1-

![Screenshot 2024-08-22 220056](https://github.com/user-attachments/assets/828011aa-22bb-493f-a800-43a9a93f9fe3)

Star_2-

![Screenshot 2024-08-22 220142](https://github.com/user-attachments/assets/f480f6ec-22f4-4908-a0b1-bca2b003b992)

While-

![Screenshot 2024-08-22 220314](https://github.com/user-attachments/assets/e75b1573-213d-46ad-8e6b-e3f0c9644007)


## Conclusion

- We learned to use `for` loops, `while` loops, and nested loops in C++.
