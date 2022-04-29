Meeting Schdeuler


given a start time and end time .. return all the available meeting rooms

class Room
{
   string id;
   string name;
   //bool isBooked;
   map<int,int> time;
   map<pair<int,int>, int> persons; 
   void setTime(int strttime,int endtime)
   {
    mp[strtime]=endtime;
   }
}

class Booking
{
  int n=10;
  vector<Room> rooms;
  map<int, room> mapp;
  available(int strttime,int endtime)
  {
     List<Room>room; 9-10 3-4 11-12
     for(i=0;i=10;i++)
     {
        Room temp=rooms[i];
        bool flag=true;
        for(auto x:temp.time)
        {       1030    1100           1130  1200           1100     1130        1130     1200
           if((strtime<=x.first and endtime<=x.second ) or (x.first<=strtime and strtime<=x.second) or (strtime<=x.first and x.second<=endtime)) 
            flag=false;
            break;     
        }
        if(flag==true)
         room.insert(temp);
       
      }
      
      return room;
  }  
  
  books(list<rooms> avl,int id, int strtime,int endtime)
  {
     if(mapp.find(id)!=mp.end())
     Room temp=mapp[id];
     if(strtime>=0 || endtime=>0 || strtime<=2400 || endtime<=2400)
     temp.setTime(strtime,endtime);
     
     
  }
}