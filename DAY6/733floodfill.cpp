class Solution {
public:
     bool isvalid(int sr,int sc,vector<vector<int>>& image)
    {
        bool flag=true;
        if((sr>=0&&sr<image.size())&&(sc>=0&&sc<image[0].size()))return flag;
        else {
            flag=false;
            return flag;
        }
            
    }
 void func(vector<vector<int>>& image, int sr, int sc, int newColor,int oldcolor)
    {
        
        
                if(isvalid(sr-1,sc,image)){
                    if(image[sr-1][sc]==oldcolor){
                      image[sr-1][sc]=newColor;
                        func(image,  sr-1,  sc, newColor,oldcolor);}
                }
                 if(isvalid(sr,sc-1,image)){
                    if(image[sr][sc-1]==oldcolor){
                        image[sr][sc-1]=newColor;
                         func(image,  sr,  sc-1, newColor,oldcolor);}
                }
                if(isvalid(sr+1,sc,image)){
                    if(image[sr+1][sc]==oldcolor){image[sr+1][sc]=newColor;
                    func(image,  sr+1,  sc, newColor,oldcolor);}
                }
                 if(isvalid(sr,sc+1,image)){
                    if(image[sr][sc+1]==oldcolor){image[sr][sc+1]=newColor;
                  func(image,  sr,  sc+1, newColor,oldcolor);}
                }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
       
           int oldcolor=image[sr][sc];
        if(newColor==image[sr][sc])return image;
        image[sr][sc]=newColor;
             func(image,sr,sc,newColor,oldcolor);
 return image;
        
    }
   
    
};