#include <stdio.h>
int main () 
{
  
char Name1[20];
  
char Name2[20];
  
int RollNo, RegNo;
  
float Math, English, Bio, Total, Percentage;
  
 
printf ("Enter Your name:");
  
scanf ("%s%s", &Name1, &Name2);
  
 
printf ("Enter Your Roll No:");
  
scanf ("%d", &RollNo);
  
 
printf ("Enter Your Reg No:");
  
scanf ("%d", &RegNo);
  
 
printf ("Enter the marks of Math(Out of 100):");
  
scanf ("%f", &Math);
  
 
printf ("Enter the marks of English(Out of 100):");
  
scanf ("%f", &English);
  
 
printf ("Enter the marks of Bio(Out of 100):");
  
scanf ("%f", &Bio);
  
 
Total = Math + English + Bio;
  
 
Percentage = (Total / 300) * 100;
  
 
printf ("\n\nName: %s%s\n", Name1, Name2);
  
printf ("RollNo: %d\n", RollNo);
  
printf ("RegNo: %d\n", RegNo);
  
printf ("Total: %f\n", Total);
  
printf ("Percentage: %f\n", Percentage);
  
 
if (Percentage >= 90)
    
printf ("Coungratulation You get AA");
  
  else if (Percentage >= 80)
    
printf ("Coungratulation You get A");
  
  else if (Percentage >= 70)
    
printf ("Well done You get B");
  
  else if (Percentage >= 60)
    
printf ("Well done You get C");
  
  else if (Percentage >= 50)
    
printf ("Not Good You get D");
  
  else if (Percentage >= 40)
    
printf ("Bad You get E");
  
  else
    {
      
printf ("Better luck for neoriginalt time Fail");
    
}
  
return 0;

}
