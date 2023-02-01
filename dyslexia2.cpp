#include<iostream>
#include<windows.h>
using namespace std;


//This function will check the input and if user put something besides y Y n N it will ask to give input again
string disclaimer(string ans){
    while(ans!="y" && ans!="Y" && ans!="n" && ans!="N"){
        if (ans=="e" || ans=="E"){
            exit(0);
        }
        else{
            cout<<"Please type your answer in y or n only"<<endl;
            cin>>ans;
        }

    }
    return ans;

}

int main(){

    int yes_Count=0;
    string ans;

    cout<<"---------------------------------------------------------------------------------------"<<endl;
    cout<<"Dyslexia, also known as reading disorder, is a disorder characterized by reading below the expected level for their age. It is a common condition that makes it hard to work with language. "<<endl<<endl;
    Sleep(1000);
    cout<<"This test is designed to determine whether you demonstrate symptoms similar to those of dyslexia in adults."<<endl<<endl;
    Sleep(1000);
    cout<<"Answer the questions in yes(y) or no(n) and the self test will deterime whether you demonstrate symptoms similar to those of dyslexia or not"<<endl<<endl;
    Sleep(1000);
    cout<<"There are total 13 Question that you have to answer.";
    cout<<"To exit the programe enter 'E/e' "<<endl;
    Sleep(1000);

    cout<<"-------------------------------------------------------------Self-test----------------------------------------------------------------------"<<endl;

    //Q1
    cout<<"Q1. Do you need to read a sentence or paragraph three or four times before you \"get it\"? (Answer in y/n only) "<<endl;
    cin>>ans;
    ans = disclaimer(ans);
    if(ans == "y" || ans == "Y"){
        yes_Count += 1;
    }
    else{
        exit;
    }


    //Q2
    cout<<"\nQ2. Do you avoid situations where you'll have to read out loud? (Answer in y/n only)"<<endl;
    cin>>ans;
    ans = disclaimer(ans);
    if(ans == "y" || ans == "Y"){
        yes_Count += 1;
    }
    else{
        exit;
    }


    //Q3
    cout<<"\nQ3. Do you mix up letters or forget them entirely when writing? (Answer in y/n only) "<<endl;
    cin>>ans;
    ans = disclaimer(ans);
    if(ans == "y" || ans == "Y"){
        yes_Count += 1;
    }
    else{
        exit;
    }


    //Q4
    cout<<"\nQ4. Do you misspell common words - misspelling them a different way every time? (Answer in y/n only) "<<endl;
    cin>>ans;
    ans = disclaimer(ans);
    if(ans == "y" || ans == "Y"){
        yes_Count += 1;
    }
    else{
        exit;
    }


    //Q5
    cout<<"\nQ5. Do you find yourself reading slower than most people you know? (Answer in y/n only) "<<endl;
    cin>>ans;
    ans = disclaimer(ans);
    if(ans == "y" || ans == "Y"){
        yes_Count += 1;
    }
    else {
        exit;
    }


    //Q6
    cout<<"\nQ6. Do you avoid projects that involve a lot of reading? (Answer in y/n only) "<<endl;
    cin>>ans;
    ans = disclaimer(ans);
    if(ans == "y" || ans == "Y"){
        yes_Count += 1;
    }
    else {
        exit;
    }



    //Q7
    cout<<"\nQ7. Have you found yourself turning down promotions or opportunities for advancement in your career? (Answer in y/n only)) "<<endl;
    cin>>ans;
    ans = disclaimer(ans);
    if(ans == "y" || ans == "Y"){
        yes_Count += 1;
    }
    else {
        exit;
    }


    //Q8
    cout<<"\nQ8 Do you struggle to pronounce long words out loud, even if you know them? (Answer in y/n only) "<<endl;
    cin>>ans;
    ans = disclaimer(ans);
    if(ans == "y" || ans == "Y"){
        yes_Count += 1;
    }
    else{
        exit;
    }


    //Q9
    cout<<"\nQ9 Are you accused of \"not listening\" because you can't summarize or recall details of a recent conversation? (Answer in y/n only) "<<endl;
    cin>>ans;
    ans = disclaimer(ans);
    if(ans == "y" || ans == "Y"){
        yes_Count += 1;
    }
    else {
        exit;
    }

    //Q10
    cout<<"\nQ10. Do you lose your place when reading, even if the topic is interesting to you? (Answer in y/n only) "<<endl;
    cin>>ans;
    ans = disclaimer(ans);
    if(ans == "y" || ans == "Y"){
        yes_Count += 1;
    }
    else{
        exit;
    }


    //Q11
    cout<<"\nQ11. Do you get lost when following directions, or confuse your left for your right? (Answer in y/n only)"<<endl;
    cin>>ans;
    ans = disclaimer(ans);
    if(ans == "y" || ans == "Y"){
        yes_Count += 1;
    }
    else{
        exit;
    }


    //Q12
    cout<<"\nQ12. Do you confuse or forget the names of common household objects - calling a fork a spoon, for instance? (Answer in y/n only) "<<endl;
    cin>>ans;
    ans = disclaimer(ans);
    if(ans == "y" || ans == "Y"){
        yes_Count += 1;
    }
    else{
        exit;
    }


    //Q13
    cout<<"\nQ13. Do you have very particular requirements for your favorite fonts, paper color, or other visuals while at work? (Answer in y/n only) "<<endl;
    cin>>ans;
    if(ans == "y" || ans == "Y"){
        yes_Count += 1;
    }
    else {
        exit;
    }


    cout<<"-----------------------------------------Self-Test Successfully Completed----------------------------------------------"<<endl;
    cout<<"Please wait for your results!!"<<endl<<endl;
    Sleep(2000);



    if(yes_Count >= 9){
        cout<<"This test is designed to determine whether you demonstrate symptoms similar to those of dyslexia in adults. A high score does not necessarily mean you have dyslexia or another disorder."<<endl<<endl;
        Sleep(1000);
        cout<<"Your score in this test is "<<yes_Count<<" out of 13 "<<endl<<endl;
        Sleep(1000);
        cout<<"There is a high possibility that you may be experiencing symptoms of dyslexia. Should see a trained health care professional. "<<endl<<endl<<endl;
    }
    else if (5 < yes_Count < 9){
        cout<<"This test is designed to determine whether you demonstrate symptoms similar to those of dyslexia in adults. A high score does not necessarily mean you have dyslexia or another disorder."<<endl<<endl;
        Sleep(1000);
        cout<<"Your score in this test is "<<yes_Count<<" out of 13"<<endl<<endl;
        Sleep(1000);
        cout<<"There is a mild possibility that you may be experiencing symptoms of dyslexia. "<<endl<<endl<<endl;
    }
    else if(yes_Count < 5){
        cout<<"This test is designed to determine whether you demonstrate symptoms similar to those of dyslexia in adults. A high score does not necessarily mean you have dyslexia or another disorder."<<endl<<endl;
        Sleep(1000);
        cout<<"Your score in this test is "<<yes_Count<<"out of 13"<<endl<<endl;
        Sleep(1000);
        cout<<"There is very very less possibility that you may be experiencing symptoms of dyslexia. "<<endl<<endl<<endl;
    }
}