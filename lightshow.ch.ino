   int led[]={2,3,4,5,6,7};
  const int button =13;
void setup()
  {
  pinMode(button, INPUT);
  int index;
  for(index=0;index<=6;index++)
  {
    pinMode(led[index],OUTPUT);  
    }
  }
void loop()
{
  int buttonState;
  buttonState=digitalRead(button);
  if(buttonState==HIGH)
  {
    int index;
    for(index=0;index<=5;index++)
    {
      digitalWrite(led[index],LOW);
    }
  }else
  {
   
    int index;
    delay(1100);
    for(index=0;index<=5;index++)
    {
      digitalWrite(led[index],HIGH);
      delay(200);
      digitalWrite(led[index],LOW);
    }
    delay(2800);
    for(index=5;index>=0;index--)
    {
      digitalWrite(led[index],HIGH);
      delay(150);
      digitalWrite(led[index],LOW);
    }
        for(index=0;index<=5;index++)
    {
      digitalWrite(led[index],HIGH);
      delay(200);
      digitalWrite(led[index],LOW);
    }
    delay(400);
    digitalWrite(led[0],HIGH);//da part
    digitalWrite(led[1],HIGH);
    delay(500);
    digitalWrite(led[0],LOW);
    digitalWrite(led[1],LOW);
    digitalWrite(led[4],HIGH);
    digitalWrite(led[5],HIGH);
    delay(500);
    digitalWrite(led[4],LOW);
    digitalWrite(led[5],LOW);
    digitalWrite(led[0],HIGH);
    digitalWrite(led[1],HIGH);
    delay(500);
    digitalWrite(led[0],LOW);
    digitalWrite(led[1],LOW);
    delay(600);
        for(index=5;index>=0;index--)
    {
      digitalWrite(led[index],HIGH);
      delay(150);
      digitalWrite(led[index],LOW);
    }
    delay(300); //base boosted part 1st beats
        for(index=5;index>=0;index--)
    {
      digitalWrite(led[index],HIGH);
    }
    delay(300);
            for(index=5;index>=0;index--)
    {
      digitalWrite(led[index],LOW);
    }
    delay(600);
            for(index=5;index>=0;index--)
    {
      digitalWrite(led[index],HIGH);
    }
    delay(600);
           for(index=5;index>=0;index--)
    {
      digitalWrite(led[index],LOW);
    }
    delay(300);
    //2nd beat
            for(index=5;index>=0;index--)
    {
      digitalWrite(led[index],HIGH);
    }
    delay(300);
            for(index=5;index>=0;index--)
    {
      digitalWrite(led[index],LOW);
    }
    delay(100);
           for(index=5;index>=0;index--)
    {
      digitalWrite(led[index],HIGH);
    }
    delay(400);
               for(index=5;index>=0;index--)
    {
      digitalWrite(led[index],LOW);
    }
    delay(200);
               for(index=5;index>=0;index--)
    {
      digitalWrite(led[index],HIGH);
    }
    delay(400);
               for(index=5;index>=0;index--)
    {
      digitalWrite(led[index],LOW);
    }
    delay(550);
    digitalWrite(led[0],HIGH);
    delay(200);
    digitalWrite(led[0],LOW);
    digitalWrite(led[5],HIGH);
    delay(200);
    digitalWrite(led[5],LOW);
    digitalWrite(led[1],HIGH);
    delay(200);
    digitalWrite(led[1],LOW);
    digitalWrite(led[4],HIGH);
    delay(200);
    digitalWrite(led[4],LOW);
    digitalWrite(led[2],HIGH);
    delay(200);
    digitalWrite(led[2],LOW);
    digitalWrite(led[3],HIGH);
    delay(200);
    digitalWrite(led[3],LOW);
    //time stamp 0:17
    digitalWrite(led[0],HIGH);
    digitalWrite(led[1],HIGH);
    digitalWrite(led[2],HIGH);
    delay(200);
    digitalWrite(led[0],LOW);
    digitalWrite(led[1],LOW);
    digitalWrite(led[2],LOW);
    digitalWrite(led[3],HIGH);
    digitalWrite(led[4],HIGH);
    digitalWrite(led[5],HIGH);
    delay(200);
    digitalWrite(led[3],LOW);
    digitalWrite(led[4],LOW);
    digitalWrite(led[5],LOW);
    digitalWrite(led[0],HIGH);
    digitalWrite(led[1],HIGH);
    digitalWrite(led[2],HIGH);
    delay(200);
    digitalWrite(led[0],LOW);
    digitalWrite(led[1],LOW);
    digitalWrite(led[2],LOW);
    digitalWrite(led[3],HIGH);
    digitalWrite(led[4],HIGH);
    digitalWrite(led[5],HIGH);
    delay(200);
    digitalWrite(led[3],LOW);
    digitalWrite(led[4],LOW);
    digitalWrite(led[5],LOW);
    digitalWrite(led[0],HIGH);
    digitalWrite(led[1],HIGH);
    digitalWrite(led[2],HIGH);
    delay(200);
    digitalWrite(led[0],LOW);
    digitalWrite(led[1],LOW);
    digitalWrite(led[2],LOW);
    digitalWrite(led[3],HIGH);
    digitalWrite(led[4],HIGH);
    digitalWrite(led[5],HIGH);
    delay(200);
    digitalWrite(led[3],LOW);
    digitalWrite(led[4],LOW);
    digitalWrite(led[5],LOW);
    delay(300);
                   for(index=5;index>=0;index--)
    {
      digitalWrite(led[index],HIGH);
    }
    delay(400);
                   for(index=5;index>=0;index--)
    {
      digitalWrite(led[index],LOW);
    }
    delay(400);
                       for(index=5;index>=0;index--)
    {
      digitalWrite(led[index],HIGH);
    }
    delay(100);
                       for(index=5;index>=0;index--)
    {
      digitalWrite(led[index],LOW);
    }
//main beat
            for(index=5;index>=0;index--)
    {
      digitalWrite(led[index],HIGH);
    }
    delay(300);
            for(index=5;index>=0;index--)
    {
      digitalWrite(led[index],LOW);
    }
    delay(500);
           for(index=5;index>=0;index--)
    {
      digitalWrite(led[index],HIGH);
    }
    delay(400);
               for(index=5;index>=0;index--)
    {
      digitalWrite(led[index],LOW);
    }
    delay(200);
        for(index=0;index<=5;index++)
    {
      digitalWrite(led[index],HIGH);
      delay(200);
      digitalWrite(led[index],LOW);
    }
    delay(200);
                   for(index=5;index>=0;index--)
    {
      digitalWrite(led[index],HIGH);
    }
    delay(200);
                       for(index=5;index>=0;index--)
    {
      digitalWrite(led[index],LOW);
    }
    digitalWrite(led[0],HIGH);
    delay(100);
    digitalWrite(led[0],LOW);
    digitalWrite(led[5],HIGH);
    delay(100);
    digitalWrite(led[5],LOW);
    digitalWrite(led[1],HIGH);
    delay(100);
    digitalWrite(led[1],LOW);
    digitalWrite(led[4],HIGH);
    delay(100);
    digitalWrite(led[4],LOW);
    digitalWrite(led[2],HIGH);
    delay(100);
    digitalWrite(led[2],LOW);
    digitalWrite(led[3],HIGH);
    delay(100);
    digitalWrite(led[3],LOW);
    delay(500);
    
    digitalWrite(led[5],HIGH);
    digitalWrite(led[3],HIGH);
    digitalWrite(led[1],HIGH);
    delay(400);
    digitalWrite(led[5],LOW);
    digitalWrite(led[3],LOW);
    digitalWrite(led[1],LOW);
    delay(500);
    digitalWrite(led[5],HIGH);
    digitalWrite(led[3],HIGH);
    digitalWrite(led[1],HIGH);
    delay(400);
    digitalWrite(led[5],LOW);
    digitalWrite(led[3],LOW);
    digitalWrite(led[1],LOW);
    digitalWrite(led[5],HIGH);
    digitalWrite(led[3],HIGH);
    digitalWrite(led[1],HIGH);
    delay(400);
    digitalWrite(led[5],LOW);
    digitalWrite(led[3],LOW);
    digitalWrite(led[1],LOW);
    delay(500);
            for(index=0;index<=4;index++)
    {
      digitalWrite(led[index],HIGH);
      delay(200);
      digitalWrite(led[index],LOW);
    }
                for(index=5;index>=0;index--)
    {
      digitalWrite(led[index],HIGH);
      delay(200);
      digitalWrite(led[index],LOW);
    }
    delay(300);
                for(index=5;index>=0;index--)
    {
      digitalWrite(led[index],HIGH);
    }
    delay(400);
                    for(index=5;index>=0;index--)
    {
      digitalWrite(led[index],LOW);
    }
    delay(200);
                    for(index=5;index>=0;index--)
    {
      digitalWrite(led[index],HIGH);
    }
    delay(400);
                    for(index=5;index>=0;index--)
    {
      digitalWrite(led[index],LOW);
      delay(200);
    }
                    for(index=0;index<=5;index++)
    {
      digitalWrite(led[index],HIGH);
      delay(200);
      digitalWrite(led[index],LOW);
    }
    delay(100);
                        for(index=5;index>=0;index--)
    {
      digitalWrite(led[index],HIGH);
      delay(200);
      digitalWrite(led[index],LOW);
    }
    digitalWrite(led[5],HIGH);
    digitalWrite(led[3],HIGH);
    digitalWrite(led[1],HIGH);
    delay(400);
    digitalWrite(led[5],LOW);
    digitalWrite(led[3],LOW);
    digitalWrite(led[1],LOW);
    delay(400);
    digitalWrite(led[5],HIGH);
    digitalWrite(led[3],HIGH);
    digitalWrite(led[1],HIGH);
    delay(400);
    digitalWrite(led[5],LOW);
    digitalWrite(led[3],LOW);
    digitalWrite(led[1],LOW);
    delay(400);
    digitalWrite(led[4],HIGH);
    digitalWrite(led[2],HIGH);
    digitalWrite(led[0],HIGH);
    delay(400);
    digitalWrite(led[4],LOW);
    digitalWrite(led[2],LOW);
    digitalWrite(led[0],LOW);
    delay(400);
    digitalWrite(led[4],HIGH);
    digitalWrite(led[2],HIGH);
    digitalWrite(led[0],HIGH);
    delay(400);
    digitalWrite(led[4],LOW);
    digitalWrite(led[2],LOW);
    digitalWrite(led[0],LOW);
    delay(400);
    digitalWrite(led[4],HIGH);
    digitalWrite(led[2],HIGH);
    digitalWrite(led[0],HIGH);
    delay(400);
    digitalWrite(led[4],LOW);
    digitalWrite(led[2],LOW);
    digitalWrite(led[0],LOW);
    delay(300);
//0.37 3 on at a time

    digitalWrite(led[5],HIGH);
    digitalWrite(led[3],HIGH);
    digitalWrite(led[1],HIGH);
    delay(400);
    digitalWrite(led[5],LOW);
    digitalWrite(led[3],LOW);
    digitalWrite(led[1],LOW);
    delay(400);
    digitalWrite(led[5],HIGH);
    digitalWrite(led[3],HIGH);
    digitalWrite(led[1],HIGH);
    delay(400);
    digitalWrite(led[5],LOW);
    digitalWrite(led[3],LOW);
    digitalWrite(led[1],LOW);
    delay(400);
    digitalWrite(led[5],HIGH);
    digitalWrite(led[3],HIGH);
    digitalWrite(led[1],HIGH);
    delay(200);
    digitalWrite(led[5],LOW);
    digitalWrite(led[3],LOW);
    digitalWrite(led[1],LOW);
    delay(100);
    digitalWrite(led[5],HIGH);
    digitalWrite(led[3],HIGH);
    digitalWrite(led[1],HIGH);
    delay(200);
    digitalWrite(led[5],LOW);
    digitalWrite(led[3],LOW);
    digitalWrite(led[1],LOW);
    delay(400);
    digitalWrite(led[5],HIGH);
    digitalWrite(led[3],HIGH);
    digitalWrite(led[1],HIGH);
    delay(400);
    digitalWrite(led[5],LOW);
    digitalWrite(led[3],LOW);
    digitalWrite(led[1],LOW);
    delay(400);
    digitalWrite(led[5],HIGH);
    digitalWrite(led[3],HIGH);
    digitalWrite(led[1],HIGH);
    delay(400);
    digitalWrite(led[5],LOW);
    digitalWrite(led[3],LOW);
    digitalWrite(led[1],LOW);
    delay(400);
    //0.40
    digitalWrite(led[0],HIGH);
    digitalWrite(led[5],HIGH);
    delay(200);
    digitalWrite(led[0],LOW);
    digitalWrite(led[5],LOW);
    digitalWrite(led[1],HIGH);
    digitalWrite(led[4],HIGH);
    delay(200);
    digitalWrite(led[1],LOW);
    digitalWrite(led[4],LOW);
    digitalWrite(led[2],HIGH);
    digitalWrite(led[3],HIGH);
    delay(200);
    digitalWrite(led[2],LOW);
    digitalWrite(led[3],LOW);
    //0.41
    digitalWrite(led[2],HIGH);
    digitalWrite(led[3],HIGH);
    delay(200);
    digitalWrite(led[2],LOW);
    digitalWrite(led[3],LOW);
    digitalWrite(led[1],HIGH);
    digitalWrite(led[4],HIGH);
    delay(200);
    digitalWrite(led[1],LOW);
    digitalWrite(led[4],LOW);
    digitalWrite(led[0],HIGH);
    digitalWrite(led[5],HIGH);
    delay(200);
    digitalWrite(led[0],LOW);
    digitalWrite(led[5],LOW);
    digitalWrite(led[0],HIGH);
    digitalWrite(led[5],HIGH);
    delay(200);
    digitalWrite(led[0],LOW);
    digitalWrite(led[5],LOW);
    digitalWrite(led[1],HIGH);
    digitalWrite(led[4],HIGH);
    delay(200);
    digitalWrite(led[1],LOW);
    digitalWrite(led[4],LOW);
    digitalWrite(led[2],HIGH);
    digitalWrite(led[3],HIGH);
    delay(200);
    digitalWrite(led[2],LOW);
    digitalWrite(led[3],LOW);
    digitalWrite(led[0],HIGH);
    digitalWrite(led[5],HIGH);
    delay(200);
    digitalWrite(led[0],LOW);
    digitalWrite(led[5],LOW);
    delay(300);
                    for(index=5;index>=0;index--)
    {
      digitalWrite(led[index],HIGH);
    }
    delay(400);
                        for(index=5;index>=0;index--)
    {
      digitalWrite(led[index],LOW);
    }
    delay(300);
                        for(index=5;index>=0;index--)
    {
      digitalWrite(led[index],HIGH);
    }
    delay(400);
                        for(index=5;index>=0;index--)
    {
      digitalWrite(led[index],LOW);
    }
    delay(500);

    
                        for(index=5;index>=0;index--)
    {
      digitalWrite(led[index],HIGH);
    }
    delay(400);
                        for(index=5;index>=0;index--)
    {
      digitalWrite(led[index],LOW);
    }
    delay(300);
                  for(index=5;index>=0;index--)
    {
      digitalWrite(led[index],HIGH);
      delay(200);
      digitalWrite(led[index],LOW);
    }
    
}
}