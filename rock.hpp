class rock
{
public:
   enum color { WHITE, BLUE, RED };
      
   rock(color c, int w);

private:
   color mColor;
   int mWeight;
}
