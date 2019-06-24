import java.awt.*;
import java.awt.event.*;
class col extends Frame implements ItemListener
{
Choice c1;
Label l1;
Color c[]={Color.red,Color.blue,Color.green,Color.yellow,Color.white};
public col(String t)
{
super(t);
c1=new Choice();
l1=new Label("Color");
c1.addItem("Red");
c1.addItem("Blue");
c1.addItem("Green");
c1.addItem("Yellow");
c1.addItem("Exit");
setLayout(new FlowLayout());
setSize(200,300);
show();
add(c1);
add(l1);
c1.addItemListener(this);
}
public void itemStateChanged(ItemEvent e)
{
int a=c1.getSelectedIndex();
if(a==4)
{
System.exit(0);
}
setBackground(c[a]);
}
}
