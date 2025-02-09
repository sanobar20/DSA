#include<iostream>
using namespace std;
void pattern1(int n){
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

}
void pattern2(int n){ int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            cout<<"*";
        } cout<<endl;
    }
}
void pattern3(int n){ 
   int i,j;
    for(i=0;i<=n;i++)
	{		
	{
		
	for(j=0;j<=i;j++)
	     	cout<<j<<"";
	}cout<<endl;
	}
}	
void pattern4(int n){ 
   int i,j;
    for(i=0;i<=n;i++)
	{		
	{
		
	for(j=0;j<=i;j++)
	     	cout<<j<<"";
	}cout<<endl;
	}
	
}	
void pattern5(int n){ int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<=n-(i+1);j++)
        {
            cout<<"*";
        } cout<<endl;
    }
}
void pattern6(int n){ int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<=n-(i+1);j++)
        {
            cout<<j<<"";
        } cout<<endl;
    }
}
 void pattern7(int n){
 int i,j;
    for(i=0;i<n;i++){
    	for(j=0;j<n-i-1;j++)
            {cout<<" ";
            }
		for(j=0;j<2*i+1;j++)
			{ cout<<"*";
            }
		for(j=0;j<n-i-1;j++)
			{
                cout<<" ";
             }
	
	cout<<endl;
    
    }
 }
void pattern8(int n)
{
	 {
    int i,j;
    for(i=0;i<n;i++){
    	for(j=0;j<i;j++)
            {cout<<" ";
            }
		for(j=0;j<2*n-(2*i+1);j++)

			{  
                cout<<"*";
            }
		for(j=0;j<i;j++)
			{
                cout<<" ";
             }
	
	cout<<endl;
    
    }
}
}
 void pattern9(int n)
 {
    int i,j;
    for(i=0;i<n;i++){
    	for(j=0;j<n-i-1;j++)
            {cout<<" ";
            }
		for(j=0;j<2*i+1;j++)
			{ cout<<"*";
            }
		for(j=0;j<n-i-1;j++)
			{
                cout<<" ";
             }
	
	cout<<endl;
    
    }
for(i=0;i<n;i++){
    	for(j=0;j<i;j++)
            {cout<<" ";
            }
		for(j=0;j<2*n-(2*i+1);j++)

			{  
                cout<<"*";
            }
		for(j=0;j<i;j++)
			{
                cout<<" ";
             }
	
	cout<<endl;
    
    }
}
void pattern10(int n)
 {
     int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            cout<<"*";
        } cout<<endl;
    }

 for(i=0;i<n;i++)
    {
        for(j=0;j<n-(i+1);j++)
        {
            cout<<"*";
        } cout<<endl;
    }
}
void pattern11(int n){
    int i,j,start;
    for(i=0;i<n;i++)
    {
        if(start%2==0)
        {
            start=1;
        }
        else
        {
            start=0;
        }
        for(j=0;j<=i;j++)
        {
            start=1-start;
            cout<<start;
        }
    }
}
void pattern12(int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        for(j=1;j<=(2*n)-(2*i);j++)
        {
            cout<<" ";

        }
        for(j=1;j>=i;j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void pattern13(int n){ int i,j,num=1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            cout<<num<<" ";
            num=num+1;
        } cout<<endl;
    }
}
void pattern14(int n){ int i;
    char j;
    for(i=0;i<n;i++)
    {
        for(j='A';j<='A'+i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void pattern15(int n){
    int i;
    char j;
    for(i=0;i<n;i++)
    {
        for(j='A';j<='A'+(n-i)-1;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void pattern16(int n){
    
    
        int j,i;
        char ch;
        for(i=0;i<n;i++)
        { ch='A'+i;
            for(j=0;j<=i;j++)
            {
                cout<<ch<<" ";
            }
            cout<<endl;
        }
}
void pattern17(int n){
    int i,j;
    
    for(i=0;i<n;i++){
     
        for(j=0;j<n-i-1;j++)
            {cout<<" ";
            }
             char ch='A';
                int breakpoint=(2*i+1)/2;
        for(j=0;j<2*i+1;j++)
            { 
                cout<<ch<<" ";
               
            if(j<breakpoint)
     {
         ch++;
     }
     else
     {
         ch--;
     }
            }
    
        for(j=0;j<n-i-1;j++)
            {
                cout<<" ";
             }
    
    cout<<endl;
    
    }
    }
void pattern18(int n){
    int i,j;
    for(int i=0;i<n;i++){        
        char ch= 'A'+(n-1);
        for(int j=0;j<=i;j++){
            cout<<ch--<<" ";
        }
        cout<<endl;
    }


}
void pattern19(int n){
    int in1S = 0;
   
   for(int i = 0; i < n; i++) {
       for(int j = 1; j <= n - i; j++) {
           cout << "* ";
       }
       
       for(int j = 0; j < in1S; j++) {
           cout << "  ";
       }
       
       for(int j = 1; j <= n - i; j++) {
           cout << "* ";
       }
       
       in1S += 2;
       cout << endl;
   }
   
   in1S = 2 * (n - 1);
   for(int i = 0; i < n; i++) {
       for(int j = 0; j <= i; j++) {
           cout << "* ";
       }
       
       for(int j = 0; j < in1S; j++) {
           cout << "  ";
       }
       
       for(int j = 0; j <= i; j++) {
           cout << "* ";
       }
       
       in1S -= 2;
       cout << endl;
   }

}
void pattern20(int n)
{
      // initialising the spaces.
      int spaces = 2*n-2;
      
      // Outer loop for printing row.
      for(int i = 1;i<=2*n-1;i++){
          
          // stars for first half
          int stars = i;
          
          // stars for the second half.
          if(i>n) stars = 2*n - i;
          
          //for printing the stars
          for(int j=1;j<=stars;j++){
              cout<<"*";
          }
          
          //for printing the spaces
          for(int j = 1;j<=spaces;j++){
              cout<<" ";
          }
          
          //for printing the stars
          for(int j = 1;j<=stars;j++){
              cout<<"*";
          }
          
          // As soon as the stars for each iteration are printed, we move to the
          // next row and give a line break otherwise all stars
          // would get printed in 1 line.
          cout<<endl;
          if(i<n) spaces -=2;
          else spaces +=2;
      }
      
}

void pattern21(int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            // Corrected condition with '==' instead of '='
            if(i == 0 || i == n-1 || j == 0 || j == n-1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";  // Added an extra space for better alignment
            }
        }
        cout << endl;
    }
}
void pattern22(int n)
{
    for(int i=0;i<2*n-1;i++)
    {
        for(int j=0;j<2*n-1;j++)
        {
            int top=i;
            int left=j;
            int bottom=(2*n-2)-i;
            int right=(2*n-2)-j;
            cout<<n-min(min(top,bottom),min(left,right));

        }
        cout<<endl;
    }
}
int main(){
   int n,a;
   cout<<"1:NForest";
   cout<<endl;
   cout<<"2:Right-Angled Triangle Pattern";
   cout<<endl;
   cout<<"3:Right-Angled Number Pyramid";
   cout<<endl;
   cout<<"4:Right-Angled Number Pyramid - II";
   cout<<endl;
   cout<<"5: Inverted Right Pyramid";
   cout<<endl;
   cout<<"6:Inverted Numbered Right Pyramid";
   cout<<endl;
   cout<<"7:Star Pyramid";
   cout<<endl;
   cout<<"8:Inverted Star Pyramid";
   cout<<endl;
   cout<<"9:Diamond Star Pattern";
   cout<<endl;
   cout<<"10: Half Diamond Star Pattern";
   cout<<endl;
    cout<<"enter pattern of choice:";
    cout<<endl;
    cout<<"11:Binary number triangle:";
    cout<<endl;
    cout<<"12:Number crown:";
    cout<<endl;
    cout<<"13:Increasing Number triangle:";
    cout<<endl;
    cout<<"14: Increasing Letter Triangle Pattern";
    cout<<endl;
    cout<<"15:Reverse Letter Triangle Pattern";
    cout<<endl;
    cout<<"16:Alpha-Ramp Pattern";
    cout<<endl;
    cout<<"17:Alpha-Hill Pattern";
    cout<<endl;
    cout<<"18:Alpha-Triangle Pattern";
    cout<<endl;
    cout<<"19:Symmetric-Void Pattern";
    cout<<endl;
    cout<<"20:Symmetric-Butterfly Pattern";
    cout<<endl;
    cout<<"21:Hollow Rectangle Pattern";
    cout<<endl;
    cout<<"22:The Number Pattern";
    cout<<endl;
    cout<<"select a pattern of your choice:";
    cin>>a;
    cout<<"give the number of iterations:";
    cout<<endl;
    cin>>n;
    switch(a){
		case 1:
			pattern1(n);
            break;
        case 2:
        	pattern2(n);
        	break;
        case 3:
        	pattern3(n);
        	break;
        case 4:
        	pattern4(n);
        	break;
        case 5:
        	pattern5(n);
        	break;
        case 6:
        	pattern6(n);
        	break;
        case 7:
        	pattern7(n);
        	break;
        case 8:
        	pattern8(n);
        	break;
        case 9:
        	pattern9(n);
        	break;
        case 10:
        	pattern10(n);
        	break;
        case 11:
            pattern11(n);
            break;
        case 12:
            pattern12(n);
            break;
        case 13:
            pattern13(n);
            break;
        case 14:
            pattern14(n);
            break; 
        case 15:
            pattern15(n);
            break; 
        case 16:
            pattern16(n);
            break;
        case 17:
            pattern17(n);
            break;  
        case 18:
            pattern18(n);
            break;   
        case 19:
            pattern19(n);
            break; 
        case 20:
            pattern20(n);
            break;      
        case 21:
            pattern21(n);
            break;     
        case 22:
            pattern22(n);
            break;      
        default:
        	cout<<"will be updating soon";
        	break;
	}

return 0;
}
