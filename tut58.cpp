#include<iostream>
using namespace std;

class CWH{
    protected:
    string title;
    float rating;
public:
    CWH(string s, float r){
        title = s;
        rating = r;
    }                         // PURE VIRTUAL FUNCTION
    virtual void display()=0; // Do nothing function
};

class CWHVideo: public CWH
{
    float videolength;
    public:
        CWHVideo(string s, float r, float vl): CWH(s, r){
            videolength = vl;
        }
    void display(){
        cout<<"This is an amazing video with title "<<title<<endl;
        cout<<"Ratings: "<<rating<< "out of 5 stars"<<endl;
        cout<<"Lenghtof the video is: "<<videolength<<" minutes"<<endl;
    }
};

class CWHText: public CWH
{
    int words;
    public:
        CWHText(string s, float r, int wc): CWH(s, r){
                words = wc;
        }
    void display(){
        cout<<"This is an amazing text tutorial with title "<<title<<endl;
        cout<<"Rating of this text tutorial: "<<rating<<" out of 5 stars"<<endl;
        cout<<"No of words in this text tutorial is: "<<words<<" words"<<endl;
    }
};

int main(){
    string title = new char[30];
    float rating, vlen;
    int words;

    // for code with harry video
    title = "Django tutorial 1.";
    vlen = 4.50;
    rating = 4.89;
    CWHVideo djVideo(title, rating, vlen);
    // djVideo.display();

    // for code with harry text
    title = "Django tutorial Text";
    words = 433; 
    rating = 4.16;
    CWHText djText(title, rating, words);
    //djText.display();

    CWH* tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &djText;

    tuts[0] -> display();
    tuts[1] -> display();




    return 0;
}