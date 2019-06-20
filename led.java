import java.awt.*;
import java.awt.event.*;
class led extends Frame implements ActionListener,ItemListener
{
abc x=new abc();
Button b1,b2,b3,b4,b5,b6;
Choice c1;
int a,c;
public led(String t)
{
super(t);
b1=new Button("All On");
b2=new Button("All Off");
b3=new Button("Even");
b4=new Button("Odd");
b5=new Button("One By One");
b6=new Button("Exit");
c1=new Choice();
for(c=1;c<=8;c++)
{
c1.addItem(String.valueOf(c));
}
b1.addActionListener(this);
b2.addActionListener(this);
b3.addActionListener(this);
b4.addActionListener(this);
b5.addActionListener(this);
b6.addActionListener(this);
c1.addItemListener(this);
setLayout(new FlowLayout());
{
add(b1);
add(b2);
add(b3);
add(b4);
add(b5);
add(b6);
add(c1);
setSize(300,300);
show();
}
}
public void itemStateChanged(ItemEvent e)
{
int b=c1.getSelectedIndex();
if(b==1)
{
x.fn(1);
}
if(b==2)
{
x.fn(2);
}
if(b==3)
{
x.fn(4);
}
if(b==4)
{
x.fn(8);
}
if(b==5)
{
x.fn(16);
}
if(b==6)
{
x.fn(32);
}
if(b==7)
{
x.fn(64);
}
if(b==8)
{
x.fn(128);
}
show();
}
public void actionPerformed(ActionEvent f)
{
if(f.getSource()==b1)
{
x.fn(255);
}
if(f.getSource()==b2)
{
x.fn(0);
}
if(f.getSource()==b3)
{
x.fn(172);
}
if(f.getSource()==b4)
{
x.fn(85);
}
if(f.getSource()==b5)
{
for(a=1;a<=255;a++)
{
try
{
Thread.sleep(4000);
}catch(Exception e){}
}
x.fn(a);
}
}
if(f.getSource()==b6)
{
System.exit(0);
}
show();
}
}


