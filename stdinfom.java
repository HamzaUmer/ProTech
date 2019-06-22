import java.awt.*;
import java.awt.event.*;
class stdinfom extends Frame implements ActionListener,ItemListener
{
Label l1,l2,l3,l4,l5,l6,l7,l8;
TextField t1,t2,t3;
Choice c1,c2,c3,c4,c5;
Button b1,b2;
int a,t=0;
float p;
public stdinfom(String t)
{
super(t);
l1=new Label("OOP");
l2=new Label("Basic Elec");
l3=new Label("Phy");
l4=new Label("Maths");
l5=new Label("Isl");
l6=new Label("Grade");
l7=new Label("Total");
l8=new Label("Percentage");
t1=new TextField(20);
t2=new TextField(20);
t3=new TextField(20);
c1=new Choice();
c2=new Choice();
c3=new Choice();
c4=new Choice();
c5=new Choice();
b1=new Button("Grade");
b2=new Button("Exit");
for(a=1;a<=100;a++)
{
c1.addItem(String.valueOf(a));
c2.addItem(String.valueOf(a));
c3.addItem(String.valueOf(a));
c4.addItem(String.valueOf(a));
c5.addItem(String.valueOf(a));
}
c1.addItemListener(this);
c2.addItemListener(this);
c3.addItemListener(this);
c4.addItemListener(this);
c5.addItemListener(this);
b1.addActionListener(this);
b2.addActionListener(this);
setLayout(new FlowLayout());
add(l1);
add(c1);
add(l2);
add(c2);
add(l3);
add(c3);
add(l4);
add(c4);
add(l5);
add(c5);
add(b1);
add(b2);
add(l7);
add(t1);
add(l8);
add(t2);
add(l6);
add(t3);
t1.setEditable(false);
t2.setEditable(false);
t3.setEditable(false);
setSize(300,300);
setVisible(true);
show();
}
public void itemStateChanged(ItemEvent f)
{
t=0;
t=c1.getSelectedIndex()+c2.getSelectedIndex()+c3.getSelectedIndex()+c4.getSelectedIndex()+c5.getSelectedIndex();
}
public void actionPerformed(ActionEvent e)
{
if(e.getSource()==b1)
{
p=(float)t/5;
t1.setEditable(true);
t1.setText(String.valueOf(t));
t1.setEditable(false);
t2.setEditable(true);
t2.setText(String.valueOf(p));
t2.setEditable(false);
t3.setEditable(true);
t3.setBackground(Color.white);
if(p>=90)
{
t3.setText("A+");
}
else
{
if(p>=80)
{
t3.setText("A");
}
else
{
if(p>=70)
{
t3.setText("B");
}
else
{
if(p>=60)
{
t3.setText("C");
}
else
{
t3.setText("Fail");
t3.setBackground(Color.red);
}
}
}
}
t3.setEditable(false);
}
if(e.getSource()==b2)
{
System.exit(0);
}
}
}
