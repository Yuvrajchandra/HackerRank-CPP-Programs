 class Rectangle
 {
  
    public: int height, width;
    void display()
    {
        cout<<width<<" "<<height;
    }
 };
 class RectangleArea : public Rectangle
 {
   public:  void read_input()
     {
         cin>>width>>height;

     }
     void display()
     {
         cout<<endl<<width*height;
     }
 };
