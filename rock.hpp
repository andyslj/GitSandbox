class rock
{
public:
   enum color { WHITE, BLUE, RED };
      
   rock(color c);

private:
   color mColor;
   int mWeight;
}
