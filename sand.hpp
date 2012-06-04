struct sand
{
   sand(state s = DRY) : mState(s)
   {
   }
   enum state { DRY, WET};
   state mState;
};
