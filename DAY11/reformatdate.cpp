class Solution {
public:
    string reformatDate(string date) {
 unordered_map<string, string> monthMap = 
            {
            {"Jan", "01"},{"Feb", "02"}, {"Mar","03"}, {"Apr","04"},{"May", "05"},{"Jun", "06"},
            {"Jul", "07"},{"Aug", "08"},{"Sep", "09"},{"Oct", "10"},{"Nov", "11"},{"Dec", "12"}};
        stringstream s(date);
        string dt,month,yr;
        
       s>>dt>>month>>yr;
       monthMap[month];
      int i=0;
        string te="";
       while(!(dt[i]>='a'&&dt[i]<='z'))
       {
           te+=dt[i];
           i++;
       }
         if(te.length()==1)te='0'+te;    
     return yr+'-'+ monthMap[month]+'-'+te;
    }
};