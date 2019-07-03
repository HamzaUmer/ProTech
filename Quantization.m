fs=5000
n=0:99
for b=1:4
    f=[500 2000 3000 4500]
    x=sin(2*pi*f(b)*n/fs)
    subplot(2,2,b)
    stem(n,x)
end
