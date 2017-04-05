a = gets.to_i

if a % 2 == 1
    print '7'
    a -= 3
end

a = (a/2).to_i

for i in 1..a
    print 1
end
