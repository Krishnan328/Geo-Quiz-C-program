#include<stdio.h>
#include<string.h>

int main()
{
int i,j,c,f,flag=0,flag2=0;

// these are the questions
char questions[200][200]={{"Q1. Name a country that shares it’s boundary with India"},
    {"Q2. Which is the smallest state in India ?"},
    {"Q3. China is the ___ largest country in the world ?"},
    {"Q4. From Gujarat to Arunachal Pradesh, the time lag is of how many hours?"},
    {"Q5. What is the southernmost point of Indian mainland?"},
    {"Q6. Which neighbouring country of India is an island ?"},
    {"Q7. Name any state of India that shares international boundaries"},
    {"Q8. Which is the largest state (area-wise) of India ?"},
    {"Q9. Name any one Indian state which are situated on the eastern coast of India."},
    {"Q10. Name any one Indian state which are situated on the western coast of India."},
    {"Q11. Name the state that share border with Myanmar"},
    {"Q12. The most continuous range consisting of the loftiest peaks with an average height of 6,000 metres is known as the ____"},
    {"Q13. Name the mountain ranges located in the eastern part of India"},
    {"Q14. The valleys lying between Lesser Himalayas and the Shiwaliks are known as the ____ "},
    {"Q15. Due to the deposition of silt, the rivers in their lower course split into numerous channels, known as ____"},
    {"Q16. What are crescent-shaped dunes found in the Indian desert?"},
    {"Q17. Which is the highest peak in India?"},
    {"Q18. Name any one hill in the southeast of the Eastern Ghats?"},
    {"Q19. The newer, younger deposits of the flood plains are called ____ ."},
    {"Q20. The Indian Desert lies towards the western margin of ____ ."},
    {"Q21. The area drained by a single river system is called a ___ "},
    {"Q22. The world’s largest drainage basin is of the river ___ ."},
    {"Q23. An area through which a river and its tributaries flow is called ___"},
    {"Q24. Which is the largest tributary of the Ganga?"},
    {"Q25. Most of the Himalayan rivers are ___ ."},
    {"Q26. The Brahmaputra rises in ___"},
    {"Q27. The river Brahmaputra is known as the Tsang Po in Tibet and ___ in Bangladesh."},
    {"Q28. The state of normal rainfall increasing suddenly and continuing constantly for several days is known as ___ ."},
    {"Q29. In winter, the western cyclonic disturbances originate from which sea?"},
    {"Q30. Which state experience loo in summers?"},
    {"Q31. Which is the latitude that runs through the centre of the Earth?"},
    {"Q32. Which is the longest river in the world?"},
    {"Q33. Which is the largest desert in the world?"},
    {"Q34. What are the branches of a river called?"},
    {"Q35. Which is the largest island in the world?"},
    {"Q36. Which is the coldest continent in the world?"},
    {"Q37.  Name the river that is not crossed by any bridges"},
    {"Q38. Name the city that is located in two countries."},
    {"Q39.  Which country produces maximum aluminium in the world?"},
    {"Q40. What is the study of landforms called?"}};  

// these are the answers
char a[200][200]={{"nepal"},
       {"goa"},
       {"fourth"},
       {"two"},
       {"kanyakumari"},
       {"maldives"},
       {"punjab"},
       {"rajasthan"},
       {"telangana"},
       {"karnataka"},
       {"mizoram"},
       {"himadri"},
       {"purvachal"},
       {"duns"},
       {"distributaries"},
       {"narchans "},
       {"kanchenjunga"},
       {"javadi "},
       {"khadar"},
       {"aravali"},
       {"drainage"},
       {"amazon"},
       {"basin"},
       {"yamuna"},
       {"perennial"},
       {"tibet"},
       {"jamuna"},
       {"burst"},
       {"mediterranean "},
       {"haryana"},
       {"equator"},
       {"nile"},
       {"sahara"},
       {"tributaries"},
       {"greenland"},
       {"antarctica"},
       {"amazon"},
       {"istanbul"},
       {"jamaica"},
       {"geomorphology"}};
       
       printf("\n\t\t WELCOME TO THE\n\n");
       printf("\n\t\t GEO QUIZ\n\n");
       int n,m,  count = 0, ans = 0, ans2=0;
       printf("Enter a number from 1 to 40\n");
       scanf("%d",&n);
       printf("%s\n",questions[n-1]);

       char b[100],alpha;
       char d='_';
       c=strlen(&a[n-1]);

       for(j=0;j<c;j++)
       {
         printf("%c ",d);
         b[j]=d;
        }
        while (count<6)
        {
            flag=0;
            printf("\t\t Enter a letter of the answer.\n");
            scanf("%s",&alpha);
        
        for(i=0;i<c;i++)
        {
            if (alpha==a[n-1][i])
            {
                b[i]=a[n-1][i];
                flag=1;
                ans++; 
            }
        }
        
        for(i=0;i<c;i++)
        printf("%c ",b[i]);

        if(flag==1){
        printf("\t\t %c is Correct !!\n",alpha);
        printf("\t\t( You Have %d More Letters To Go)\n",c-ans);
            }

        else{
        count++;
        printf(" %c is Incorrect\n",alpha);
        printf(" (You Have only %d More Guesses Left)\n",6-count);
            }
            
        if(ans==c) break;
 }
 
 //start of round 2 if round one is done. if it isnt itll directly say you lost.
 
 if(ans==c) {
     printf("\n\t\t Congratulations!! You have won the first round, now onto second!\n");
     printf("Enter a number from 1 to 40 other than %d\n",n);
     
     scanf("%d",&m);
     for(i=0;;i++){
     if(m==n){
         printf("You have entered the same number as last time. Enter a new number\n");
         scanf("%d",&m);}
         else{break;
     }}
     printf("%s\n",questions[m-1]);
     
     
     char b2[100],beta;
     f=strlen(&a[m-1]);
     char d2='_';
     
     
     for(j=0;j<f;j++)
      {
      printf("%c ",d2);
      b2[j]=d2;
      }
      int count2=0;
      
      
      while (count2<6)
      {
          flag2=0;
          printf("\t\t Enter a letter of the answer.\n");
          scanf("%s",&beta);
          for(i=0;i<f;i++)
          {
            if (beta==a[m-1][i])
            {
                b2[i]=a[m-1][i];
                flag2=1;
                ans2++; 
            }
          }
        
        for(i=0;i<f;i++)
        printf("%c ",b2[i]);

        if(flag2==1){
        printf("\t\t %c is Correct !!\n",beta);
       printf("\t\t( You Have %d More Letters To Go)\n",f-ans2);
            }

        else{
        count2++;
        printf(" %c is Incorrect\n",beta);
        printf(" (You Have only %d More Guesses Left)\n",6-count2);
            }
            
        if(ans2==f) {
                printf("\n\t\t Congratulations!! You have won the game!");}
            
        if(ans2==f) {break;}
        else if(count2==6) {
            printf("\n\t\tYou Lost !! Better Luck Next time\n");}}
 }
 else {
     
     printf("\n\t\tYou Lost !! Better Luck Next time");}

return 0;
} 