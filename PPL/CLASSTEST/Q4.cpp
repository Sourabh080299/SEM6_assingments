#include <iostream>
using namespace std;

struct box{
    char maker[40]; 
    float height; 
    float width; 
    float length; 
    float volume;
};

//(a)
void show_box(const box t){
    cout << "Maker: " << t.maker << "\nHeight: " << t.height
    << "\nWidth: " << t.width << "\nLength: " << t.length
    << "\nVolume: " << t.volume << endl;
}

//(b)
void volume_box(box * t){
    t->volume = t->height * t->width * t->length;
}

//(d)
void show_box_by_ref(const box &t){
    cout << "Maker: " << t.maker << "\nHeight: " << t.height
    << "\nWidth: " << t.width << "\nLength: " << t.length
    << "\nVolume: " << t.volume << endl;
}

//(e)
void volume_box_by_ref(box &t){
    t.volume = t.height * t.width * t.length;
}

//(c)
int main(){
 
    printf("First cube:- ");
    box cube = {"First Cube", 5, 4, 10, 0};
    //show_box(cube); 
    volume_box(&cube); 
    show_box(cube);

    printf("\nSecond cube:- ");
    box cube1 = {"Second cube", 5, 4, 10, 0};
    //show_box(cube1); 
    volume_box_by_ref(cube1); 
    show_box_by_ref(cube1); 
    return 0;
}

