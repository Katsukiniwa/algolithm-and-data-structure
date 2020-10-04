n=gets.to_i
ans=0
while n>0
	ans=1 if n%7==0
	ans=1 if n%4==0
	n-=4
end
puts ans==1? "Yes": "No"