
total=$(top -l 1 | grep -E "^CPU" |grep -Eo '[^[:space:]]+%' | head -1 | sed s/\%/\/)
max=100
#total=`echo "$max - $idle" | bc`

high=70.0
low=30.0
#echo "$idle"
echo "CPU Usage: $total%"
if [ $(echo "$total >= $high" | bc) -eq 1 ]; then
echo "Overloaded "
elif [ $(echo "$total <= $low" | bc ) -eq 1 ]; then
echo "Lightly Loaded"
else
echo "Moderately Loaded"
fi
