/*
main.cpp
LinkedIn exercise

Sample exercise from HackerRank for linkedIn job
Task: to create a staircase given the number of steps

Example: number of steps 5
output:
    #
   ##
  ###
 ####
#####
 
Created by Sam Singh on 9/24/16.
Copyright (c) 2016 Sam Singh. All rights reserved.
*/


#include <iostream>

void staircase(int);
void numbering(int);

using namespace std;

int main() {
    
    int example = 0;
    
    cout << "Please enter the height of the staircase" << endl;
    cin >> example;
    cout << endl;
    
    staircase(example);
    
    cout << endl;
    cout << "This is the end ";
    return 0;
}

//-------------------------------------------------------
//-------------------------------------------------------

void staircase (int n)
{
 
    for (int x = 0;  x <= n; x++ )
    {
        
        numbering(x);
        
        for (int y = n; y >= (x + 1); y--)
        {
            cout << " " ;
        }
        
        
        for( int u = 0 ; u <= x ; u++  )
        {
            
            cout << "#";
        }
        
        
        cout << endl;
    }
}

//-------------------------------------------------------
//-------------------------------------------------------

void numbering (int y)
{
    
    if (y < 10 && y >= 0)
    {
        cout << "(" << y << ")  ";
    }
    if (y>=10 && y < 100 )
    {
        cout << "(" << y << ") ";
    }
    if (y>=100 && y < 1000)
    {
        cout << "(" << y << ")";
    }
        
}
