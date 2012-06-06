struct sand
{
   sand(state s = DRY, float w) : mState(s), mWeight(w)
   {
   }
   enum state { DRY, WET};
   state mState;
   float mWeight;
};
