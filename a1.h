
ifndef A1_H
def A1_H

class Entity
{
   Entity();
   Entity(int x,int y)
   {
       mx=x;
       my=y;
   }
   public:
      int getX()  const;
      void setX(int x);

    private:
      int mx;
      int my;



}
