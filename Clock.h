class Clock 
{
  private:
  int hours; // TimeSpan
  int mins;
  int secs;
  
  public:
  
  Clock(int Hours, int Mins, int Secs) :
  hours(Hours),mins(Mins),secs(Secs)
  {} // Constructor
  
  void Setup(int Hours, int Mins, int Secs) // Setup TimeSpan
  {
  if(Hours < 25 && Mins < 61 && Secs < 61)
  {
  hours = Hours;
  mins = Mins;
  secs = Secs;
  };
  }
  
  void Tick() // Increment a second 
  {
  if(secs < 59)
  {
  secs++;
    return;
  }
    else 
    {
    secs = 0;
    if(mins < 59)
    {
      mins++;
      return;
    }
      else 
      {
      mins = 0;
        if(hours < 23)
        {
          hours++;
          return;
        }
        else 
        {
        hours = 0;
        }
      }
    }
  }
  // accessors
  int GetSecs() {
    return secs;
  }
  int GetMins() {
    return mins;
  }  
  int GetHours() {
    return hours;
  }
  // TimeSpan to string (HH:MM:SS)
  char* ToString() 
  {
  char ch[8] = "";
    if(hours > 9)
     strcat(ch,itoa(hours,new char[2],10));
    else 
    {
    strcat(ch,"0");
    strcat(ch,itoa(hours,new char[1],10));
    }
     strcat(ch,":");
     if(mins > 9)
     strcat(ch,itoa(mins,new char[2],10));
    else 
    {
      strcat(ch,"0");
    strcat(ch,itoa(mins,new char[1],10));
    }
     strcat(ch,":");
     if(secs > 9)
     strcat(ch,itoa(secs,new char[2],10));
    else 
    {
        strcat(ch,"0");
    strcat(ch,itoa(secs,new char[1],10));
    }
    return (char*)ch;
  }
};
